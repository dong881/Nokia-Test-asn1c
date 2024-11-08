/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_PUCCH_format4_H_
#define	_PUCCH_format4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_format4__occ_Length {
	PUCCH_format4__occ_Length_n2	= 0,
	PUCCH_format4__occ_Length_n4	= 1
} e_PUCCH_format4__occ_Length;
typedef enum PUCCH_format4__occ_Index {
	PUCCH_format4__occ_Index_n0	= 0,
	PUCCH_format4__occ_Index_n1	= 1,
	PUCCH_format4__occ_Index_n2	= 2,
	PUCCH_format4__occ_Index_n3	= 3
} e_PUCCH_format4__occ_Index;

/* PUCCH-format4 */
typedef struct PUCCH_format4 {
	long	 nrofSymbols;
	long	 occ_Length;
	long	 occ_Index;
	long	 startingSymbolIndex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_format4_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_occ_Length_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_occ_Index_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_format4;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_format4_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_format4_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_format4_H_ */
#include <asn_internal.h>
