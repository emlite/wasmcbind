#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PromptResponseObject, em_Val);

AppBannerPromptOutcome PromptResponseObject_userChoice(const PromptResponseObject *self);

void PromptResponseObject_set_userChoice(PromptResponseObject* self, AppBannerPromptOutcome * value);

PromptResponseObject PromptResponseObject_new();

#ifdef __cplusplus
}
#endif
