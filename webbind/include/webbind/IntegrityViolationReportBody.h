#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IntegrityViolationReportBody, ReportBody);

jb_String IntegrityViolationReportBody_documentURL(const IntegrityViolationReportBody *self);

void IntegrityViolationReportBody_set_documentURL(IntegrityViolationReportBody* self, jb_String * value);

jb_String IntegrityViolationReportBody_blockedURL(const IntegrityViolationReportBody *self);

void IntegrityViolationReportBody_set_blockedURL(IntegrityViolationReportBody* self, jb_String * value);

jb_String IntegrityViolationReportBody_destination(const IntegrityViolationReportBody *self);

void IntegrityViolationReportBody_set_destination(IntegrityViolationReportBody* self, jb_String * value);

bool IntegrityViolationReportBody_reportOnly(const IntegrityViolationReportBody *self);

void IntegrityViolationReportBody_set_reportOnly(IntegrityViolationReportBody* self, bool value);

IntegrityViolationReportBody IntegrityViolationReportBody_new();

#ifdef __cplusplus
}
#endif
