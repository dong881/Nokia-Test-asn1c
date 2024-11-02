/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice`
 */

#ifndef	_EUTRA_MBSFN_SubframeConfigList_H_
#define	_EUTRA_MBSFN_SubframeConfigList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRA_MBSFN_SubframeConfig;

/* EUTRA-MBSFN-SubframeConfigList */
typedef struct EUTRA_MBSFN_SubframeConfigList {
	A_SEQUENCE_OF(struct EUTRA_MBSFN_SubframeConfig) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_MBSFN_SubframeConfigList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_MBSFN_SubframeConfigList;
extern asn_SET_OF_specifics_t asn_SPC_EUTRA_MBSFN_SubframeConfigList_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_MBSFN_SubframeConfigList_1[1];
extern asn_per_constraints_t asn_PER_type_EUTRA_MBSFN_SubframeConfigList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EUTRA-MBSFN-SubframeConfig.h"

#endif	/* _EUTRA_MBSFN_SubframeConfigList_H_ */
#include <asn_internal.h>
