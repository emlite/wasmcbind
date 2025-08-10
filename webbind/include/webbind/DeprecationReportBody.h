#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DeprecationReportBody, ReportBody);

jb_String DeprecationReportBody_id(const DeprecationReportBody *self);

void DeprecationReportBody_set_id(DeprecationReportBody* self, jb_String * value);

jb_Object DeprecationReportBody_anticipatedRemoval(const DeprecationReportBody *self);

void DeprecationReportBody_set_anticipatedRemoval(DeprecationReportBody* self, jb_Object * value);

jb_String DeprecationReportBody_message(const DeprecationReportBody *self);

void DeprecationReportBody_set_message(DeprecationReportBody* self, jb_String * value);

jb_String DeprecationReportBody_sourceFile(const DeprecationReportBody *self);

void DeprecationReportBody_set_sourceFile(DeprecationReportBody* self, jb_String * value);

unsigned long DeprecationReportBody_lineNumber(const DeprecationReportBody *self);

void DeprecationReportBody_set_lineNumber(DeprecationReportBody* self, unsigned long value);

unsigned long DeprecationReportBody_columnNumber(const DeprecationReportBody *self);

void DeprecationReportBody_set_columnNumber(DeprecationReportBody* self, unsigned long value);

DeprecationReportBody DeprecationReportBody_new();

#ifdef __cplusplus
}
#endif
