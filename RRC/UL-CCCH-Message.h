/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_UL_CCCH_Message_H_
#define	_UL_CCCH_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-CCCH-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UL-CCCH-Message */
typedef struct UL_CCCH_Message {
	UL_CCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_CCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_CCCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_CCCH_Message_H_ */
#include <asn_internal.h>
