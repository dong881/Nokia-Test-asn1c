/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice`
 */

#ifndef	_CellReselectionPriority_H_
#define	_CellReselectionPriority_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellReselectionPriority */
typedef long	 CellReselectionPriority_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CellReselectionPriority_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionPriority;
asn_struct_free_f CellReselectionPriority_free;
asn_struct_print_f CellReselectionPriority_print;
asn_constr_check_f CellReselectionPriority_constraint;
xer_type_decoder_f CellReselectionPriority_decode_xer;
xer_type_encoder_f CellReselectionPriority_encode_xer;
per_type_decoder_f CellReselectionPriority_decode_uper;
per_type_encoder_f CellReselectionPriority_encode_uper;
per_type_decoder_f CellReselectionPriority_decode_aper;
per_type_encoder_f CellReselectionPriority_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CellReselectionPriority_H_ */
#include <asn_internal.h>
