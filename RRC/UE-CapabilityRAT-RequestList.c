/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "UE-CapabilityRAT-RequestList.h"

#include "UE-CapabilityRAT-Request.h"
asn_per_constraints_t asn_PER_type_UE_CapabilityRAT_RequestList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UE_CapabilityRAT_RequestList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_UE_CapabilityRAT_Request,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_UE_CapabilityRAT_RequestList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_UE_CapabilityRAT_RequestList_specs_1 = {
	sizeof(struct UE_CapabilityRAT_RequestList),
	offsetof(struct UE_CapabilityRAT_RequestList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_UE_CapabilityRAT_RequestList = {
	"UE-CapabilityRAT-RequestList",
	"UE-CapabilityRAT-RequestList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_UE_CapabilityRAT_RequestList_tags_1,
	sizeof(asn_DEF_UE_CapabilityRAT_RequestList_tags_1)
		/sizeof(asn_DEF_UE_CapabilityRAT_RequestList_tags_1[0]), /* 1 */
	asn_DEF_UE_CapabilityRAT_RequestList_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_CapabilityRAT_RequestList_tags_1)
		/sizeof(asn_DEF_UE_CapabilityRAT_RequestList_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_UE_CapabilityRAT_RequestList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_UE_CapabilityRAT_RequestList_1,
	1,	/* Single element */
	&asn_SPC_UE_CapabilityRAT_RequestList_specs_1	/* Additional specs */
};

