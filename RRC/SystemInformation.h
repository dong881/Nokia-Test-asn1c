/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_SystemInformation_H_
#define	_SystemInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformation__criticalExtensions_PR {
	SystemInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	SystemInformation__criticalExtensions_PR_systemInformation_r15,
	SystemInformation__criticalExtensions_PR_criticalExtensionsFuture
} SystemInformation__criticalExtensions_PR;

/* Forward declarations */
struct SystemInformation_IEs;

/* SystemInformation */
typedef struct SystemInformation {
	struct SystemInformation__criticalExtensions {
		SystemInformation__criticalExtensions_PR present;
		union SystemInformation__criticalExtensions_u {
			struct SystemInformation_IEs	*systemInformation_r15;
			struct SystemInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformation_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformation_H_ */
#include <asn_internal.h>
