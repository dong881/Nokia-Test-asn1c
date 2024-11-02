/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice`
 */

#ifndef	_MCC_H_
#define	_MCC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MCC-MNC-Digit.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MCC */
typedef struct MCC {
	A_SEQUENCE_OF(MCC_MNC_Digit_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MCC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MCC;
extern asn_SET_OF_specifics_t asn_SPC_MCC_specs_1;
extern asn_TYPE_member_t asn_MBR_MCC_1[1];
extern asn_per_constraints_t asn_PER_type_MCC_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MCC_H_ */
#include <asn_internal.h>
