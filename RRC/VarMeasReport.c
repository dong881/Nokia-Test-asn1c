/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "VarMeasReport.h"

#include "CellsTriggeredList.h"
asn_TYPE_member_t asn_MBR_VarMeasReport_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VarMeasReport, measId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measId"
		},
	{ ATF_POINTER, 1, offsetof(struct VarMeasReport, cellsTriggeredList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsTriggeredList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellsTriggeredList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarMeasReport, numberOfReportsSent),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfReportsSent"
		},
};
static const int asn_MAP_VarMeasReport_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_VarMeasReport_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VarMeasReport_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellsTriggeredList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* numberOfReportsSent */
};
asn_SEQUENCE_specifics_t asn_SPC_VarMeasReport_specs_1 = {
	sizeof(struct VarMeasReport),
	offsetof(struct VarMeasReport, _asn_ctx),
	asn_MAP_VarMeasReport_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_VarMeasReport_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VarMeasReport = {
	"VarMeasReport",
	"VarMeasReport",
	&asn_OP_SEQUENCE,
	asn_DEF_VarMeasReport_tags_1,
	sizeof(asn_DEF_VarMeasReport_tags_1)
		/sizeof(asn_DEF_VarMeasReport_tags_1[0]), /* 1 */
	asn_DEF_VarMeasReport_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarMeasReport_tags_1)
		/sizeof(asn_DEF_VarMeasReport_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VarMeasReport_1,
	3,	/* Elements count */
	&asn_SPC_VarMeasReport_specs_1	/* Additional specs */
};

