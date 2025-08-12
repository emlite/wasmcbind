#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type KeySystemTrackConfiguration */
DECLARE_EMLITE_TYPE(KeySystemTrackConfiguration, em_Val);

/** @brief Getter of the robustness property */
jb_String KeySystemTrackConfiguration_robustness(const KeySystemTrackConfiguration *self);

/** @brief Setter of the robustness property */
void KeySystemTrackConfiguration_set_robustness(KeySystemTrackConfiguration* self, jb_String * value);

/** @brief Getter of the encryptionScheme property */
jb_String KeySystemTrackConfiguration_encryptionScheme(const KeySystemTrackConfiguration *self);

/** @brief Setter of the encryptionScheme property */
void KeySystemTrackConfiguration_set_encryptionScheme(KeySystemTrackConfiguration* self, jb_String * value);

/** @brief Constructor of the KeySystemTrackConfiguration dictionary type */
KeySystemTrackConfiguration KeySystemTrackConfiguration_new();

#ifdef __cplusplus
}
#endif
