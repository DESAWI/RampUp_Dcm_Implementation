/* ********************************************************************** */
/* @file      Dcm_Dsl.h                                         		  */
/* @Date	  May 9, 2021                                                 */                    */
/* @Project   DCM_Implementation                                          */
/* @brief                                                                 */
/* @author    AI.Maarouf   	                                              */
/* ********************************************************************** */

#ifndef DCM_DSL_H
#define DCM_DSL_H

/*================== [includes] =============================================*/

/*================== [macros] ===============================================*/

/*================== [type definitions] =====================================*/
typedef uint32_t Dcm_BufferSizeType;
typedef uint8_t  Dcm_BufferIdType;
typedef struct{
	/** \brief Size of this buffer*/
	Dcm_BufferSizeType Size;
	/** \brief The amount of valid data currently stored in this buffer*/
	Dcm_BufferSizeType FilledLength;
	/** \brief id of the buffer*/
	Dcm_BufferIdType BufferId;
}Dcm_BufferType;
typedef enum{
   /** \brief Buffer request accomplished successful */
   BUFREQ_OK,
   /** \brief Buffer request not successful, buffer cannot be accessed. */
   BUFREQ_E_NOT_OK,
   /** \brief Temporarily no buffer available. */
   BUFREQ_E_BUSY,
   /** \brief Buffer of required length can not be provided */
   BUFREQ_E_OVFL   
}BufReq_ReturnType;

/*================== [declaration of public data] ===========================*/

/*================== [declaration of global functions] ======================*/
extern void Dcm_Dsl_Init(void);
extern BufReq_ReturnType Dcm_StartOfReception(PduIdType id,
									          const PduInfoType* info,
									          PduLengthType TpSduLength,
									          PduLengthType* bufferSizePtr);
/*==================[end of file]============================================*/
