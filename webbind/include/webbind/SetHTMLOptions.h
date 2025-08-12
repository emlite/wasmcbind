#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SetHTMLOptions */
DECLARE_EMLITE_TYPE(SetHTMLOptions, em_Val);

/** @brief Getter of the sanitizer property */
jb_Any SetHTMLOptions_sanitizer(const SetHTMLOptions *self);

/** @brief Setter of the sanitizer property */
void SetHTMLOptions_set_sanitizer(SetHTMLOptions* self, jb_Any * value);

/** @brief Constructor of the SetHTMLOptions dictionary type */
SetHTMLOptions SetHTMLOptions_new();

#ifdef __cplusplus
}
#endif
