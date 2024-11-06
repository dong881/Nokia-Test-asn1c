/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_PUCCH_Config_H_
#define	_PUCCH_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "PUCCH-ResourceSetId.h"
#include "PUCCH-ResourceId.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include "SchedulingRequestResourceId.h"
#include <NativeInteger.h>
#include "PUCCH-SpatialRelationInfoId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_Config__format1_PR {
	PUCCH_Config__format1_PR_NOTHING,	/* No components present */
	PUCCH_Config__format1_PR_release,
	PUCCH_Config__format1_PR_setup
} PUCCH_Config__format1_PR;
typedef enum PUCCH_Config__format2_PR {
	PUCCH_Config__format2_PR_NOTHING,	/* No components present */
	PUCCH_Config__format2_PR_release,
	PUCCH_Config__format2_PR_setup
} PUCCH_Config__format2_PR;
typedef enum PUCCH_Config__format3_PR {
	PUCCH_Config__format3_PR_NOTHING,	/* No components present */
	PUCCH_Config__format3_PR_release,
	PUCCH_Config__format3_PR_setup
} PUCCH_Config__format3_PR;
typedef enum PUCCH_Config__format4_PR {
	PUCCH_Config__format4_PR_NOTHING,	/* No components present */
	PUCCH_Config__format4_PR_release,
	PUCCH_Config__format4_PR_setup
} PUCCH_Config__format4_PR;

/* Forward declarations */
struct PUCCH_PowerControl;
struct PUCCH_ResourceSet;
struct PUCCH_Resource;
struct PUCCH_FormatConfig;
struct SchedulingRequestResourceConfig;
struct PUCCH_SpatialRelationInfo;

/* PUCCH-Config */
typedef struct PUCCH_Config {
	struct PUCCH_Config__resourceSetToAddModList {
		A_SEQUENCE_OF(struct PUCCH_ResourceSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *resourceSetToAddModList;
	struct PUCCH_Config__resourceSetToReleaseList {
		A_SEQUENCE_OF(PUCCH_ResourceSetId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *resourceSetToReleaseList;
	struct PUCCH_Config__resourceToAddModList {
		A_SEQUENCE_OF(struct PUCCH_Resource) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *resourceToAddModList;
	struct PUCCH_Config__resourceToReleaseList {
		A_SEQUENCE_OF(PUCCH_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *resourceToReleaseList;
	struct PUCCH_Config__format1 {
		PUCCH_Config__format1_PR present;
		union PUCCH_Config__format1_u {
			NULL_t	 release;
			struct PUCCH_FormatConfig	*setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *format1;
	struct PUCCH_Config__format2 {
		PUCCH_Config__format2_PR present;
		union PUCCH_Config__format2_u {
			NULL_t	 release;
			struct PUCCH_FormatConfig	*setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *format2;
	struct PUCCH_Config__format3 {
		PUCCH_Config__format3_PR present;
		union PUCCH_Config__format3_u {
			NULL_t	 release;
			struct PUCCH_FormatConfig	*setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *format3;
	struct PUCCH_Config__format4 {
		PUCCH_Config__format4_PR present;
		union PUCCH_Config__format4_u {
			NULL_t	 release;
			struct PUCCH_FormatConfig	*setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *format4;
	struct PUCCH_Config__schedulingRequestResourceToAddModList {
		A_SEQUENCE_OF(struct SchedulingRequestResourceConfig) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *schedulingRequestResourceToAddModList;
	struct PUCCH_Config__schedulingRequestResourceToReleaseList {
		A_SEQUENCE_OF(SchedulingRequestResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *schedulingRequestResourceToReleaseList;
	struct PUCCH_Config__multi_CSI_PUCCH_ResourceList {
		A_SEQUENCE_OF(PUCCH_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *multi_CSI_PUCCH_ResourceList;
	struct PUCCH_Config__dl_DataToUL_ACK {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dl_DataToUL_ACK;
	struct PUCCH_Config__spatialRelationInfoToAddModList {
		A_SEQUENCE_OF(struct PUCCH_SpatialRelationInfo) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *spatialRelationInfoToAddModList;
	struct PUCCH_Config__spatialRelationInfoToReleaseList {
		A_SEQUENCE_OF(PUCCH_SpatialRelationInfoId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *spatialRelationInfoToReleaseList;
	struct PUCCH_PowerControl	*pucch_PowerControl;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_Config_1[15];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_Config_H_ */
#include <asn_internal.h>