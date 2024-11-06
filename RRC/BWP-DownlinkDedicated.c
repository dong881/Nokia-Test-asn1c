/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "BWP-DownlinkDedicated.h"

#include "PDCCH-Config.h"
#include "PDSCH-Config.h"
#include "SPS-Config.h"
#include "RadioLinkMonitoringConfig.h"
static asn_per_constraints_t asn_PER_type_pdcch_Config_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_pdsch_Config_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sps_Config_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_radioLinkMonitoringConfig_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_pdcch_Config_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BWP_DownlinkDedicated__pdcch_Config, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct BWP_DownlinkDedicated__pdcch_Config, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCCH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_pdcch_Config_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_pdcch_Config_specs_2 = {
	sizeof(struct BWP_DownlinkDedicated__pdcch_Config),
	offsetof(struct BWP_DownlinkDedicated__pdcch_Config, _asn_ctx),
	offsetof(struct BWP_DownlinkDedicated__pdcch_Config, present),
	sizeof(((struct BWP_DownlinkDedicated__pdcch_Config *)0)->present),
	asn_MAP_pdcch_Config_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdcch_Config_2 = {
	"pdcch-Config",
	"pdcch-Config",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_pdcch_Config_constr_2, CHOICE_constraint },
	asn_MBR_pdcch_Config_2,
	2,	/* Elements count */
	&asn_SPC_pdcch_Config_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pdsch_Config_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BWP_DownlinkDedicated__pdsch_Config, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct BWP_DownlinkDedicated__pdsch_Config, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_pdsch_Config_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_pdsch_Config_specs_5 = {
	sizeof(struct BWP_DownlinkDedicated__pdsch_Config),
	offsetof(struct BWP_DownlinkDedicated__pdsch_Config, _asn_ctx),
	offsetof(struct BWP_DownlinkDedicated__pdsch_Config, present),
	sizeof(((struct BWP_DownlinkDedicated__pdsch_Config *)0)->present),
	asn_MAP_pdsch_Config_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_Config_5 = {
	"pdsch-Config",
	"pdsch-Config",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_pdsch_Config_constr_5, CHOICE_constraint },
	asn_MBR_pdsch_Config_5,
	2,	/* Elements count */
	&asn_SPC_pdsch_Config_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sps_Config_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BWP_DownlinkDedicated__sps_Config, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct BWP_DownlinkDedicated__sps_Config, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPS_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_sps_Config_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_sps_Config_specs_8 = {
	sizeof(struct BWP_DownlinkDedicated__sps_Config),
	offsetof(struct BWP_DownlinkDedicated__sps_Config, _asn_ctx),
	offsetof(struct BWP_DownlinkDedicated__sps_Config, present),
	sizeof(((struct BWP_DownlinkDedicated__sps_Config *)0)->present),
	asn_MAP_sps_Config_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sps_Config_8 = {
	"sps-Config",
	"sps-Config",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_sps_Config_constr_8, CHOICE_constraint },
	asn_MBR_sps_Config_8,
	2,	/* Elements count */
	&asn_SPC_sps_Config_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_radioLinkMonitoringConfig_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BWP_DownlinkDedicated__radioLinkMonitoringConfig, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct BWP_DownlinkDedicated__radioLinkMonitoringConfig, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioLinkMonitoringConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_radioLinkMonitoringConfig_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_radioLinkMonitoringConfig_specs_11 = {
	sizeof(struct BWP_DownlinkDedicated__radioLinkMonitoringConfig),
	offsetof(struct BWP_DownlinkDedicated__radioLinkMonitoringConfig, _asn_ctx),
	offsetof(struct BWP_DownlinkDedicated__radioLinkMonitoringConfig, present),
	sizeof(((struct BWP_DownlinkDedicated__radioLinkMonitoringConfig *)0)->present),
	asn_MAP_radioLinkMonitoringConfig_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_radioLinkMonitoringConfig_11 = {
	"radioLinkMonitoringConfig",
	"radioLinkMonitoringConfig",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_radioLinkMonitoringConfig_constr_11, CHOICE_constraint },
	asn_MBR_radioLinkMonitoringConfig_11,
	2,	/* Elements count */
	&asn_SPC_radioLinkMonitoringConfig_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BWP_DownlinkDedicated_1[] = {
	{ ATF_POINTER, 4, offsetof(struct BWP_DownlinkDedicated, pdcch_Config),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_pdcch_Config_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-Config"
		},
	{ ATF_POINTER, 3, offsetof(struct BWP_DownlinkDedicated, pdsch_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_pdsch_Config_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-Config"
		},
	{ ATF_POINTER, 2, offsetof(struct BWP_DownlinkDedicated, sps_Config),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_sps_Config_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-Config"
		},
	{ ATF_POINTER, 1, offsetof(struct BWP_DownlinkDedicated, radioLinkMonitoringConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_radioLinkMonitoringConfig_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioLinkMonitoringConfig"
		},
};
static const int asn_MAP_BWP_DownlinkDedicated_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_BWP_DownlinkDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BWP_DownlinkDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcch-Config */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdsch-Config */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sps-Config */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* radioLinkMonitoringConfig */
};
asn_SEQUENCE_specifics_t asn_SPC_BWP_DownlinkDedicated_specs_1 = {
	sizeof(struct BWP_DownlinkDedicated),
	offsetof(struct BWP_DownlinkDedicated, _asn_ctx),
	asn_MAP_BWP_DownlinkDedicated_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_BWP_DownlinkDedicated_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BWP_DownlinkDedicated = {
	"BWP-DownlinkDedicated",
	"BWP-DownlinkDedicated",
	&asn_OP_SEQUENCE,
	asn_DEF_BWP_DownlinkDedicated_tags_1,
	sizeof(asn_DEF_BWP_DownlinkDedicated_tags_1)
		/sizeof(asn_DEF_BWP_DownlinkDedicated_tags_1[0]), /* 1 */
	asn_DEF_BWP_DownlinkDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_BWP_DownlinkDedicated_tags_1)
		/sizeof(asn_DEF_BWP_DownlinkDedicated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BWP_DownlinkDedicated_1,
	4,	/* Elements count */
	&asn_SPC_BWP_DownlinkDedicated_specs_1	/* Additional specs */
};

