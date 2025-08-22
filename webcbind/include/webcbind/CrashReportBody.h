#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CrashReportBody */
DECLARE_EMLITE_TYPE(CrashReportBody, ReportBody);

/** @brief Getter of the reason property */
jb_String CrashReportBody_reason(const CrashReportBody *self);

/** @brief Setter of the reason property */
void CrashReportBody_set_reason(CrashReportBody* self, jb_String * value);

/** @brief Getter of the stack property */
jb_String CrashReportBody_stack(const CrashReportBody *self);

/** @brief Setter of the stack property */
void CrashReportBody_set_stack(CrashReportBody* self, jb_String * value);

/** @brief Getter of the is_top_level property */
bool CrashReportBody_is_top_level(const CrashReportBody *self);

/** @brief Setter of the is_top_level property */
void CrashReportBody_set_is_top_level(CrashReportBody* self, bool value);

/** @brief Getter of the page_visibility property */
DocumentVisibilityState CrashReportBody_page_visibility(const CrashReportBody *self);

/** @brief Setter of the page_visibility property */
void CrashReportBody_set_page_visibility(CrashReportBody* self, DocumentVisibilityState * value);

/** @brief Constructor of the CrashReportBody dictionary type */
CrashReportBody CrashReportBody_new();

#ifdef __cplusplus
}
#endif
