#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaQueryListEventInit, EventInit);

jb_String MediaQueryListEventInit_media(const MediaQueryListEventInit *self);

void MediaQueryListEventInit_set_media(MediaQueryListEventInit* self, jb_String * value);

bool MediaQueryListEventInit_matches(const MediaQueryListEventInit *self);

void MediaQueryListEventInit_set_matches(MediaQueryListEventInit* self, bool value);

MediaQueryListEventInit MediaQueryListEventInit_new();

#ifdef __cplusplus
}
#endif
