#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ScriptingPolicyReportBody */
DECLARE_EMLITE_TYPE(ScriptingPolicyReportBody, ReportBody);

/** @brief Getter of the violationType property */
jb_String ScriptingPolicyReportBody_violationType(const ScriptingPolicyReportBody *self);

/** @brief Setter of the violationType property */
void ScriptingPolicyReportBody_set_violationType(ScriptingPolicyReportBody* self, jb_String * value);

/** @brief Getter of the violationURL property */
jb_String ScriptingPolicyReportBody_violationURL(const ScriptingPolicyReportBody *self);

/** @brief Setter of the violationURL property */
void ScriptingPolicyReportBody_set_violationURL(ScriptingPolicyReportBody* self, jb_String * value);

/** @brief Getter of the violationSample property */
jb_String ScriptingPolicyReportBody_violationSample(const ScriptingPolicyReportBody *self);

/** @brief Setter of the violationSample property */
void ScriptingPolicyReportBody_set_violationSample(ScriptingPolicyReportBody* self, jb_String * value);

/** @brief Getter of the lineno property */
unsigned long ScriptingPolicyReportBody_lineno(const ScriptingPolicyReportBody *self);

/** @brief Setter of the lineno property */
void ScriptingPolicyReportBody_set_lineno(ScriptingPolicyReportBody* self, unsigned long value);

/** @brief Getter of the colno property */
unsigned long ScriptingPolicyReportBody_colno(const ScriptingPolicyReportBody *self);

/** @brief Setter of the colno property */
void ScriptingPolicyReportBody_set_colno(ScriptingPolicyReportBody* self, unsigned long value);

/** @brief Constructor of the ScriptingPolicyReportBody dictionary type */
ScriptingPolicyReportBody ScriptingPolicyReportBody_new();

#ifdef __cplusplus
}
#endif
