#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CrashReportBody, ReportBody);

jb_String CrashReportBody_reason(const CrashReportBody *self);

void CrashReportBody_set_reason(CrashReportBody* self, jb_String * value);

jb_String CrashReportBody_stack(const CrashReportBody *self);

void CrashReportBody_set_stack(CrashReportBody* self, jb_String * value);

bool CrashReportBody_is_top_level(const CrashReportBody *self);

void CrashReportBody_set_is_top_level(CrashReportBody* self, bool value);

DocumentVisibilityState CrashReportBody_page_visibility(const CrashReportBody *self);

void CrashReportBody_set_page_visibility(CrashReportBody* self, DocumentVisibilityState * value);

CrashReportBody CrashReportBody_new();

#ifdef __cplusplus
}
#endif
