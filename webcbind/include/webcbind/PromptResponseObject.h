#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PromptResponseObject */
DECLARE_EMLITE_TYPE(PromptResponseObject, em_Val);

/** @brief Getter of the userChoice property */
AppBannerPromptOutcome PromptResponseObject_userChoice(const PromptResponseObject *self);

/** @brief Setter of the userChoice property */
void PromptResponseObject_set_userChoice(PromptResponseObject* self, AppBannerPromptOutcome * value);

/** @brief Constructor of the PromptResponseObject dictionary type */
PromptResponseObject PromptResponseObject_new();

#ifdef __cplusplus
}
#endif
