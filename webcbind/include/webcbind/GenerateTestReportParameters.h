#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GenerateTestReportParameters */
DECLARE_EMLITE_TYPE(GenerateTestReportParameters, em_Val);

/** @brief Getter of the message property */
jb_String GenerateTestReportParameters_message(const GenerateTestReportParameters *self);

/** @brief Setter of the message property */
void GenerateTestReportParameters_set_message(GenerateTestReportParameters* self, jb_String * value);

/** @brief Getter of the group property */
jb_String GenerateTestReportParameters_group(const GenerateTestReportParameters *self);

/** @brief Setter of the group property */
void GenerateTestReportParameters_set_group(GenerateTestReportParameters* self, jb_String * value);

/** @brief Constructor of the GenerateTestReportParameters dictionary type */
GenerateTestReportParameters GenerateTestReportParameters_new();

#ifdef __cplusplus
}
#endif
