/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "RRCResumeComplete-IEs.h"

#include "UplinkTxDirectCurrentList.h"
static int
memb_selectedPLMN_Identity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 12)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_selectedPLMN_Identity_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (1..12) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_6 = {
	sizeof(struct RRCResumeComplete_IEs__nonCriticalExtension),
	offsetof(struct RRCResumeComplete_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_6 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_6,
	sizeof(asn_DEF_nonCriticalExtension_tags_6)
		/sizeof(asn_DEF_nonCriticalExtension_tags_6[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_6,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_6)
		/sizeof(asn_DEF_nonCriticalExtension_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCResumeComplete_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RRCResumeComplete_IEs, dedicatedNAS_Message),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedNAS_Message,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dedicatedNAS-Message"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCResumeComplete_IEs, selectedPLMN_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_selectedPLMN_Identity_constr_3,  memb_selectedPLMN_Identity_constraint_1 },
		0, 0, /* No default value */
		"selectedPLMN-Identity"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCResumeComplete_IEs, uplinkTxDirectCurrentList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkTxDirectCurrentList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkTxDirectCurrentList"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCResumeComplete_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCResumeComplete_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCResumeComplete_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RRCResumeComplete_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCResumeComplete_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dedicatedNAS-Message */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* selectedPLMN-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uplinkTxDirectCurrentList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCResumeComplete_IEs_specs_1 = {
	sizeof(struct RRCResumeComplete_IEs),
	offsetof(struct RRCResumeComplete_IEs, _asn_ctx),
	asn_MAP_RRCResumeComplete_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RRCResumeComplete_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCResumeComplete_IEs = {
	"RRCResumeComplete-IEs",
	"RRCResumeComplete-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCResumeComplete_IEs_tags_1,
	sizeof(asn_DEF_RRCResumeComplete_IEs_tags_1)
		/sizeof(asn_DEF_RRCResumeComplete_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCResumeComplete_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCResumeComplete_IEs_tags_1)
		/sizeof(asn_DEF_RRCResumeComplete_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCResumeComplete_IEs_1,
	5,	/* Elements count */
	&asn_SPC_RRCResumeComplete_IEs_specs_1	/* Additional specs */
};

