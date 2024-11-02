/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice`
 */

#ifndef	_RF_Parameters_H_
#define	_RF_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandCombinationList;
struct FreqBandList;
struct BandNR;

/* RF-Parameters */
typedef struct RF_Parameters {
	struct RF_Parameters__supportedBandListNR {
		A_SEQUENCE_OF(struct BandNR) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} supportedBandListNR;
	struct BandCombinationList	*supportedBandCombinationList;	/* OPTIONAL */
	struct FreqBandList	*appliedFreqBandListFilter;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandCombinationList.h"
#include "FreqBandList.h"
#include "BandNR.h"

#endif	/* _RF_Parameters_H_ */
#include <asn_internal.h>
