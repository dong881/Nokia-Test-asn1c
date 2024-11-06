/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_VarResumeMAC_Input_H_
#define	_VarResumeMAC_Input_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include "CellIdentity.h"
#include "RNTI-Value.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VarResumeMAC-Input */
typedef struct VarResumeMAC_Input {
	PhysCellId_t	 sourcePhysCellId;
	CellIdentity_t	 targetCellIdentity;
	RNTI_Value_t	 source_c_RNTI;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarResumeMAC_Input_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarResumeMAC_Input;

#ifdef __cplusplus
}
#endif

#endif	/* _VarResumeMAC_Input_H_ */
#include <asn_internal.h>
