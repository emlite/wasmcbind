#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ScriptingPolicyReportBody, ReportBody);

jb_String ScriptingPolicyReportBody_violationType(const ScriptingPolicyReportBody *self);

void ScriptingPolicyReportBody_set_violationType(ScriptingPolicyReportBody* self, jb_String * value);

jb_String ScriptingPolicyReportBody_violationURL(const ScriptingPolicyReportBody *self);

void ScriptingPolicyReportBody_set_violationURL(ScriptingPolicyReportBody* self, jb_String * value);

jb_String ScriptingPolicyReportBody_violationSample(const ScriptingPolicyReportBody *self);

void ScriptingPolicyReportBody_set_violationSample(ScriptingPolicyReportBody* self, jb_String * value);

unsigned long ScriptingPolicyReportBody_lineno(const ScriptingPolicyReportBody *self);

void ScriptingPolicyReportBody_set_lineno(ScriptingPolicyReportBody* self, unsigned long value);

unsigned long ScriptingPolicyReportBody_colno(const ScriptingPolicyReportBody *self);

void ScriptingPolicyReportBody_set_colno(ScriptingPolicyReportBody* self, unsigned long value);

ScriptingPolicyReportBody ScriptingPolicyReportBody_new();

#ifdef __cplusplus
}
#endif
