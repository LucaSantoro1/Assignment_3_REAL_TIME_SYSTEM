/*
 * applications.h
 *
 *  Created on: May 14, 2018
 *  Last modified on: May 21, 2018
 *      Author: Paolo Torroni. All rights reserved.
 */

#ifndef APPLICATIONS_H_
#define APPLICATIONS_H_

#include "resources.h"
#include "dummyTask.h"

extern int Overruns[], ResponseTime[];

/* --> To select our application among those available <-- */
#define APPLICATION_ASSIGNMENT

/* Baseline for worker tasks */
#define TOP_PRIORITY 110

/* Application parameters */
#ifdef APPLICATION_0
	#define N_TASKS 1
	#define TASK_PERIODS {5}
	#define TASK_PHASES {0}
	#define N_SEMAPHORES 0
	#define CEILINGS {  }
	#define APPLICATION Application0
	#define CLEAN_UP_STRING "Simulation ended. Response time: %d. Overruns: %d.\n" 
	#define CLEAN_UP_PARAMS (_Vx_usr_arg_t) ResponseTime[0], (_Vx_usr_arg_t) Overruns[0], 0, 0, 0, 0
#endif

#ifdef APPLICATION_1
	#define N_TASKS 2
	#define TASK_PERIODS {5,25}
	#define TASK_PHASES {1,0}
	#define N_SEMAPHORES 1
	#define CEILINGS { TOP_PRIORITY }
	#define APPLICATION Application1
	#define CLEAN_UP_STRING "Simulation ended. Response times: %d, %d. Overruns: %d, %d.\n" 
	#define CLEAN_UP_PARAMS (_Vx_usr_arg_t) ResponseTime[0], (_Vx_usr_arg_t) ResponseTime[1], (_Vx_usr_arg_t) Overruns[0],  (_Vx_usr_arg_t) Overruns[1], 0, 0
#endif

#ifdef APPLICATION_2
	#define N_TASKS 3
	#define TASK_PERIODS {10,15,20}
	#define TASK_PHASES {2,1,0}
	#define N_SEMAPHORES 2
	#define CEILINGS { TOP_PRIORITY+1, TOP_PRIORITY }
	#define APPLICATION Application2
	#define CLEAN_UP_STRING "Simulation ended. Response times: %d, %d, %d. Overruns: %d, %d, %d.\n" 
	#define CLEAN_UP_PARAMS (_Vx_usr_arg_t) ResponseTime[0], (_Vx_usr_arg_t) ResponseTime[1], (_Vx_usr_arg_t) ResponseTime[2], (_Vx_usr_arg_t) Overruns[0],  (_Vx_usr_arg_t) Overruns[1], (_Vx_usr_arg_t) Overruns[2]
#endif

#ifdef APPLICATION_3
	#define N_TASKS 3
	#define TASK_PERIODS {10,15,20}
	#define TASK_PHASES {2,1,0}
	#define N_SEMAPHORES 2
	#define CEILINGS { TOP_PRIORITY+1, TOP_PRIORITY }
	#define APPLICATION Application3
	#define CLEAN_UP_STRING "Simulation ended. Response times: %d, %d, %d. Overruns: %d, %d, %d.\n" 
	#define CLEAN_UP_PARAMS (_Vx_usr_arg_t) ResponseTime[0], (_Vx_usr_arg_t) ResponseTime[1], (_Vx_usr_arg_t) ResponseTime[2], (_Vx_usr_arg_t) Overruns[0],  (_Vx_usr_arg_t) Overruns[1], (_Vx_usr_arg_t) Overruns[2]
#endif

#ifdef APPLICATION_4
	#define N_TASKS 3
	#define TASK_PERIODS {5,10,20}
	#define TASK_PHASES {2,1,0}
	#define N_SEMAPHORES 2
	#define CEILINGS { TOP_PRIORITY, TOP_PRIORITY+1 }
	#define APPLICATION Application4
	#define CLEAN_UP_STRING "Simulation ended. Response times: %d, %d, %d. Overruns: %d, %d, %d.\n" 
	#define CLEAN_UP_PARAMS (_Vx_usr_arg_t) ResponseTime[0], (_Vx_usr_arg_t) ResponseTime[1], (_Vx_usr_arg_t) ResponseTime[2], (_Vx_usr_arg_t) Overruns[0],  (_Vx_usr_arg_t) Overruns[1], (_Vx_usr_arg_t) Overruns[2]
#endif

#ifdef APPLICATION_ASSIGNMENT
	#define N_TASKS 3
	#define TASK_PERIODS {4,8,16}
	#define TASK_PHASES {0,0,0}
	#define N_SEMAPHORES 2
	#define CEILINGS { TOP_PRIORITY, TOP_PRIORITY+1 }
	#define APPLICATION ApplicationAssignment
	#define CLEAN_UP_STRING "Simulation ended. Response times: %d, %d, %d. Overruns: %d, %d, %d.\n" 
	#define CLEAN_UP_PARAMS (_Vx_usr_arg_t) ResponseTime[0], (_Vx_usr_arg_t) ResponseTime[1], (_Vx_usr_arg_t) ResponseTime[2], (_Vx_usr_arg_t) Overruns[0], (_Vx_usr_arg_t) Overruns[1], (_Vx_usr_arg_t) Overruns[2]
#endif

/* Defined applications */
void APPLICATION(int task);


#endif /* APPLICATIONS_H_ */
