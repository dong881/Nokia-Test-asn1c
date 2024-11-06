/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "SSB-MTC.h"

static int
memb_sf5_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4)) {
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
memb_sf10_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
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
memb_sf20_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 19)) {
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
memb_sf40_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 39)) {
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
memb_sf80_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 79)) {
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
memb_sf160_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 159)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_memb_sf5_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf10_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf20_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  19 }	/* (0..19) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf40_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf80_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  79 }	/* (0..79) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf160_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  159 }	/* (0..159) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_periodicityAndOffset_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_duration_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_periodicityAndOffset_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_MTC__periodicityAndOffset, choice.sf5),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf5_constr_3,  memb_sf5_constraint_2 },
		0, 0, /* No default value */
		"sf5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_MTC__periodicityAndOffset, choice.sf10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf10_constr_4,  memb_sf10_constraint_2 },
		0, 0, /* No default value */
		"sf10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_MTC__periodicityAndOffset, choice.sf20),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf20_constr_5,  memb_sf20_constraint_2 },
		0, 0, /* No default value */
		"sf20"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_MTC__periodicityAndOffset, choice.sf40),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf40_constr_6,  memb_sf40_constraint_2 },
		0, 0, /* No default value */
		"sf40"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_MTC__periodicityAndOffset, choice.sf80),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf80_constr_7,  memb_sf80_constraint_2 },
		0, 0, /* No default value */
		"sf80"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_MTC__periodicityAndOffset, choice.sf160),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf160_constr_8,  memb_sf160_constraint_2 },
		0, 0, /* No default value */
		"sf160"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_periodicityAndOffset_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sf5 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sf10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sf20 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sf40 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sf80 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* sf160 */
};
static asn_CHOICE_specifics_t asn_SPC_periodicityAndOffset_specs_2 = {
	sizeof(struct SSB_MTC__periodicityAndOffset),
	offsetof(struct SSB_MTC__periodicityAndOffset, _asn_ctx),
	offsetof(struct SSB_MTC__periodicityAndOffset, present),
	sizeof(((struct SSB_MTC__periodicityAndOffset *)0)->present),
	asn_MAP_periodicityAndOffset_tag2el_2,
	6,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodicityAndOffset_2 = {
	"periodicityAndOffset",
	"periodicityAndOffset",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_periodicityAndOffset_constr_2, CHOICE_constraint },
	asn_MBR_periodicityAndOffset_2,
	6,	/* Elements count */
	&asn_SPC_periodicityAndOffset_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_duration_value2enum_9[] = {
	{ 0,	3,	"sf1" },
	{ 1,	3,	"sf2" },
	{ 2,	3,	"sf3" },
	{ 3,	3,	"sf4" },
	{ 4,	3,	"sf5" }
};
static const unsigned int asn_MAP_duration_enum2value_9[] = {
	0,	/* sf1(0) */
	1,	/* sf2(1) */
	2,	/* sf3(2) */
	3,	/* sf4(3) */
	4	/* sf5(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_duration_specs_9 = {
	asn_MAP_duration_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_duration_enum2value_9,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_duration_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_duration_9 = {
	"duration",
	"duration",
	&asn_OP_NativeEnumerated,
	asn_DEF_duration_tags_9,
	sizeof(asn_DEF_duration_tags_9)
		/sizeof(asn_DEF_duration_tags_9[0]) - 1, /* 1 */
	asn_DEF_duration_tags_9,	/* Same as above */
	sizeof(asn_DEF_duration_tags_9)
		/sizeof(asn_DEF_duration_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_duration_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_duration_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SSB_MTC_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_MTC, periodicityAndOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_periodicityAndOffset_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicityAndOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_MTC, duration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_duration_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"duration"
		},
};
static const ber_tlv_tag_t asn_DEF_SSB_MTC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SSB_MTC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodicityAndOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* duration */
};
asn_SEQUENCE_specifics_t asn_SPC_SSB_MTC_specs_1 = {
	sizeof(struct SSB_MTC),
	offsetof(struct SSB_MTC, _asn_ctx),
	asn_MAP_SSB_MTC_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SSB_MTC = {
	"SSB-MTC",
	"SSB-MTC",
	&asn_OP_SEQUENCE,
	asn_DEF_SSB_MTC_tags_1,
	sizeof(asn_DEF_SSB_MTC_tags_1)
		/sizeof(asn_DEF_SSB_MTC_tags_1[0]), /* 1 */
	asn_DEF_SSB_MTC_tags_1,	/* Same as above */
	sizeof(asn_DEF_SSB_MTC_tags_1)
		/sizeof(asn_DEF_SSB_MTC_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SSB_MTC_1,
	2,	/* Elements count */
	&asn_SPC_SSB_MTC_specs_1	/* Additional specs */
};

