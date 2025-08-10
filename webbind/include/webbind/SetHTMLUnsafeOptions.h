#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SetHTMLUnsafeOptions, em_Val);

jb_Any SetHTMLUnsafeOptions_sanitizer(const SetHTMLUnsafeOptions *self);

void SetHTMLUnsafeOptions_set_sanitizer(SetHTMLUnsafeOptions* self, jb_Any * value);

SetHTMLUnsafeOptions SetHTMLUnsafeOptions_new();

#ifdef __cplusplus
}
#endif
