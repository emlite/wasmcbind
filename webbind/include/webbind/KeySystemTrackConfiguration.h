#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(KeySystemTrackConfiguration, em_Val);

jb_String KeySystemTrackConfiguration_robustness(const KeySystemTrackConfiguration *self);

void KeySystemTrackConfiguration_set_robustness(KeySystemTrackConfiguration* self, jb_String * value);

jb_String KeySystemTrackConfiguration_encryptionScheme(const KeySystemTrackConfiguration *self);

void KeySystemTrackConfiguration_set_encryptionScheme(KeySystemTrackConfiguration* self, jb_String * value);

KeySystemTrackConfiguration KeySystemTrackConfiguration_new();

#ifdef __cplusplus
}
#endif
