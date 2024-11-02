/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice`
 */

#ifndef	_SRB_Identity_H_
#define	_SRB_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SRB-Identity */
typedef long	 SRB_Identity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SRB_Identity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SRB_Identity;
asn_struct_free_f SRB_Identity_free;
asn_struct_print_f SRB_Identity_print;
asn_constr_check_f SRB_Identity_constraint;
xer_type_decoder_f SRB_Identity_decode_xer;
xer_type_encoder_f SRB_Identity_encode_xer;
per_type_decoder_f SRB_Identity_decode_uper;
per_type_encoder_f SRB_Identity_encode_uper;
per_type_decoder_f SRB_Identity_decode_aper;
per_type_encoder_f SRB_Identity_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SRB_Identity_H_ */
#include <asn_internal.h>
