/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_RRCReestablishmentRequest_IEs_H_
#define	_RRCReestablishmentRequest_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReestabUE-Identity.h"
#include "ReestablishmentCause.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCReestablishmentRequest-IEs */
typedef struct RRCReestablishmentRequest_IEs {
	ReestabUE_Identity_t	 ue_Identity;
	ReestablishmentCause_t	 reestablishmentCause;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReestablishmentRequest_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReestablishmentRequest_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReestablishmentRequest_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReestablishmentRequest_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCReestablishmentRequest_IEs_H_ */
#include <asn_internal.h>