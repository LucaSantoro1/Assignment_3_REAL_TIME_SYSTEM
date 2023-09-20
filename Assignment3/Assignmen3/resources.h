/*
 * resources.h
 *
 *  Created on: May 14, 2018
 *  Last modified on: May 20, 2018
 *      Author: Paolo Torroni. All rights reserved.
 */

#ifndef RESOURCES_H_
#define RESOURCES_H_

#include "taskLib.h"
#include "semLib.h"

typedef const char RAPName_t[100];
extern int Ceiling[];
extern int ResourceAccessProtocol;
extern SEM_ID Semaphore[];


/* Resource access protocols */
#define NOR 0 /* no resources */
#define NOP 1 /* no protocol */
#define NPP 2 /* Non-Preemptive Critical Section Protocol */
#define HLP 3 /* Highest Locker Protocol */
#define PIP 4 /* Priority Inheritance Protocol */

/* Resource access procedures */
void EntrySection(int semaphore, int task);
void ExitSection(int semaphore, int task);

#endif /* RESOURCES_H_ */
