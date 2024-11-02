/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice`
 */

#ifndef	_CrossCarrierSchedulingConfig_H_
#define	_CrossCarrierSchedulingConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include "ServCellIndexRrc.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CrossCarrierSchedulingConfig__schedulingCellInfo_PR {
	CrossCarrierSchedulingConfig__schedulingCellInfo_PR_NOTHING,	/* No components present */
	CrossCarrierSchedulingConfig__schedulingCellInfo_PR_own,
	CrossCarrierSchedulingConfig__schedulingCellInfo_PR_other
} CrossCarrierSchedulingConfig__schedulingCellInfo_PR;

/* CrossCarrierSchedulingConfig */
typedef struct CrossCarrierSchedulingConfig {
	struct CrossCarrierSchedulingConfig__schedulingCellInfo {
		CrossCarrierSchedulingConfig__schedulingCellInfo_PR present;
		union CrossCarrierSchedulingConfig__schedulingCellInfo_u {
			struct CrossCarrierSchedulingConfig__schedulingCellInfo__own {
				BOOLEAN_t	 cif_Presence;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *own;
			struct CrossCarrierSchedulingConfig__schedulingCellInfo__other {
				ServCellIndexRrc_t	 schedulingCellId;
				long	 cif_InSchedulingCell;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *other;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} schedulingCellInfo;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CrossCarrierSchedulingConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CrossCarrierSchedulingConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_CrossCarrierSchedulingConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_CrossCarrierSchedulingConfig_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CrossCarrierSchedulingConfig_H_ */
#include <asn_internal.h>
