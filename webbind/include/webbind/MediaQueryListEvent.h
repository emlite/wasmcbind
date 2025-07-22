#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} MediaQueryListEvent;


DECLARE_EMLITE_TYPE(MediaQueryListEvent, Event);

MediaQueryListEvent MediaQueryListEvent_new(const jb_CSSOMString* type);

MediaQueryListEvent MediaQueryListEvent_new(const jb_CSSOMString* type, const jb_Any* eventInitDict);

jb_CSSOMString MediaQueryListEvent_media( const MediaQueryListEvent *self);

bool MediaQueryListEvent_matches( const MediaQueryListEvent *self);
