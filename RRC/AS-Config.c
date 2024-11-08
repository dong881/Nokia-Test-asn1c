/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "AS-Config.h"

static int
memb_rrcReconfiguration_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_rrcReconfiguration_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_AS_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, rrcReconfiguration),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_rrcReconfiguration_constr_2,  memb_rrcReconfiguration_constraint_1 },
		0, 0, /* No default value */
		"rrcReconfiguration"
		},
};
static const ber_tlv_tag_t asn_DEF_AS_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AS_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rrcReconfiguration */
};
asn_SEQUENCE_specifics_t asn_SPC_AS_Config_specs_1 = {
	sizeof(struct AS_Config),
	offsetof(struct AS_Config, _asn_ctx),
	asn_MAP_AS_Config_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AS_Config = {
	"AS-Config",
	"AS-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_AS_Config_tags_1,
	sizeof(asn_DEF_AS_Config_tags_1)
		/sizeof(asn_DEF_AS_Config_tags_1[0]), /* 1 */
	asn_DEF_AS_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_AS_Config_tags_1)
		/sizeof(asn_DEF_AS_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AS_Config_1,
	1,	/* Elements count */
	&asn_SPC_AS_Config_specs_1	/* Additional specs */
};

