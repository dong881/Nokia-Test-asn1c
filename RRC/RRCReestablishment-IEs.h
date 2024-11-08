/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_RRCReestablishment_IEs_H_
#define	_RRCReestablishment_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NextHopChainingCount.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCReestablishment-IEs */
typedef struct RRCReestablishment_IEs {
	NextHopChainingCount_t	 nextHopChainingCount;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCReestablishment_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReestablishment_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReestablishment_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReestablishment_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReestablishment_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCReestablishment_IEs_H_ */
#include <asn_internal.h>
