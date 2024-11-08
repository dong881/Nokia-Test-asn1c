/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_Phy_Parameters_H_
#define	_Phy_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Phy_ParametersCommon;
struct Phy_ParametersXDD_Diff;
struct Phy_ParametersFRX_Diff;
struct Phy_ParametersFR1;
struct Phy_ParametersFR2;

/* Phy-Parameters */
typedef struct Phy_Parameters {
	struct Phy_ParametersCommon	*phy_ParametersCommon;	/* OPTIONAL */
	struct Phy_ParametersXDD_Diff	*phy_ParametersXDD_Diff;	/* OPTIONAL */
	struct Phy_ParametersFRX_Diff	*phy_ParametersFRX_Diff;	/* OPTIONAL */
	struct Phy_ParametersFR1	*phy_ParametersFR1;	/* OPTIONAL */
	struct Phy_ParametersFR2	*phy_ParametersFR2;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Phy_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Phy_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_Phy_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_Phy_Parameters_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _Phy_Parameters_H_ */
#include <asn_internal.h>
