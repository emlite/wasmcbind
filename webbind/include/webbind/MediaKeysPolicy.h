#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaKeysPolicy, em_Val);

jb_String MediaKeysPolicy_minHdcpVersion(const MediaKeysPolicy *self);

void MediaKeysPolicy_set_minHdcpVersion(MediaKeysPolicy* self, jb_String * value);

MediaKeysPolicy MediaKeysPolicy_new();

#ifdef __cplusplus
}
#endif
