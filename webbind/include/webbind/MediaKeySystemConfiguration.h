#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaKeySystemMediaCapability.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaKeySystemConfiguration, em_Val);

jb_String MediaKeySystemConfiguration_label(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_label(MediaKeySystemConfiguration* self, jb_String * value);

jb_Array MediaKeySystemConfiguration_initDataTypes(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_initDataTypes(MediaKeySystemConfiguration* self, jb_Array * value);

jb_Array MediaKeySystemConfiguration_audioCapabilities(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_audioCapabilities(MediaKeySystemConfiguration* self, jb_Array * value);

jb_Array MediaKeySystemConfiguration_videoCapabilities(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_videoCapabilities(MediaKeySystemConfiguration* self, jb_Array * value);

MediaKeysRequirement MediaKeySystemConfiguration_distinctiveIdentifier(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_distinctiveIdentifier(MediaKeySystemConfiguration* self, MediaKeysRequirement * value);

MediaKeysRequirement MediaKeySystemConfiguration_persistentState(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_persistentState(MediaKeySystemConfiguration* self, MediaKeysRequirement * value);

jb_Array MediaKeySystemConfiguration_sessionTypes(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_sessionTypes(MediaKeySystemConfiguration* self, jb_Array * value);

MediaKeySystemConfiguration MediaKeySystemConfiguration_new();

#ifdef __cplusplus
}
#endif
