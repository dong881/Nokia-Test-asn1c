/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "rrc_15_3.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_PeriodicalReportConfig_H_
#define	_PeriodicalReportConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR-RS-Type.h"
#include "ReportInterval.h"
#include <NativeEnumerated.h>
#include "MeasReportQuantity.h"
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PeriodicalReportConfig__reportAmount {
	PeriodicalReportConfig__reportAmount_r1	= 0,
	PeriodicalReportConfig__reportAmount_r2	= 1,
	PeriodicalReportConfig__reportAmount_r4	= 2,
	PeriodicalReportConfig__reportAmount_r8	= 3,
	PeriodicalReportConfig__reportAmount_r16	= 4,
	PeriodicalReportConfig__reportAmount_r32	= 5,
	PeriodicalReportConfig__reportAmount_r64	= 6,
	PeriodicalReportConfig__reportAmount_infinity	= 7
} e_PeriodicalReportConfig__reportAmount;

/* Forward declarations */
struct MeasReportQuantity;

/* PeriodicalReportConfig */
typedef struct PeriodicalReportConfig {
	NR_RS_Type_t	 rsType;
	ReportInterval_t	 reportInterval;
	long	 reportAmount;
	MeasReportQuantity_t	 reportQuantityCell;
	long	 maxReportCells;
	struct MeasReportQuantity	*reportQuantityRS_Indexes;	/* OPTIONAL */
	long	*maxNrofRS_IndexesToReport;	/* OPTIONAL */
	BOOLEAN_t	 includeBeamMeasurements;
	BOOLEAN_t	 useWhiteCellList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PeriodicalReportConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportAmount_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PeriodicalReportConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_PeriodicalReportConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_PeriodicalReportConfig_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _PeriodicalReportConfig_H_ */
#include <asn_internal.h>
