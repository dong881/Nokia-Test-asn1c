/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_SRS_PeriodicityAndOffset_H_
#define	_SRS_PeriodicityAndOffset_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_PeriodicityAndOffset_PR {
	SRS_PeriodicityAndOffset_PR_NOTHING,	/* No components present */
	SRS_PeriodicityAndOffset_PR_sl1,
	SRS_PeriodicityAndOffset_PR_sl2,
	SRS_PeriodicityAndOffset_PR_sl4,
	SRS_PeriodicityAndOffset_PR_sl5,
	SRS_PeriodicityAndOffset_PR_sl8,
	SRS_PeriodicityAndOffset_PR_sl10,
	SRS_PeriodicityAndOffset_PR_sl16,
	SRS_PeriodicityAndOffset_PR_sl20,
	SRS_PeriodicityAndOffset_PR_sl32,
	SRS_PeriodicityAndOffset_PR_sl40,
	SRS_PeriodicityAndOffset_PR_sl64,
	SRS_PeriodicityAndOffset_PR_sl80,
	SRS_PeriodicityAndOffset_PR_sl160,
	SRS_PeriodicityAndOffset_PR_sl320,
	SRS_PeriodicityAndOffset_PR_sl640,
	SRS_PeriodicityAndOffset_PR_sl1280,
	SRS_PeriodicityAndOffset_PR_sl2560
} SRS_PeriodicityAndOffset_PR;

/* SRS-PeriodicityAndOffset */
typedef struct SRS_PeriodicityAndOffset {
	SRS_PeriodicityAndOffset_PR present;
	union SRS_PeriodicityAndOffset_u {
		NULL_t	 sl1;
		long	 sl2;
		long	 sl4;
		long	 sl5;
		long	 sl8;
		long	 sl10;
		long	 sl16;
		long	 sl20;
		long	 sl32;
		long	 sl40;
		long	 sl64;
		long	 sl80;
		long	 sl160;
		long	 sl320;
		long	 sl640;
		long	 sl1280;
		long	 sl2560;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_PeriodicityAndOffset_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRS_PeriodicityAndOffset;
extern asn_CHOICE_specifics_t asn_SPC_SRS_PeriodicityAndOffset_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_PeriodicityAndOffset_1[17];
extern asn_per_constraints_t asn_PER_type_SRS_PeriodicityAndOffset_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SRS_PeriodicityAndOffset_H_ */
#include <asn_internal.h>
