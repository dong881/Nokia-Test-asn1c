/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_CSI_AperiodicTriggerState_H_
#define	_CSI_AperiodicTriggerState_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSI_AssociatedReportConfigInfo;

/* CSI-AperiodicTriggerState */
typedef struct CSI_AperiodicTriggerState {
	struct CSI_AperiodicTriggerState__associatedReportConfigInfoList {
		A_SEQUENCE_OF(struct CSI_AssociatedReportConfigInfo) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} associatedReportConfigInfoList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_AperiodicTriggerState_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_AperiodicTriggerState;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_AperiodicTriggerState_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_AperiodicTriggerState_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_AperiodicTriggerState_H_ */
#include <asn_internal.h>
