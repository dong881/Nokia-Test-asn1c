/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "SlotFormatCombinationId.h"

int
SlotFormatCombinationId_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
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
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_SlotFormatCombinationId_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_SlotFormatCombinationId_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SlotFormatCombinationId = {
	"SlotFormatCombinationId",
	"SlotFormatCombinationId",
	&asn_OP_NativeInteger,
	asn_DEF_SlotFormatCombinationId_tags_1,
	sizeof(asn_DEF_SlotFormatCombinationId_tags_1)
		/sizeof(asn_DEF_SlotFormatCombinationId_tags_1[0]), /* 1 */
	asn_DEF_SlotFormatCombinationId_tags_1,	/* Same as above */
	sizeof(asn_DEF_SlotFormatCombinationId_tags_1)
		/sizeof(asn_DEF_SlotFormatCombinationId_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_SlotFormatCombinationId_constr_1, SlotFormatCombinationId_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};
