/* ********************************************************************** */
/* @file      Dcm.c                                         			  */
/* @Date	  May 9, 2021                                                 */                    */
/* @Project   Dcm_Implementation                                          */
/* @brief                                                                 */
/* @author    AI.Maarouf   	                                              */
/* ********************************************************************** */

/*================== [includes] =============================================*/
#include "Dcm.h"

/*================== [defines] ==============================================*/

/*================== [type definitions] =====================================*/

/*================== [local data] ===========================================*/
/* ************************************* 8  BIT **************************** */

/* ************************************* 16  BIT *************************** */

/* ************************************* 32 BIT **************************** */

/*================== [prototype of local functions] =========================*/

/*================== [definition of local functions] ========================*/
/******************************************************************/
/*!
 * \fn   
 * \brief
 * \param
 */
/******************************************************************/

/*================== [external function definitions] ========================*/
/**
  * @brief  				Service for basic initialization of DCM module.
  * @Service ID[hex]		0x01.
  * @Sync/Async				Synchronous.
  * @Reentrancy				Non Reentrant.
  * @Parameters (in)  		ConfigPtr : Pointer to configuration set in Variant Post-Build.
  * @Parameters (out)		None.
  * @Parameters (inout)		None.
  * @retval 				None.
  */
void Dcm_Init(Dcm_ConfigType ConfigPtr)
{
	Dcm_Dsl_Init();
	//Dcm_Dsd_Init();
	Dcm_Dsp_Init();
}
/*==================[end of file]============================================*/



