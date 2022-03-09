

/*
 * Filename: tsk_cyclic.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "tsk_cyclic.h"



/* USER CODE START TSK_CYCLIC_INCLUDE */

/* USER CODE END TSK_CYCLIC_INCLUDE */

#include "swc_clock.h"



/* USER CODE START TSK_CYCLIC_USERDEFINITIONS */

/* USER CODE END TSK_CYCLIC_USERDEFINITIONS */

/*******************************************************************************
 * Runnable Tables from Activation Engine
 *******************************************************************************/

/* Cyclic Table */

const RTE_cyclicTable_t RTE_cyclicActivationTable_tsk_cyclic[] = {
	{ CLOCK_input_run, 50 },	//Runnable to process incoming events
	{ CLOCK_display_run, 250 },	//Runnable for display driver
};
const uint16_t RTE_cyclicActivation_tsk_cyclic_size = sizeof (RTE_cyclicActivationTable_tsk_cyclic) / sizeof(RTE_cyclicTable_t); 


/*******************************************************************************
 * Task Body
 *******************************************************************************/


/*
* description: Cyclic task for cyclic runnables
* events: 
* mode: Cyclic
* name: tsk_cyclic
* shortname: cyclic
* signalpoolsRO: sp_common
* signalpoolsRW: sp_common
* tickEvent: 0
* timertickperiod: 10
*/
TASK(tsk_cyclic)
{
	/* ticktime of the task */
	static uint32_t ticktime = 0;

	/* USER CODE START TSK_CYCLIC_TASKBOBY_PRE */

	/* USER CODE END TSK_CYCLIC_TASKBODY_PRE */
    
    //Process all cyclic runnables which are due
    RTE_ProcessCyclicTable(RTE_cyclicActivationTable_tsk_cyclic, RTE_cyclicActivation_tsk_cyclic_size, ticktime);
	
	/* USER CODE START TSK_CYCLIC_TASKBODY_POST */

	/* USER CODE END TSK_CYCLIC_TASKBODY_POST */

	ticktime += 10;
	if (ticktime > 0xFFFFFF00) ticktime = 0;
    
}


/*******************************************************************************
 * Interrupt Service Routines
 *******************************************************************************/

/* USER CODE START TSK_CYCLIC_ISR */

/* USER CODE END TSK_CYCLIC_ISR */
