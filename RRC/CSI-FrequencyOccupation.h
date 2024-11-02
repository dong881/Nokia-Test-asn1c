/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice`
 */

#ifndef	_CSI_FrequencyOccupation_H_
#define	_CSI_FrequencyOccupation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CSI-FrequencyOccupation */
typedef struct CSI_FrequencyOccupation {
	long	 startingRB;
	long	 nrofRBs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_FrequencyOccupation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_FrequencyOccupation;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_FrequencyOccupation_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_FrequencyOccupation_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_FrequencyOccupation_H_ */
#include <asn_internal.h>
