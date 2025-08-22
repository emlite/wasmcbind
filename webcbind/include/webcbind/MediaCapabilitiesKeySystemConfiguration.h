#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "KeySystemTrackConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaCapabilitiesKeySystemConfiguration */
DECLARE_EMLITE_TYPE(MediaCapabilitiesKeySystemConfiguration, em_Val);

/** @brief Getter of the keySystem property */
jb_String MediaCapabilitiesKeySystemConfiguration_keySystem(const MediaCapabilitiesKeySystemConfiguration *self);

/** @brief Setter of the keySystem property */
void MediaCapabilitiesKeySystemConfiguration_set_keySystem(MediaCapabilitiesKeySystemConfiguration* self, jb_String * value);

/** @brief Getter of the initDataType property */
jb_String MediaCapabilitiesKeySystemConfiguration_initDataType(const MediaCapabilitiesKeySystemConfiguration *self);

/** @brief Setter of the initDataType property */
void MediaCapabilitiesKeySystemConfiguration_set_initDataType(MediaCapabilitiesKeySystemConfiguration* self, jb_String * value);

/** @brief Getter of the distinctiveIdentifier property */
MediaKeysRequirement MediaCapabilitiesKeySystemConfiguration_distinctiveIdentifier(const MediaCapabilitiesKeySystemConfiguration *self);

/** @brief Setter of the distinctiveIdentifier property */
void MediaCapabilitiesKeySystemConfiguration_set_distinctiveIdentifier(MediaCapabilitiesKeySystemConfiguration* self, MediaKeysRequirement * value);

/** @brief Getter of the persistentState property */
MediaKeysRequirement MediaCapabilitiesKeySystemConfiguration_persistentState(const MediaCapabilitiesKeySystemConfiguration *self);

/** @brief Setter of the persistentState property */
void MediaCapabilitiesKeySystemConfiguration_set_persistentState(MediaCapabilitiesKeySystemConfiguration* self, MediaKeysRequirement * value);

/** @brief Getter of the sessionTypes property */
jb_Array MediaCapabilitiesKeySystemConfiguration_sessionTypes(const MediaCapabilitiesKeySystemConfiguration *self);

/** @brief Setter of the sessionTypes property */
void MediaCapabilitiesKeySystemConfiguration_set_sessionTypes(MediaCapabilitiesKeySystemConfiguration* self, jb_Array * value);

/** @brief Getter of the audio property */
KeySystemTrackConfiguration MediaCapabilitiesKeySystemConfiguration_audio(const MediaCapabilitiesKeySystemConfiguration *self);

/** @brief Setter of the audio property */
void MediaCapabilitiesKeySystemConfiguration_set_audio(MediaCapabilitiesKeySystemConfiguration* self, KeySystemTrackConfiguration * value);

/** @brief Getter of the video property */
KeySystemTrackConfiguration MediaCapabilitiesKeySystemConfiguration_video(const MediaCapabilitiesKeySystemConfiguration *self);

/** @brief Setter of the video property */
void MediaCapabilitiesKeySystemConfiguration_set_video(MediaCapabilitiesKeySystemConfiguration* self, KeySystemTrackConfiguration * value);

/** @brief Constructor of the MediaCapabilitiesKeySystemConfiguration dictionary type */
MediaCapabilitiesKeySystemConfiguration MediaCapabilitiesKeySystemConfiguration_new();

#ifdef __cplusplus
}
#endif
