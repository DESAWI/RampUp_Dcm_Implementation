/* ********************************************************************** */
/* @file      Dcm_Dsl.c                                         	      */
/* @Date	  May 9, 2021                                                 */                    */
/* @Project   DCM_Implementation                                          */
/* @brief                                                                 */
/* @author    AI.Maarouf   	                                              */
/* ********************************************************************** */

/*================== [includes] =============================================*/
#include "Dcm_Dsl.h"
/*================== [defines] ==============================================*/

/*================== [type definitions] =====================================*/
#define DCM_NUMBER_OF_CONFIGURED_BUFFERS					(100U)
/*================== [local data] ===========================================*/
/* ************************************* 8  BIT **************************** */

/* ************************************* 16  BIT *************************** */

/* ************************************* 32 BIT **************************** */

/*================== [prototype of local functions] =========================*/

/*================== [local function definitions] ========================*/
/**
 * \fn   			Dcm_Dsl_Init().
 * \brief			Initialize diagnostic session layer.
 * \param			None.
 * \Return			None.
 */
void Dcm_Dsl_Init(void)
{
	Dcm_Dsl_BufferInit();
}

static Dcm_Dsl_BufferInit(void)
{
	uint32_t BufferIndex;
	for(BufferIndex = 0; BufferIndex < DCM_NUMBER_OF_CONFIGURED_BUFFERS; BufferIndex++)
	{
		
	}
}
/*================== [external function definitions] ========================*/
/**
  * @brief 						This function is called at the start of receiving an N-SDU. The N-SDU
  *								might be fragmented into multiple N-PDUs (FF with one or more following
  *								CFs) or might consist of a single N-PDU (SF). The service shall provide
  *								the currently available maximum buffer size when invoked with TpSdu-
  *								Length equal to 0. 		
  * @Service ID[hex]	        0x46
  * @Sync/Async			        Synchronous		
  * @Reentrancy			        Reentrant		
  * @Parameters (in)	        id 				  : Identification of the I-PDU.
  * @Parameters (in)	        info        	  : Pointer to a PduInfoType structure containing the
  *						        		    	    payload data (without protocol information) and payload
  *						        		  		    length of the first frame or single frame of a
  *						        		  		    transport protocol I-PDU reception, and the Meta-
  *						        		  		    Data related to this PDU. If neither first/single frame
  *						        		  		    data nor MetaData are available, this parameter is
  *						        		  		    set to NULL_PTR.
  * @Parameters (in)            TpSduLength       : Total length of the N-SDU to be received.   
  * @Parameters (out)	        None.
  * @Parameters (inout)         bufferSizePtr.
  * @retval						BufReq_ReturnType : BUFREQ_OK: Connection has been accepted.
  *													bufferSizePtr indicates the available receive buffer;
  *													reception is continued. If no buffer of the requested
  *													size is available, a receive buffer size of 0 shall be
  * 													indicated by bufferSizePtr.
  *													BUFREQ_E_NOT_OK: Connection has been rejected;
  *													reception is aborted. bufferSizePtr remains
  *													unchanged.
  *													BUFREQ_E_OVFL: No buffer of the required length
  *													can be provided; reception is aborted. bufferSizePtr
  *													remains unchanged. 		
  */
BufReq_ReturnType Dcm_StartOfReception(PduIdType id,
									   const PduInfoType* info,
									   PduLengthType TpSduLength,
									   PduLengthType* bufferSizePtr)
{
	BufReq_ReturnType RetVal = BUFREQ_E_NOT_OK; 
	Dcm_BufferType Dcm_Rx_Buffer;
	if((0 != TpSduLength) && (TpSduLength < BufferSize))
	{
		
	}
	else
	{
		
	}
	return retval;
}
/*==================[end of file]============================================*/
