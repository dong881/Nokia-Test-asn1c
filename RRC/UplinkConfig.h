/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_UplinkConfig_H_
#define	_UplinkConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BWP-Id.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NULL.h>
#include <constr_CHOICE.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UplinkConfig__pusch_ServingCellConfig_PR {
	UplinkConfig__pusch_ServingCellConfig_PR_NOTHING,	/* No components present */
	UplinkConfig__pusch_ServingCellConfig_PR_release,
	UplinkConfig__pusch_ServingCellConfig_PR_setup
} UplinkConfig__pusch_ServingCellConfig_PR;
typedef enum UplinkConfig__carrierSwitching_PR {
	UplinkConfig__carrierSwitching_PR_NOTHING,	/* No components present */
	UplinkConfig__carrierSwitching_PR_release,
	UplinkConfig__carrierSwitching_PR_setup
} UplinkConfig__carrierSwitching_PR;

/* Forward declarations */
struct BWP_UplinkDedicated;
struct BWP_Uplink;
struct PUSCH_ServingCellConfig;
struct SRS_CarrierSwitching;
struct SCS_SpecificCarrier;

/* UplinkConfig */
typedef struct UplinkConfig {
	struct BWP_UplinkDedicated	*initialUplinkBWP;	/* OPTIONAL */
	struct UplinkConfig__uplinkBWP_ToReleaseList {
		A_SEQUENCE_OF(BWP_Id_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uplinkBWP_ToReleaseList;
	struct UplinkConfig__uplinkBWP_ToAddModList {
		A_SEQUENCE_OF(struct BWP_Uplink) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uplinkBWP_ToAddModList;
	BWP_Id_t	*firstActiveUplinkBWP_Id;	/* OPTIONAL */
	struct UplinkConfig__pusch_ServingCellConfig {
		UplinkConfig__pusch_ServingCellConfig_PR present;
		union UplinkConfig__pusch_ServingCellConfig_u {
			NULL_t	 release;
			struct PUSCH_ServingCellConfig	*setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pusch_ServingCellConfig;
	struct UplinkConfig__carrierSwitching {
		UplinkConfig__carrierSwitching_PR present;
		union UplinkConfig__carrierSwitching_u {
			NULL_t	 release;
			struct SRS_CarrierSwitching	*setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *carrierSwitching;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct UplinkConfig__ext1 {
		BOOLEAN_t	*powerBoostPi2BPSK;	/* OPTIONAL */
		struct UplinkConfig__ext1__uplinkChannelBW_PerSCS_List {
			A_SEQUENCE_OF(struct SCS_SpecificCarrier) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *uplinkChannelBW_PerSCS_List;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkConfig_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkConfig_H_ */
#include <asn_internal.h>
