/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_PRACH_ResourceDedicatedBFR_H_
#define	_PRACH_ResourceDedicatedBFR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PRACH_ResourceDedicatedBFR_PR {
	PRACH_ResourceDedicatedBFR_PR_NOTHING,	/* No components present */
	PRACH_ResourceDedicatedBFR_PR_ssb,
	PRACH_ResourceDedicatedBFR_PR_csi_RS
} PRACH_ResourceDedicatedBFR_PR;

/* Forward declarations */
struct BFR_SSB_Resource;
struct BFR_CSIRS_Resource;

/* PRACH-ResourceDedicatedBFR */
typedef struct PRACH_ResourceDedicatedBFR {
	PRACH_ResourceDedicatedBFR_PR present;
	union PRACH_ResourceDedicatedBFR_u {
		struct BFR_SSB_Resource	*ssb;
		struct BFR_CSIRS_Resource	*csi_RS;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_ResourceDedicatedBFR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_ResourceDedicatedBFR;
extern asn_CHOICE_specifics_t asn_SPC_PRACH_ResourceDedicatedBFR_specs_1;
extern asn_TYPE_member_t asn_MBR_PRACH_ResourceDedicatedBFR_1[2];
extern asn_per_constraints_t asn_PER_type_PRACH_ResourceDedicatedBFR_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_ResourceDedicatedBFR_H_ */
#include <asn_internal.h>
