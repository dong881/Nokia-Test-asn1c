/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_TDD_UL_DL_ConfigCommon_H_
#define	_TDD_UL_DL_ConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SubcarrierSpacing.h"
#include "TDD-UL-DL-Pattern.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TDD_UL_DL_Pattern;

/* TDD-UL-DL-ConfigCommon */
typedef struct TDD_UL_DL_ConfigCommon {
	SubcarrierSpacing_t	 referenceSubcarrierSpacing;
	TDD_UL_DL_Pattern_t	 pattern1;
	struct TDD_UL_DL_Pattern	*pattern2;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDD_UL_DL_ConfigCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TDD_UL_DL_ConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_TDD_UL_DL_ConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_TDD_UL_DL_ConfigCommon_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TDD_UL_DL_ConfigCommon_H_ */
#include <asn_internal.h>
