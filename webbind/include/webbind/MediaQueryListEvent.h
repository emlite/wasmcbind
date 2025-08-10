#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaQueryListEventInit MediaQueryListEventInit;

DECLARE_EMLITE_TYPE(MediaQueryListEvent, Event);

MediaQueryListEvent MediaQueryListEvent_new0(jb_String * type);

MediaQueryListEvent MediaQueryListEvent_new1(jb_String * type, MediaQueryListEventInit * eventInitDict);

jb_String MediaQueryListEvent_media(const MediaQueryListEvent *self);

bool MediaQueryListEvent_matches(const MediaQueryListEvent *self);

#ifdef __cplusplus
}
#endif
