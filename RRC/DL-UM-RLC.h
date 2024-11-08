/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_DL_UM_RLC_H_
#define	_DL_UM_RLC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SN-FieldLengthUM.h"
#include "T-Reassembly.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-UM-RLC */
typedef struct DL_UM_RLC {
	SN_FieldLengthUM_t	*sn_FieldLength;	/* OPTIONAL */
	T_Reassembly_t	 t_Reassembly;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_UM_RLC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_UM_RLC;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_UM_RLC_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_UM_RLC_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _DL_UM_RLC_H_ */
#include <asn_internal.h>
