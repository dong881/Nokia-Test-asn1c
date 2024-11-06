/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_MAC_ParametersXDD_Diff_H_
#define	_MAC_ParametersXDD_Diff_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAC_ParametersXDD_Diff__skipUplinkTxDynamic {
	MAC_ParametersXDD_Diff__skipUplinkTxDynamic_supported	= 0
} e_MAC_ParametersXDD_Diff__skipUplinkTxDynamic;
typedef enum MAC_ParametersXDD_Diff__logicalChannelSR_DelayTimer {
	MAC_ParametersXDD_Diff__logicalChannelSR_DelayTimer_supported	= 0
} e_MAC_ParametersXDD_Diff__logicalChannelSR_DelayTimer;
typedef enum MAC_ParametersXDD_Diff__longDRX_Cycle {
	MAC_ParametersXDD_Diff__longDRX_Cycle_supported	= 0
} e_MAC_ParametersXDD_Diff__longDRX_Cycle;
typedef enum MAC_ParametersXDD_Diff__shortDRX_Cycle {
	MAC_ParametersXDD_Diff__shortDRX_Cycle_supported	= 0
} e_MAC_ParametersXDD_Diff__shortDRX_Cycle;
typedef enum MAC_ParametersXDD_Diff__multipleSR_Configurations {
	MAC_ParametersXDD_Diff__multipleSR_Configurations_supported	= 0
} e_MAC_ParametersXDD_Diff__multipleSR_Configurations;
typedef enum MAC_ParametersXDD_Diff__multipleConfiguredGrants {
	MAC_ParametersXDD_Diff__multipleConfiguredGrants_supported	= 0
} e_MAC_ParametersXDD_Diff__multipleConfiguredGrants;

/* MAC-ParametersXDD-Diff */
typedef struct MAC_ParametersXDD_Diff {
	long	*skipUplinkTxDynamic;	/* OPTIONAL */
	long	*logicalChannelSR_DelayTimer;	/* OPTIONAL */
	long	*longDRX_Cycle;	/* OPTIONAL */
	long	*shortDRX_Cycle;	/* OPTIONAL */
	long	*multipleSR_Configurations;	/* OPTIONAL */
	long	*multipleConfiguredGrants;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_ParametersXDD_Diff_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_skipUplinkTxDynamic_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_logicalChannelSR_DelayTimer_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_longDRX_Cycle_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_shortDRX_Cycle_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_multipleSR_Configurations_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_multipleConfiguredGrants_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MAC_ParametersXDD_Diff;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_ParametersXDD_Diff_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_ParametersXDD_Diff_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_ParametersXDD_Diff_H_ */
#include <asn_internal.h>
