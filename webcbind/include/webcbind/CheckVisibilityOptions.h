#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CheckVisibilityOptions */
DECLARE_EMLITE_TYPE(CheckVisibilityOptions, em_Val);

/** @brief Getter of the checkOpacity property */
bool CheckVisibilityOptions_checkOpacity(const CheckVisibilityOptions *self);

/** @brief Setter of the checkOpacity property */
void CheckVisibilityOptions_set_checkOpacity(CheckVisibilityOptions* self, bool value);

/** @brief Getter of the checkVisibilityCSS property */
bool CheckVisibilityOptions_checkVisibilityCSS(const CheckVisibilityOptions *self);

/** @brief Setter of the checkVisibilityCSS property */
void CheckVisibilityOptions_set_checkVisibilityCSS(CheckVisibilityOptions* self, bool value);

/** @brief Getter of the contentVisibilityAuto property */
bool CheckVisibilityOptions_contentVisibilityAuto(const CheckVisibilityOptions *self);

/** @brief Setter of the contentVisibilityAuto property */
void CheckVisibilityOptions_set_contentVisibilityAuto(CheckVisibilityOptions* self, bool value);

/** @brief Getter of the opacityProperty property */
bool CheckVisibilityOptions_opacityProperty(const CheckVisibilityOptions *self);

/** @brief Setter of the opacityProperty property */
void CheckVisibilityOptions_set_opacityProperty(CheckVisibilityOptions* self, bool value);

/** @brief Getter of the visibilityProperty property */
bool CheckVisibilityOptions_visibilityProperty(const CheckVisibilityOptions *self);

/** @brief Setter of the visibilityProperty property */
void CheckVisibilityOptions_set_visibilityProperty(CheckVisibilityOptions* self, bool value);

/** @brief Constructor of the CheckVisibilityOptions dictionary type */
CheckVisibilityOptions CheckVisibilityOptions_new();

#ifdef __cplusplus
}
#endif
