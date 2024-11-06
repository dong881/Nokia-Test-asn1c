/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_CSI_ReportFramework_H_
#define	_CSI_ReportFramework_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CSI-ReportFramework */
typedef struct CSI_ReportFramework {
	long	 maxNumberPeriodicCSI_ReportPerBWP;
	long	 maxNumberAperiodicCSI_ReportPerBWP;
	long	 maxNumberSemiPersistentCSI_ReportPerBWP;
	long	 simultaneousCSI_ReportsAllCC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_ReportFramework_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_ReportFramework;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_ReportFramework_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_ReportFramework_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_ReportFramework_H_ */
#include <asn_internal.h>
