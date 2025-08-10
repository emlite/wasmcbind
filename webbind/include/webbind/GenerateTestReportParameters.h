#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GenerateTestReportParameters, em_Val);

jb_String GenerateTestReportParameters_message(const GenerateTestReportParameters *self);

void GenerateTestReportParameters_set_message(GenerateTestReportParameters* self, jb_String * value);

jb_String GenerateTestReportParameters_group(const GenerateTestReportParameters *self);

void GenerateTestReportParameters_set_group(GenerateTestReportParameters* self, jb_String * value);

GenerateTestReportParameters GenerateTestReportParameters_new();

#ifdef __cplusplus
}
#endif
