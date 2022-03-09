

/*
 * Filename: sc_display_type.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "sc_display_type.h"



/* USER CODE START SC_DISPLAY_INCLUDE */
#include "tft.h"
/* USER CODE END SC_DISPLAY_INCLUDE */


/*
* description: Display respresentation datatype
* name: sc_display
* shortname: display
*/

/* USER CODE START SC_DISPLAY_USERDEFINITIONS */

/* USER CODE END SC_DISPLAY_USERDEFINITIONS */


/*****************************************************************************************
 *************** Port Wrapper Implementation for SC_DISPLAY signal  ****************
 *****************************************************************************************/
 
 
/**
 * Default OUT driver API
 */
inline RC_t SC_DISPLAY_driverOut(const SC_DISPLAY_data_t  *const data)
{
	/* USER CODE START driverOutSC_DISPLAY */
    
    /* Set the hour and minute values for the clock */
    TFT_setCursor(25, 75);
    TFT_printf("%d", data->hours.tensValue);
    
    TFT_setCursor(41, 75);
    TFT_printf("%d", data->hours.unitValue);
    
    TFT_setCursor(70, 75);
    TFT_printf("%d", data->minutes.tensValue);
    
    TFT_setCursor(86, 75);
    TFT_printf("%d", data->minutes.unitValue);
	//Scale application data to drive format

	//Write scaled data to driver

	return RC_SUCCESS;
	/* USER CODE END driverOutSC_DISPLAY */
}


