/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "CSI-FrequencyOccupation.h"

static int
memb_startingRB_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 274)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_nrofRBs_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 24 && value <= 276)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_startingRB_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  274 }	/* (0..274) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nrofRBs_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  24,  276 }	/* (24..276) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CSI_FrequencyOccupation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_FrequencyOccupation, startingRB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_startingRB_constr_2,  memb_startingRB_constraint_1 },
		0, 0, /* No default value */
		"startingRB"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_FrequencyOccupation, nrofRBs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_nrofRBs_constr_3,  memb_nrofRBs_constraint_1 },
		0, 0, /* No default value */
		"nrofRBs"
		},
};
static const ber_tlv_tag_t asn_DEF_CSI_FrequencyOccupation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_FrequencyOccupation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startingRB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nrofRBs */
};
asn_SEQUENCE_specifics_t asn_SPC_CSI_FrequencyOccupation_specs_1 = {
	sizeof(struct CSI_FrequencyOccupation),
	offsetof(struct CSI_FrequencyOccupation, _asn_ctx),
	asn_MAP_CSI_FrequencyOccupation_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSI_FrequencyOccupation = {
	"CSI-FrequencyOccupation",
	"CSI-FrequencyOccupation",
	&asn_OP_SEQUENCE,
	asn_DEF_CSI_FrequencyOccupation_tags_1,
	sizeof(asn_DEF_CSI_FrequencyOccupation_tags_1)
		/sizeof(asn_DEF_CSI_FrequencyOccupation_tags_1[0]), /* 1 */
	asn_DEF_CSI_FrequencyOccupation_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_FrequencyOccupation_tags_1)
		/sizeof(asn_DEF_CSI_FrequencyOccupation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSI_FrequencyOccupation_1,
	2,	/* Elements count */
	&asn_SPC_CSI_FrequencyOccupation_specs_1	/* Additional specs */
};

