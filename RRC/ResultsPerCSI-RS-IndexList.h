/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice`
 */

#ifndef	_ResultsPerCSI_RS_IndexList_H_
#define	_ResultsPerCSI_RS_IndexList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ResultsPerCSI_RS_Index;

/* ResultsPerCSI-RS-IndexList */
typedef struct ResultsPerCSI_RS_IndexList {
	A_SEQUENCE_OF(struct ResultsPerCSI_RS_Index) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResultsPerCSI_RS_IndexList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResultsPerCSI_RS_IndexList;
extern asn_SET_OF_specifics_t asn_SPC_ResultsPerCSI_RS_IndexList_specs_1;
extern asn_TYPE_member_t asn_MBR_ResultsPerCSI_RS_IndexList_1[1];
extern asn_per_constraints_t asn_PER_type_ResultsPerCSI_RS_IndexList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ResultsPerCSI-RS-Index.h"

#endif	/* _ResultsPerCSI_RS_IndexList_H_ */
#include <asn_internal.h>
