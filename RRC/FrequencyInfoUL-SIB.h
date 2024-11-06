/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_FrequencyInfoUL_SIB_H_
#define	_FrequencyInfoUL_SIB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueNR.h"
#include "P-Max.h"
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FrequencyInfoUL_SIB__frequencyShift7p5khz {
	FrequencyInfoUL_SIB__frequencyShift7p5khz_true	= 0
} e_FrequencyInfoUL_SIB__frequencyShift7p5khz;

/* Forward declarations */
struct MultiFrequencyBandListNR_SIB;
struct SCS_SpecificCarrier;

/* FrequencyInfoUL-SIB */
typedef struct FrequencyInfoUL_SIB {
	struct MultiFrequencyBandListNR_SIB	*frequencyBandList;	/* OPTIONAL */
	ARFCN_ValueNR_t	*absoluteFrequencyPointA;	/* OPTIONAL */
	struct FrequencyInfoUL_SIB__scs_SpecificCarrierList {
		A_SEQUENCE_OF(struct SCS_SpecificCarrier) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} scs_SpecificCarrierList;
	P_Max_t	*p_Max;	/* OPTIONAL */
	long	*frequencyShift7p5khz;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FrequencyInfoUL_SIB_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_frequencyShift7p5khz_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FrequencyInfoUL_SIB;
extern asn_SEQUENCE_specifics_t asn_SPC_FrequencyInfoUL_SIB_specs_1;
extern asn_TYPE_member_t asn_MBR_FrequencyInfoUL_SIB_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _FrequencyInfoUL_SIB_H_ */
#include <asn_internal.h>