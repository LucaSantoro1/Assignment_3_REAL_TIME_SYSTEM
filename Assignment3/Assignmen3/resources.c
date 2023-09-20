/*
 * resources.c
 *
 *  Created on: May 14, 2018
 *  Last modified on: May 21, 2018
 *      Author: Paolo Torroni. All rights reserved.
 */

#include "resources.h"
#include "simulation.h"

int ResourceCount[N_TASKS];
int CurrentPriority[N_SEMAPHORES+1][N_TASKS];


RAPName_t RAPName[5] = {
		"No Shared Resources",
		"No Resource Access Protocol",
		"Non-Preemptive Critical Section Protocol",
		"Highest Locker Protocol",
		"Priority Inheritance Protocol"
};

void EntrySection(int semaphore, int task) {
	switch(ResourceAccessProtocol) {
	case NPP:
		if(task>0) {
			ResourceCount[task]++;
			if(ResourceCount[task]==1)
				taskPrioritySet(0,TOP_PRIORITY);
		}
		break;
	case HLP:
		if(task>0) {
			taskLock();
			ResourceCount[task]++;
			if(Ceiling[semaphore]<CurrentPriority[ResourceCount[task]-1][task]) {
				taskPrioritySet(0,Ceiling[semaphore]);
				CurrentPriority[ResourceCount[task]][task]=Ceiling[semaphore];
			}
			else
				CurrentPriority[ResourceCount[task]][task]=CurrentPriority[ResourceCount[task]-1][task];
			taskUnlock();
		}
		break;
	case NOP:
	case PIP:
		semTake(Semaphore[semaphore],WAIT_FOREVER);
		break;
	case NOR:
	default:
		break;
	}
}

void ExitSection(int semaphore, int task) {
	switch(ResourceAccessProtocol) {
	case NPP:
		if(task>0) {
			ResourceCount[task]--;
			if(ResourceCount[task]==0)
				taskPrioritySet(0,TOP_PRIORITY+task);
		}
		break;
	case HLP:
		if(task>0) {
			taskLock();
			ResourceCount[task]--;
			if(CurrentPriority[ResourceCount[task]][task]>CurrentPriority[ResourceCount[task]+1][task])
				taskPrioritySet(0,CurrentPriority[ResourceCount[task]][task]);
			taskUnlock();
		}
		break;
	case NOP:
	case PIP:
		semGive(Semaphore[semaphore]);
		break;
	case NOR:
	default:
		break;
	}
}
