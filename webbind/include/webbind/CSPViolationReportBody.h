#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSPViolationReportBody, ReportBody);

jb_String CSPViolationReportBody_documentURL(const CSPViolationReportBody *self);

void CSPViolationReportBody_set_documentURL(CSPViolationReportBody* self, jb_String * value);

jb_String CSPViolationReportBody_referrer(const CSPViolationReportBody *self);

void CSPViolationReportBody_set_referrer(CSPViolationReportBody* self, jb_String * value);

jb_String CSPViolationReportBody_blockedURL(const CSPViolationReportBody *self);

void CSPViolationReportBody_set_blockedURL(CSPViolationReportBody* self, jb_String * value);

jb_String CSPViolationReportBody_effectiveDirective(const CSPViolationReportBody *self);

void CSPViolationReportBody_set_effectiveDirective(CSPViolationReportBody* self, jb_String * value);

jb_String CSPViolationReportBody_originalPolicy(const CSPViolationReportBody *self);

void CSPViolationReportBody_set_originalPolicy(CSPViolationReportBody* self, jb_String * value);

jb_String CSPViolationReportBody_sourceFile(const CSPViolationReportBody *self);

void CSPViolationReportBody_set_sourceFile(CSPViolationReportBody* self, jb_String * value);

jb_String CSPViolationReportBody_sample(const CSPViolationReportBody *self);

void CSPViolationReportBody_set_sample(CSPViolationReportBody* self, jb_String * value);

SecurityPolicyViolationEventDisposition CSPViolationReportBody_disposition(const CSPViolationReportBody *self);

void CSPViolationReportBody_set_disposition(CSPViolationReportBody* self, SecurityPolicyViolationEventDisposition * value);

unsigned short CSPViolationReportBody_statusCode(const CSPViolationReportBody *self);

void CSPViolationReportBody_set_statusCode(CSPViolationReportBody* self, unsigned short value);

unsigned long CSPViolationReportBody_lineNumber(const CSPViolationReportBody *self);

void CSPViolationReportBody_set_lineNumber(CSPViolationReportBody* self, unsigned long value);

unsigned long CSPViolationReportBody_columnNumber(const CSPViolationReportBody *self);

void CSPViolationReportBody_set_columnNumber(CSPViolationReportBody* self, unsigned long value);

CSPViolationReportBody CSPViolationReportBody_new();

#ifdef __cplusplus
}
#endif
