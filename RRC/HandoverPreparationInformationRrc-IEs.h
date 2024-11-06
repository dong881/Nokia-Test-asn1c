/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_HandoverPreparationInformationRrc_IEs_H_
#define	_HandoverPreparationInformationRrc_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-CapabilityRAT-ContainerListRRC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AS_Config;
struct RRM_Config;
struct AS_Context;

/* HandoverPreparationInformationRrc-IEs */
typedef struct HandoverPreparationInformationRrc_IEs {
	UE_CapabilityRAT_ContainerListRRC_t	 ue_CapabilityRAT_List;
	struct AS_Config	*sourceConfig;	/* OPTIONAL */
	struct RRM_Config	*rrm_Config;	/* OPTIONAL */
	struct AS_Context	*as_Context;	/* OPTIONAL */
	struct HandoverPreparationInformationRrc_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformationRrc_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformationRrc_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformationRrc_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverPreparationInformationRrc_IEs_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverPreparationInformationRrc_IEs_H_ */
#include <asn_internal.h>