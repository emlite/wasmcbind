#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaKeySystemMediaCapability */
DECLARE_EMLITE_TYPE(MediaKeySystemMediaCapability, em_Val);

/** @brief Getter of the contentType property */
jb_String MediaKeySystemMediaCapability_contentType(const MediaKeySystemMediaCapability *self);

/** @brief Setter of the contentType property */
void MediaKeySystemMediaCapability_set_contentType(MediaKeySystemMediaCapability* self, jb_String * value);

/** @brief Getter of the encryptionScheme property */
jb_String MediaKeySystemMediaCapability_encryptionScheme(const MediaKeySystemMediaCapability *self);

/** @brief Setter of the encryptionScheme property */
void MediaKeySystemMediaCapability_set_encryptionScheme(MediaKeySystemMediaCapability* self, jb_String * value);

/** @brief Getter of the robustness property */
jb_String MediaKeySystemMediaCapability_robustness(const MediaKeySystemMediaCapability *self);

/** @brief Setter of the robustness property */
void MediaKeySystemMediaCapability_set_robustness(MediaKeySystemMediaCapability* self, jb_String * value);

/** @brief Constructor of the MediaKeySystemMediaCapability dictionary type */
MediaKeySystemMediaCapability MediaKeySystemMediaCapability_new();

#ifdef __cplusplus
}
#endif
