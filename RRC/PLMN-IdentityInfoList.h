/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_PLMN_IdentityInfoList_H_
#define	_PLMN_IdentityInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_IdentityInfo;

/* PLMN-IdentityInfoList */
typedef struct PLMN_IdentityInfoList {
	A_SEQUENCE_OF(struct PLMN_IdentityInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityInfoList;
extern asn_SET_OF_specifics_t asn_SPC_PLMN_IdentityInfoList_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_IdentityInfoList_1[1];
extern asn_per_constraints_t asn_PER_type_PLMN_IdentityInfoList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_IdentityInfoList_H_ */
#include <asn_internal.h>
