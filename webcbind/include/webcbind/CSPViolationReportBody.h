#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CSPViolationReportBody */
DECLARE_EMLITE_TYPE(CSPViolationReportBody, ReportBody);

/** @brief Getter of the documentURL property */
jb_String CSPViolationReportBody_documentURL(const CSPViolationReportBody *self);

/** @brief Setter of the documentURL property */
void CSPViolationReportBody_set_documentURL(CSPViolationReportBody* self, jb_String * value);

/** @brief Getter of the referrer property */
jb_String CSPViolationReportBody_referrer(const CSPViolationReportBody *self);

/** @brief Setter of the referrer property */
void CSPViolationReportBody_set_referrer(CSPViolationReportBody* self, jb_String * value);

/** @brief Getter of the blockedURL property */
jb_String CSPViolationReportBody_blockedURL(const CSPViolationReportBody *self);

/** @brief Setter of the blockedURL property */
void CSPViolationReportBody_set_blockedURL(CSPViolationReportBody* self, jb_String * value);

/** @brief Getter of the effectiveDirective property */
jb_String CSPViolationReportBody_effectiveDirective(const CSPViolationReportBody *self);

/** @brief Setter of the effectiveDirective property */
void CSPViolationReportBody_set_effectiveDirective(CSPViolationReportBody* self, jb_String * value);

/** @brief Getter of the originalPolicy property */
jb_String CSPViolationReportBody_originalPolicy(const CSPViolationReportBody *self);

/** @brief Setter of the originalPolicy property */
void CSPViolationReportBody_set_originalPolicy(CSPViolationReportBody* self, jb_String * value);

/** @brief Getter of the sourceFile property */
jb_String CSPViolationReportBody_sourceFile(const CSPViolationReportBody *self);

/** @brief Setter of the sourceFile property */
void CSPViolationReportBody_set_sourceFile(CSPViolationReportBody* self, jb_String * value);

/** @brief Getter of the sample property */
jb_String CSPViolationReportBody_sample(const CSPViolationReportBody *self);

/** @brief Setter of the sample property */
void CSPViolationReportBody_set_sample(CSPViolationReportBody* self, jb_String * value);

/** @brief Getter of the disposition property */
SecurityPolicyViolationEventDisposition CSPViolationReportBody_disposition(const CSPViolationReportBody *self);

/** @brief Setter of the disposition property */
void CSPViolationReportBody_set_disposition(CSPViolationReportBody* self, SecurityPolicyViolationEventDisposition * value);

/** @brief Getter of the statusCode property */
unsigned short CSPViolationReportBody_statusCode(const CSPViolationReportBody *self);

/** @brief Setter of the statusCode property */
void CSPViolationReportBody_set_statusCode(CSPViolationReportBody* self, unsigned short value);

/** @brief Getter of the lineNumber property */
unsigned long CSPViolationReportBody_lineNumber(const CSPViolationReportBody *self);

/** @brief Setter of the lineNumber property */
void CSPViolationReportBody_set_lineNumber(CSPViolationReportBody* self, unsigned long value);

/** @brief Getter of the columnNumber property */
unsigned long CSPViolationReportBody_columnNumber(const CSPViolationReportBody *self);

/** @brief Setter of the columnNumber property */
void CSPViolationReportBody_set_columnNumber(CSPViolationReportBody* self, unsigned long value);

/** @brief Constructor of the CSPViolationReportBody dictionary type */
CSPViolationReportBody CSPViolationReportBody_new();

#ifdef __cplusplus
}
#endif
