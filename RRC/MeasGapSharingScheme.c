/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice`
 */

#include "MeasGapSharingScheme.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_MeasGapSharingScheme_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_MeasGapSharingScheme_value2enum_1[] = {
	{ 0,	8,	"scheme00" },
	{ 1,	8,	"scheme01" },
	{ 2,	8,	"scheme10" },
	{ 3,	8,	"scheme11" }
};
static const unsigned int asn_MAP_MeasGapSharingScheme_enum2value_1[] = {
	0,	/* scheme00(0) */
	1,	/* scheme01(1) */
	2,	/* scheme10(2) */
	3	/* scheme11(3) */
};
const asn_INTEGER_specifics_t asn_SPC_MeasGapSharingScheme_specs_1 = {
	asn_MAP_MeasGapSharingScheme_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_MeasGapSharingScheme_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_MeasGapSharingScheme_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_MeasGapSharingScheme = {
	"MeasGapSharingScheme",
	"MeasGapSharingScheme",
	&asn_OP_NativeEnumerated,
	asn_DEF_MeasGapSharingScheme_tags_1,
	sizeof(asn_DEF_MeasGapSharingScheme_tags_1)
		/sizeof(asn_DEF_MeasGapSharingScheme_tags_1[0]), /* 1 */
	asn_DEF_MeasGapSharingScheme_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasGapSharingScheme_tags_1)
		/sizeof(asn_DEF_MeasGapSharingScheme_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_MeasGapSharingScheme_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_MeasGapSharingScheme_specs_1	/* Additional specs */
};

