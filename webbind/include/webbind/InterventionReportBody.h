#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(InterventionReportBody, ReportBody);

jb_String InterventionReportBody_id(const InterventionReportBody *self);

void InterventionReportBody_set_id(InterventionReportBody* self, jb_String * value);

jb_String InterventionReportBody_message(const InterventionReportBody *self);

void InterventionReportBody_set_message(InterventionReportBody* self, jb_String * value);

jb_String InterventionReportBody_sourceFile(const InterventionReportBody *self);

void InterventionReportBody_set_sourceFile(InterventionReportBody* self, jb_String * value);

unsigned long InterventionReportBody_lineNumber(const InterventionReportBody *self);

void InterventionReportBody_set_lineNumber(InterventionReportBody* self, unsigned long value);

unsigned long InterventionReportBody_columnNumber(const InterventionReportBody *self);

void InterventionReportBody_set_columnNumber(InterventionReportBody* self, unsigned long value);

InterventionReportBody InterventionReportBody_new();

#ifdef __cplusplus
}
#endif
