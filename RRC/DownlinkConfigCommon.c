/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice`
 */

#include "DownlinkConfigCommon.h"

asn_TYPE_member_t asn_MBR_DownlinkConfigCommon_1[] = {
	{ ATF_POINTER, 2, offsetof(struct DownlinkConfigCommon, frequencyInfoDL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfoDL,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"frequencyInfoDL"
		},
	{ ATF_POINTER, 1, offsetof(struct DownlinkConfigCommon, initialDownlinkBWP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BWP_DownlinkCommon,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"initialDownlinkBWP"
		},
};
static const int asn_MAP_DownlinkConfigCommon_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_DownlinkConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DownlinkConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frequencyInfoDL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* initialDownlinkBWP */
};
asn_SEQUENCE_specifics_t asn_SPC_DownlinkConfigCommon_specs_1 = {
	sizeof(struct DownlinkConfigCommon),
	offsetof(struct DownlinkConfigCommon, _asn_ctx),
	asn_MAP_DownlinkConfigCommon_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_DownlinkConfigCommon_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DownlinkConfigCommon = {
	"DownlinkConfigCommon",
	"DownlinkConfigCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_DownlinkConfigCommon_tags_1,
	sizeof(asn_DEF_DownlinkConfigCommon_tags_1)
		/sizeof(asn_DEF_DownlinkConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_DownlinkConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_DownlinkConfigCommon_tags_1)
		/sizeof(asn_DEF_DownlinkConfigCommon_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_DownlinkConfigCommon_1,
	2,	/* Elements count */
	&asn_SPC_DownlinkConfigCommon_specs_1	/* Additional specs */
};

