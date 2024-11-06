/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_FailureInfoRLC_Bearer_H_
#define	_FailureInfoRLC_Bearer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellGroupId.h"
#include "LogicalChannelIdentity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FailureInfoRLC_Bearer__failureType {
	FailureInfoRLC_Bearer__failureType_duplication	= 0,
	FailureInfoRLC_Bearer__failureType_spare3	= 1,
	FailureInfoRLC_Bearer__failureType_spare2	= 2,
	FailureInfoRLC_Bearer__failureType_spare1	= 3
} e_FailureInfoRLC_Bearer__failureType;

/* FailureInfoRLC-Bearer */
typedef struct FailureInfoRLC_Bearer {
	CellGroupId_t	 cellGroupId;
	LogicalChannelIdentity_t	 logicalChannelIdentity;
	long	 failureType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FailureInfoRLC_Bearer_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_failureType_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FailureInfoRLC_Bearer;
extern asn_SEQUENCE_specifics_t asn_SPC_FailureInfoRLC_Bearer_specs_1;
extern asn_TYPE_member_t asn_MBR_FailureInfoRLC_Bearer_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _FailureInfoRLC_Bearer_H_ */
#include <asn_internal.h>
