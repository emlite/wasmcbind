#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PermissionsPolicyViolationReportBody */
DECLARE_EMLITE_TYPE(PermissionsPolicyViolationReportBody, ReportBody);

/** @brief Getter of the featureId property */
jb_String PermissionsPolicyViolationReportBody_featureId(const PermissionsPolicyViolationReportBody *self);

/** @brief Setter of the featureId property */
void PermissionsPolicyViolationReportBody_set_featureId(PermissionsPolicyViolationReportBody* self, jb_String * value);

/** @brief Getter of the sourceFile property */
jb_String PermissionsPolicyViolationReportBody_sourceFile(const PermissionsPolicyViolationReportBody *self);

/** @brief Setter of the sourceFile property */
void PermissionsPolicyViolationReportBody_set_sourceFile(PermissionsPolicyViolationReportBody* self, jb_String * value);

/** @brief Getter of the lineNumber property */
long PermissionsPolicyViolationReportBody_lineNumber(const PermissionsPolicyViolationReportBody *self);

/** @brief Setter of the lineNumber property */
void PermissionsPolicyViolationReportBody_set_lineNumber(PermissionsPolicyViolationReportBody* self, long value);

/** @brief Getter of the columnNumber property */
long PermissionsPolicyViolationReportBody_columnNumber(const PermissionsPolicyViolationReportBody *self);

/** @brief Setter of the columnNumber property */
void PermissionsPolicyViolationReportBody_set_columnNumber(PermissionsPolicyViolationReportBody* self, long value);

/** @brief Getter of the disposition property */
jb_String PermissionsPolicyViolationReportBody_disposition(const PermissionsPolicyViolationReportBody *self);

/** @brief Setter of the disposition property */
void PermissionsPolicyViolationReportBody_set_disposition(PermissionsPolicyViolationReportBody* self, jb_String * value);

/** @brief Getter of the allowAttribute property */
jb_String PermissionsPolicyViolationReportBody_allowAttribute(const PermissionsPolicyViolationReportBody *self);

/** @brief Setter of the allowAttribute property */
void PermissionsPolicyViolationReportBody_set_allowAttribute(PermissionsPolicyViolationReportBody* self, jb_String * value);

/** @brief Getter of the srcAttribute property */
jb_String PermissionsPolicyViolationReportBody_srcAttribute(const PermissionsPolicyViolationReportBody *self);

/** @brief Setter of the srcAttribute property */
void PermissionsPolicyViolationReportBody_set_srcAttribute(PermissionsPolicyViolationReportBody* self, jb_String * value);

/** @brief Constructor of the PermissionsPolicyViolationReportBody dictionary type */
PermissionsPolicyViolationReportBody PermissionsPolicyViolationReportBody_new();

#ifdef __cplusplus
}
#endif
