#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SetHTMLUnsafeOptions */
DECLARE_EMLITE_TYPE(SetHTMLUnsafeOptions, em_Val);

/** @brief Getter of the sanitizer property */
jb_Any SetHTMLUnsafeOptions_sanitizer(const SetHTMLUnsafeOptions *self);

/** @brief Setter of the sanitizer property */
void SetHTMLUnsafeOptions_set_sanitizer(SetHTMLUnsafeOptions* self, jb_Any * value);

/** @brief Constructor of the SetHTMLUnsafeOptions dictionary type */
SetHTMLUnsafeOptions SetHTMLUnsafeOptions_new();

#ifdef __cplusplus
}
#endif
