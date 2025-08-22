#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IntegrityViolationReportBody */
DECLARE_EMLITE_TYPE(IntegrityViolationReportBody, ReportBody);

/** @brief Getter of the documentURL property */
jb_String IntegrityViolationReportBody_documentURL(const IntegrityViolationReportBody *self);

/** @brief Setter of the documentURL property */
void IntegrityViolationReportBody_set_documentURL(IntegrityViolationReportBody* self, jb_String * value);

/** @brief Getter of the blockedURL property */
jb_String IntegrityViolationReportBody_blockedURL(const IntegrityViolationReportBody *self);

/** @brief Setter of the blockedURL property */
void IntegrityViolationReportBody_set_blockedURL(IntegrityViolationReportBody* self, jb_String * value);

/** @brief Getter of the destination property */
jb_String IntegrityViolationReportBody_destination(const IntegrityViolationReportBody *self);

/** @brief Setter of the destination property */
void IntegrityViolationReportBody_set_destination(IntegrityViolationReportBody* self, jb_String * value);

/** @brief Getter of the reportOnly property */
bool IntegrityViolationReportBody_reportOnly(const IntegrityViolationReportBody *self);

/** @brief Setter of the reportOnly property */
void IntegrityViolationReportBody_set_reportOnly(IntegrityViolationReportBody* self, bool value);

/** @brief Constructor of the IntegrityViolationReportBody dictionary type */
IntegrityViolationReportBody IntegrityViolationReportBody_new();

#ifdef __cplusplus
}
#endif
