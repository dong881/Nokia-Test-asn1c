/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_TDD_UL_DL_SlotConfig_H_
#define	_TDD_UL_DL_SlotConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TDD-UL-DL-SlotIndex.h"
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TDD_UL_DL_SlotConfig__symbols_PR {
	TDD_UL_DL_SlotConfig__symbols_PR_NOTHING,	/* No components present */
	TDD_UL_DL_SlotConfig__symbols_PR_allDownlink,
	TDD_UL_DL_SlotConfig__symbols_PR_allUplink,
	TDD_UL_DL_SlotConfig__symbols_PR_explicit
} TDD_UL_DL_SlotConfig__symbols_PR;

/* TDD-UL-DL-SlotConfig */
typedef struct TDD_UL_DL_SlotConfig {
	TDD_UL_DL_SlotIndex_t	 slotIndex;
	struct TDD_UL_DL_SlotConfig__symbols {
		TDD_UL_DL_SlotConfig__symbols_PR present;
		union TDD_UL_DL_SlotConfig__symbols_u {
			NULL_t	 allDownlink;
			NULL_t	 allUplink;
			struct TDD_UL_DL_SlotConfig__symbols__explicit {
				long	*nrofDownlinkSymbols;	/* OPTIONAL */
				long	*nrofUplinkSymbols;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *Explicit;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} symbols;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDD_UL_DL_SlotConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TDD_UL_DL_SlotConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_TDD_UL_DL_SlotConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_TDD_UL_DL_SlotConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TDD_UL_DL_SlotConfig_H_ */
#include <asn_internal.h>
