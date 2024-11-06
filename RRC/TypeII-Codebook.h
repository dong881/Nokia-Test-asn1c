/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_TypeII_Codebook_H_
#define	_TypeII_Codebook_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TypeII_Codebook__maxNumberTxPortsPerResource {
	TypeII_Codebook__maxNumberTxPortsPerResource_p4	= 0,
	TypeII_Codebook__maxNumberTxPortsPerResource_p8	= 1,
	TypeII_Codebook__maxNumberTxPortsPerResource_p12	= 2,
	TypeII_Codebook__maxNumberTxPortsPerResource_p16	= 3,
	TypeII_Codebook__maxNumberTxPortsPerResource_p24	= 4,
	TypeII_Codebook__maxNumberTxPortsPerResource_p32	= 5
} e_TypeII_Codebook__maxNumberTxPortsPerResource;
typedef enum TypeII_Codebook__amplitudeScalingType {
	TypeII_Codebook__amplitudeScalingType_wideband	= 0,
	TypeII_Codebook__amplitudeScalingType_widebandAndSubband	= 1
} e_TypeII_Codebook__amplitudeScalingType;
typedef enum TypeII_Codebook__amplitudeSubsetRestriction {
	TypeII_Codebook__amplitudeSubsetRestriction_supported	= 0
} e_TypeII_Codebook__amplitudeSubsetRestriction;

/* TypeII-Codebook */
typedef struct TypeII_Codebook {
	long	 maxNumberTxPortsPerResource;
	long	 maxNumberResources;
	long	 totalNumberTxPorts;
	long	 parameterLx;
	long	 amplitudeScalingType;
	long	*amplitudeSubsetRestriction;	/* OPTIONAL */
	long	 maxNumberCSI_RS_PerResourceSet;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TypeII_Codebook_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberTxPortsPerResource_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_amplitudeScalingType_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_amplitudeSubsetRestriction_15;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TypeII_Codebook;
extern asn_SEQUENCE_specifics_t asn_SPC_TypeII_Codebook_specs_1;
extern asn_TYPE_member_t asn_MBR_TypeII_Codebook_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _TypeII_Codebook_H_ */
#include <asn_internal.h>
