#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type InterventionReportBody */
DECLARE_EMLITE_TYPE(InterventionReportBody, ReportBody);

/** @brief Getter of the id property */
jb_String InterventionReportBody_id(const InterventionReportBody *self);

/** @brief Setter of the id property */
void InterventionReportBody_set_id(InterventionReportBody* self, jb_String * value);

/** @brief Getter of the message property */
jb_String InterventionReportBody_message(const InterventionReportBody *self);

/** @brief Setter of the message property */
void InterventionReportBody_set_message(InterventionReportBody* self, jb_String * value);

/** @brief Getter of the sourceFile property */
jb_String InterventionReportBody_sourceFile(const InterventionReportBody *self);

/** @brief Setter of the sourceFile property */
void InterventionReportBody_set_sourceFile(InterventionReportBody* self, jb_String * value);

/** @brief Getter of the lineNumber property */
unsigned long InterventionReportBody_lineNumber(const InterventionReportBody *self);

/** @brief Setter of the lineNumber property */
void InterventionReportBody_set_lineNumber(InterventionReportBody* self, unsigned long value);

/** @brief Getter of the columnNumber property */
unsigned long InterventionReportBody_columnNumber(const InterventionReportBody *self);

/** @brief Setter of the columnNumber property */
void InterventionReportBody_set_columnNumber(InterventionReportBody* self, unsigned long value);

/** @brief Constructor of the InterventionReportBody dictionary type */
InterventionReportBody InterventionReportBody_new();

#ifdef __cplusplus
}
#endif
