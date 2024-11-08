/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_UEAssistanceInformationRrc_H_
#define	_UEAssistanceInformationRrc_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEAssistanceInformationRrc__criticalExtensions_PR {
	UEAssistanceInformationRrc__criticalExtensions_PR_NOTHING,	/* No components present */
	UEAssistanceInformationRrc__criticalExtensions_PR_ueAssistanceInformation,
	UEAssistanceInformationRrc__criticalExtensions_PR_criticalExtensionsFuture
} UEAssistanceInformationRrc__criticalExtensions_PR;

/* Forward declarations */
struct UEAssistanceInformation_IEs;

/* UEAssistanceInformationRrc */
typedef struct UEAssistanceInformationRrc {
	struct UEAssistanceInformationRrc__criticalExtensions {
		UEAssistanceInformationRrc__criticalExtensions_PR present;
		union UEAssistanceInformationRrc__criticalExtensions_u {
			struct UEAssistanceInformation_IEs	*ueAssistanceInformation;
			struct UEAssistanceInformationRrc__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAssistanceInformationRrc_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformationRrc;
extern asn_SEQUENCE_specifics_t asn_SPC_UEAssistanceInformationRrc_specs_1;
extern asn_TYPE_member_t asn_MBR_UEAssistanceInformationRrc_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UEAssistanceInformationRrc_H_ */
#include <asn_internal.h>
