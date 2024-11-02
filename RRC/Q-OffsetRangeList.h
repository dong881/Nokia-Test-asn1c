/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice`
 */

#ifndef	_Q_OffsetRangeList_H_
#define	_Q_OffsetRangeList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Q-OffsetRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Q-OffsetRangeList */
typedef struct Q_OffsetRangeList {
	Q_OffsetRange_t	*rsrpOffsetSSB;	/* DEFAULT 15 */
	Q_OffsetRange_t	*rsrqOffsetSSB;	/* DEFAULT 15 */
	Q_OffsetRange_t	*sinrOffsetSSB;	/* DEFAULT 15 */
	Q_OffsetRange_t	*rsrpOffsetCSI_RS;	/* DEFAULT 15 */
	Q_OffsetRange_t	*rsrqOffsetCSI_RS;	/* DEFAULT 15 */
	Q_OffsetRange_t	*sinrOffsetCSI_RS;	/* DEFAULT 15 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Q_OffsetRangeList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Q_OffsetRangeList;
extern asn_SEQUENCE_specifics_t asn_SPC_Q_OffsetRangeList_specs_1;
extern asn_TYPE_member_t asn_MBR_Q_OffsetRangeList_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _Q_OffsetRangeList_H_ */
#include <asn_internal.h>
