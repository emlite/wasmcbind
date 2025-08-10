#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportBody.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(Report, em_Val);

jb_String Report_type(const Report *self);

void Report_set_type(Report* self, jb_String * value);

jb_String Report_url(const Report *self);

void Report_set_url(Report* self, jb_String * value);

ReportBody Report_body(const Report *self);

void Report_set_body(Report* self, ReportBody * value);

Report Report_new();

#ifdef __cplusplus
}
#endif
