#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type Report */
DECLARE_EMLITE_TYPE(Report, em_Val);

/** @brief Getter of the type property */
jb_String Report_type(const Report *self);

/** @brief Setter of the type property */
void Report_set_type(Report* self, jb_String * value);

/** @brief Getter of the url property */
jb_String Report_url(const Report *self);

/** @brief Setter of the url property */
void Report_set_url(Report* self, jb_String * value);

/** @brief Getter of the body property */
ReportBody Report_body(const Report *self);

/** @brief Setter of the body property */
void Report_set_body(Report* self, ReportBody * value);

/** @brief Constructor of the Report dictionary type */
Report Report_new();

#ifdef __cplusplus
}
#endif
