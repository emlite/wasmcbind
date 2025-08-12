#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DeprecationReportBody */
DECLARE_EMLITE_TYPE(DeprecationReportBody, ReportBody);

/** @brief Getter of the id property */
jb_String DeprecationReportBody_id(const DeprecationReportBody *self);

/** @brief Setter of the id property */
void DeprecationReportBody_set_id(DeprecationReportBody* self, jb_String * value);

/** @brief Getter of the anticipatedRemoval property */
jb_Object DeprecationReportBody_anticipatedRemoval(const DeprecationReportBody *self);

/** @brief Setter of the anticipatedRemoval property */
void DeprecationReportBody_set_anticipatedRemoval(DeprecationReportBody* self, jb_Object * value);

/** @brief Getter of the message property */
jb_String DeprecationReportBody_message(const DeprecationReportBody *self);

/** @brief Setter of the message property */
void DeprecationReportBody_set_message(DeprecationReportBody* self, jb_String * value);

/** @brief Getter of the sourceFile property */
jb_String DeprecationReportBody_sourceFile(const DeprecationReportBody *self);

/** @brief Setter of the sourceFile property */
void DeprecationReportBody_set_sourceFile(DeprecationReportBody* self, jb_String * value);

/** @brief Getter of the lineNumber property */
unsigned long DeprecationReportBody_lineNumber(const DeprecationReportBody *self);

/** @brief Setter of the lineNumber property */
void DeprecationReportBody_set_lineNumber(DeprecationReportBody* self, unsigned long value);

/** @brief Getter of the columnNumber property */
unsigned long DeprecationReportBody_columnNumber(const DeprecationReportBody *self);

/** @brief Setter of the columnNumber property */
void DeprecationReportBody_set_columnNumber(DeprecationReportBody* self, unsigned long value);

/** @brief Constructor of the DeprecationReportBody dictionary type */
DeprecationReportBody DeprecationReportBody_new();

#ifdef __cplusplus
}
#endif
