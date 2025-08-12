#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaKeySystemMediaCapability.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaKeySystemConfiguration */
DECLARE_EMLITE_TYPE(MediaKeySystemConfiguration, em_Val);

/** @brief Getter of the label property */
jb_String MediaKeySystemConfiguration_label(const MediaKeySystemConfiguration *self);

/** @brief Setter of the label property */
void MediaKeySystemConfiguration_set_label(MediaKeySystemConfiguration* self, jb_String * value);

/** @brief Getter of the initDataTypes property */
jb_Array MediaKeySystemConfiguration_initDataTypes(const MediaKeySystemConfiguration *self);

/** @brief Setter of the initDataTypes property */
void MediaKeySystemConfiguration_set_initDataTypes(MediaKeySystemConfiguration* self, jb_Array * value);

/** @brief Getter of the audioCapabilities property */
jb_Array MediaKeySystemConfiguration_audioCapabilities(const MediaKeySystemConfiguration *self);

/** @brief Setter of the audioCapabilities property */
void MediaKeySystemConfiguration_set_audioCapabilities(MediaKeySystemConfiguration* self, jb_Array * value);

/** @brief Getter of the videoCapabilities property */
jb_Array MediaKeySystemConfiguration_videoCapabilities(const MediaKeySystemConfiguration *self);

/** @brief Setter of the videoCapabilities property */
void MediaKeySystemConfiguration_set_videoCapabilities(MediaKeySystemConfiguration* self, jb_Array * value);

/** @brief Getter of the distinctiveIdentifier property */
MediaKeysRequirement MediaKeySystemConfiguration_distinctiveIdentifier(const MediaKeySystemConfiguration *self);

/** @brief Setter of the distinctiveIdentifier property */
void MediaKeySystemConfiguration_set_distinctiveIdentifier(MediaKeySystemConfiguration* self, MediaKeysRequirement * value);

/** @brief Getter of the persistentState property */
MediaKeysRequirement MediaKeySystemConfiguration_persistentState(const MediaKeySystemConfiguration *self);

/** @brief Setter of the persistentState property */
void MediaKeySystemConfiguration_set_persistentState(MediaKeySystemConfiguration* self, MediaKeysRequirement * value);

/** @brief Getter of the sessionTypes property */
jb_Array MediaKeySystemConfiguration_sessionTypes(const MediaKeySystemConfiguration *self);

/** @brief Setter of the sessionTypes property */
void MediaKeySystemConfiguration_set_sessionTypes(MediaKeySystemConfiguration* self, jb_Array * value);

/** @brief Constructor of the MediaKeySystemConfiguration dictionary type */
MediaKeySystemConfiguration MediaKeySystemConfiguration_new();

#ifdef __cplusplus
}
#endif
