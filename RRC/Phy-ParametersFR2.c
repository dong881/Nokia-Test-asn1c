/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "Phy-ParametersFR2.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_calibrationGapPA_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_pdsch_RE_MappingFR2_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_calibrationGapPA_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_calibrationGapPA_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_calibrationGapPA_specs_2 = {
	asn_MAP_calibrationGapPA_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_calibrationGapPA_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_calibrationGapPA_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_calibrationGapPA_2 = {
	"calibrationGapPA",
	"calibrationGapPA",
	&asn_OP_NativeEnumerated,
	asn_DEF_calibrationGapPA_tags_2,
	sizeof(asn_DEF_calibrationGapPA_tags_2)
		/sizeof(asn_DEF_calibrationGapPA_tags_2[0]) - 1, /* 1 */
	asn_DEF_calibrationGapPA_tags_2,	/* Same as above */
	sizeof(asn_DEF_calibrationGapPA_tags_2)
		/sizeof(asn_DEF_calibrationGapPA_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_calibrationGapPA_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_calibrationGapPA_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdsch_RE_MappingFR2_value2enum_4[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n20" }
};
static const unsigned int asn_MAP_pdsch_RE_MappingFR2_enum2value_4[] = {
	1,	/* n20(1) */
	0	/* n6(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdsch_RE_MappingFR2_specs_4 = {
	asn_MAP_pdsch_RE_MappingFR2_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_pdsch_RE_MappingFR2_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdsch_RE_MappingFR2_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_RE_MappingFR2_4 = {
	"pdsch-RE-MappingFR2",
	"pdsch-RE-MappingFR2",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdsch_RE_MappingFR2_tags_4,
	sizeof(asn_DEF_pdsch_RE_MappingFR2_tags_4)
		/sizeof(asn_DEF_pdsch_RE_MappingFR2_tags_4[0]) - 1, /* 1 */
	asn_DEF_pdsch_RE_MappingFR2_tags_4,	/* Same as above */
	sizeof(asn_DEF_pdsch_RE_MappingFR2_tags_4)
		/sizeof(asn_DEF_pdsch_RE_MappingFR2_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_pdsch_RE_MappingFR2_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdsch_RE_MappingFR2_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Phy_ParametersFR2_1[] = {
	{ ATF_POINTER, 2, offsetof(struct Phy_ParametersFR2, calibrationGapPA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_calibrationGapPA_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"calibrationGapPA"
		},
	{ ATF_POINTER, 1, offsetof(struct Phy_ParametersFR2, pdsch_RE_MappingFR2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdsch_RE_MappingFR2_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-RE-MappingFR2"
		},
};
static const int asn_MAP_Phy_ParametersFR2_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_Phy_ParametersFR2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Phy_ParametersFR2_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* calibrationGapPA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pdsch-RE-MappingFR2 */
};
asn_SEQUENCE_specifics_t asn_SPC_Phy_ParametersFR2_specs_1 = {
	sizeof(struct Phy_ParametersFR2),
	offsetof(struct Phy_ParametersFR2, _asn_ctx),
	asn_MAP_Phy_ParametersFR2_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_Phy_ParametersFR2_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Phy_ParametersFR2 = {
	"Phy-ParametersFR2",
	"Phy-ParametersFR2",
	&asn_OP_SEQUENCE,
	asn_DEF_Phy_ParametersFR2_tags_1,
	sizeof(asn_DEF_Phy_ParametersFR2_tags_1)
		/sizeof(asn_DEF_Phy_ParametersFR2_tags_1[0]), /* 1 */
	asn_DEF_Phy_ParametersFR2_tags_1,	/* Same as above */
	sizeof(asn_DEF_Phy_ParametersFR2_tags_1)
		/sizeof(asn_DEF_Phy_ParametersFR2_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Phy_ParametersFR2_1,
	2,	/* Elements count */
	&asn_SPC_Phy_ParametersFR2_specs_1	/* Additional specs */
};

