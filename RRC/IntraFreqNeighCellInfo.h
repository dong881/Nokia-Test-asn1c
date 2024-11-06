/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_IntraFreqNeighCellInfo_H_
#define	_IntraFreqNeighCellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include "Q-OffsetRange.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IntraFreqNeighCellInfo */
typedef struct IntraFreqNeighCellInfo {
	PhysCellId_t	 physCellId;
	Q_OffsetRange_t	 q_OffsetCell;
	long	*q_RxLevMinOffsetCell;	/* OPTIONAL */
	long	*q_RxLevMinOffsetCellSUL;	/* OPTIONAL */
	long	*q_QualMinOffsetCell;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqNeighCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqNeighCellInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraFreqNeighCellInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqNeighCellInfo_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqNeighCellInfo_H_ */
#include <asn_internal.h>
