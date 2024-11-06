/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_SIB4_H_
#define	_SIB4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCarrierFreqList.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SIB4 */
typedef struct SIB4 {
	InterFreqCarrierFreqList_t	 interFreqCarrierFreqList;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB4;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB4_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB4_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SIB4_H_ */
#include <asn_internal.h>