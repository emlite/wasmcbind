#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PermissionsPolicyViolationReportBody, ReportBody);

jb_String PermissionsPolicyViolationReportBody_featureId(const PermissionsPolicyViolationReportBody *self);

void PermissionsPolicyViolationReportBody_set_featureId(PermissionsPolicyViolationReportBody* self, jb_String * value);

jb_String PermissionsPolicyViolationReportBody_sourceFile(const PermissionsPolicyViolationReportBody *self);

void PermissionsPolicyViolationReportBody_set_sourceFile(PermissionsPolicyViolationReportBody* self, jb_String * value);

long PermissionsPolicyViolationReportBody_lineNumber(const PermissionsPolicyViolationReportBody *self);

void PermissionsPolicyViolationReportBody_set_lineNumber(PermissionsPolicyViolationReportBody* self, long value);

long PermissionsPolicyViolationReportBody_columnNumber(const PermissionsPolicyViolationReportBody *self);

void PermissionsPolicyViolationReportBody_set_columnNumber(PermissionsPolicyViolationReportBody* self, long value);

jb_String PermissionsPolicyViolationReportBody_disposition(const PermissionsPolicyViolationReportBody *self);

void PermissionsPolicyViolationReportBody_set_disposition(PermissionsPolicyViolationReportBody* self, jb_String * value);

jb_String PermissionsPolicyViolationReportBody_allowAttribute(const PermissionsPolicyViolationReportBody *self);

void PermissionsPolicyViolationReportBody_set_allowAttribute(PermissionsPolicyViolationReportBody* self, jb_String * value);

jb_String PermissionsPolicyViolationReportBody_srcAttribute(const PermissionsPolicyViolationReportBody *self);

void PermissionsPolicyViolationReportBody_set_srcAttribute(PermissionsPolicyViolationReportBody* self, jb_String * value);

PermissionsPolicyViolationReportBody PermissionsPolicyViolationReportBody_new();

#ifdef __cplusplus
}
#endif
