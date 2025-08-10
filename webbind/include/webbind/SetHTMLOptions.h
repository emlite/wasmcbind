#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SetHTMLOptions, em_Val);

jb_Any SetHTMLOptions_sanitizer(const SetHTMLOptions *self);

void SetHTMLOptions_set_sanitizer(SetHTMLOptions* self, jb_Any * value);

SetHTMLOptions SetHTMLOptions_new();

#ifdef __cplusplus
}
#endif
