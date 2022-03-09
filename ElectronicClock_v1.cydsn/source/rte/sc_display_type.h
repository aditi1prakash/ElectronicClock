
/*
 * Filename: sc_display_type.h
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 */

#ifndef _H_DEFINE_SC_DISPLAY_TYPE
#define _H_DEFINE_SC_DISPLAY_TYPE

#include "project.h"
#include "global.h"
#include "rte_types.h"

/* USER CODE START SC_DISPLAY_INCLUDES */

/* USER CODE END SC_DISPLAY_INCLUDES */



/**********************************************************************
 *       Type Definition for SC_DISPLAY signal    
 **********************************************************************/

/* USER CODE START SC_DISPLAY_USERDEFINITIONS */
typedef struct{
    uint8_t unitValue;
    uint8_t tensValue;
}DISPLAY_digit_t;
/* USER CODE END SC_DISPLAY_USERDEFINITIONS */

typedef 
/* USER CODE START SC_DISPLAY_SIGNALDATADEFINITION */
struct
{
    DISPLAY_digit_t hours;
    DISPLAY_digit_t minutes;
} 
/* USER CODE END SC_DISPLAY_SIGNALDATADEFINITION */
SC_DISPLAY_data_t;

/* USER CODE START InitSC_DISPLAY */
//#error "Provide a sensible init value"
#define SC_DISPLAY_INIT_DATA ((SC_DISPLAY_data_t){{0,0}, {0,0}})
/* USER CODE END InitSC_DISPLAY */




/**
 * Default OUT driver API
 * \param const SC_DISPLAY_data_t  *const data : [IN] signal data for the driver, will be scaled in this function
 * \return RC_SUCCESS is all was ok, error code otherwise
 */
RC_t SC_DISPLAY_driverOut(const SC_DISPLAY_data_t  *const data);


/* USER CODE START SC_DISPLAY_USERFUNCTIONS */

/* USER CODE END SC_DISPLAY_USERFUNCTIONS */


#endif