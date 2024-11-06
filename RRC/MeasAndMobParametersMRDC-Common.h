/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_MeasAndMobParametersMRDC_Common_H_
#define	_MeasAndMobParametersMRDC_Common_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasAndMobParametersMRDC_Common__independentGapConfig {
	MeasAndMobParametersMRDC_Common__independentGapConfig_supported	= 0
} e_MeasAndMobParametersMRDC_Common__independentGapConfig;

/* MeasAndMobParametersMRDC-Common */
typedef struct MeasAndMobParametersMRDC_Common {
	long	*independentGapConfig;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasAndMobParametersMRDC_Common_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_independentGapConfig_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasAndMobParametersMRDC_Common;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasAndMobParametersMRDC_Common_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasAndMobParametersMRDC_Common_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasAndMobParametersMRDC_Common_H_ */
#include <asn_internal.h>
