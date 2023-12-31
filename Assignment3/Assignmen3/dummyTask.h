/*
 * dummyTask.h
 *
 *  Created on: April 15, 2018
 *  Last modified on: May 21, 2018
 *      Author: Paolo Torroni. All rights reserved.
 */

#ifndef DUMMYTASK_H_
#define DUMMYTASK_H_

/* --> set this to LAB2 if in Lab2 <-- */
#define LAB2

/* dummy task parameters, do not change them */
#define LOWER_LIMIT 1000
#define UPPER_LIMIT 2000
#define UP 1
#define DOWN 0

/* approximately OPSMSEC cycles correspond to 1 msec computation on target architecture*/
#ifdef MACBOOK
#define OPSMSEC 446000
#else
#ifdef IMAC
#define OPSMSEC 730000
#else
#ifdef LAB2
#define OPSMSEC 275000
#endif
#endif
#endif

/* only for event tracing purposes */
void all_done(void);

/* to simulate actual computation: keeps CPU busy for n cycles */
void get_busy(int n);

#endif /* DUMMYTASK_H_ */
