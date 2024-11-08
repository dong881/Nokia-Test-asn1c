/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "MeasResult2NR.h"

#include "MeasResultNR.h"
#include "MeasResultListNR.h"
asn_TYPE_member_t asn_MBR_MeasResult2NR_1[] = {
	{ ATF_POINTER, 4, offsetof(struct MeasResult2NR, ssbFrequency),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssbFrequency"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasResult2NR, refFreqCSI_RS),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refFreqCSI-RS"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResult2NR, measResultServingCell),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultServingCell"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResult2NR, measResultNeighCellListNR),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultNeighCellListNR"
		},
};
static const int asn_MAP_MeasResult2NR_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_MeasResult2NR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResult2NR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssbFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* refFreqCSI-RS */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultServingCell */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* measResultNeighCellListNR */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResult2NR_specs_1 = {
	sizeof(struct MeasResult2NR),
	offsetof(struct MeasResult2NR, _asn_ctx),
	asn_MAP_MeasResult2NR_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MeasResult2NR_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResult2NR = {
	"MeasResult2NR",
	"MeasResult2NR",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResult2NR_tags_1,
	sizeof(asn_DEF_MeasResult2NR_tags_1)
		/sizeof(asn_DEF_MeasResult2NR_tags_1[0]), /* 1 */
	asn_DEF_MeasResult2NR_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResult2NR_tags_1)
		/sizeof(asn_DEF_MeasResult2NR_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResult2NR_1,
	4,	/* Elements count */
	&asn_SPC_MeasResult2NR_specs_1	/* Additional specs */
};

