#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaKeySystemMediaCapability, em_Val);

jb_String MediaKeySystemMediaCapability_contentType(const MediaKeySystemMediaCapability *self);

void MediaKeySystemMediaCapability_set_contentType(MediaKeySystemMediaCapability* self, jb_String * value);

jb_String MediaKeySystemMediaCapability_encryptionScheme(const MediaKeySystemMediaCapability *self);

void MediaKeySystemMediaCapability_set_encryptionScheme(MediaKeySystemMediaCapability* self, jb_String * value);

jb_String MediaKeySystemMediaCapability_robustness(const MediaKeySystemMediaCapability *self);

void MediaKeySystemMediaCapability_set_robustness(MediaKeySystemMediaCapability* self, jb_String * value);

MediaKeySystemMediaCapability MediaKeySystemMediaCapability_new();

#ifdef __cplusplus
}
#endif
