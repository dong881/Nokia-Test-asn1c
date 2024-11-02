/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice`
 */

#ifndef	_SupportedBandwidth_H_
#define	_SupportedBandwidth_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportedBandwidth_PR {
	SupportedBandwidth_PR_NOTHING,	/* No components present */
	SupportedBandwidth_PR_fr1,
	SupportedBandwidth_PR_fr2
} SupportedBandwidth_PR;
typedef enum SupportedBandwidth__fr1 {
	SupportedBandwidth__fr1_mhz5	= 0,
	SupportedBandwidth__fr1_mhz10	= 1,
	SupportedBandwidth__fr1_mhz15	= 2,
	SupportedBandwidth__fr1_mhz20	= 3,
	SupportedBandwidth__fr1_mhz25	= 4,
	SupportedBandwidth__fr1_mhz30	= 5,
	SupportedBandwidth__fr1_mhz40	= 6,
	SupportedBandwidth__fr1_mhz50	= 7,
	SupportedBandwidth__fr1_mhz60	= 8,
	SupportedBandwidth__fr1_mhz80	= 9,
	SupportedBandwidth__fr1_mhz100	= 10
} e_SupportedBandwidth__fr1;
typedef enum SupportedBandwidth__fr2 {
	SupportedBandwidth__fr2_mhz50	= 0,
	SupportedBandwidth__fr2_mhz100	= 1,
	SupportedBandwidth__fr2_mhz200	= 2,
	SupportedBandwidth__fr2_mhz400	= 3
} e_SupportedBandwidth__fr2;

/* SupportedBandwidth */
typedef struct SupportedBandwidth {
	SupportedBandwidth_PR present;
	union SupportedBandwidth_u {
		long	 fr1;
		long	 fr2;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandwidth_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fr1_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_fr2_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandwidth;
extern asn_CHOICE_specifics_t asn_SPC_SupportedBandwidth_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedBandwidth_1[2];
extern asn_per_constraints_t asn_PER_type_SupportedBandwidth_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandwidth_H_ */
#include <asn_internal.h>
