#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct ScreenDetailed ScreenDetailed;


typedef struct {
  EventTarget inner;
} ScreenDetails;


DECLARE_EMLITE_TYPE(ScreenDetails, EventTarget);

jb_FrozenArray ScreenDetails_screens( const ScreenDetails *self);

ScreenDetailed ScreenDetails_currentScreen( const ScreenDetails *self);

jb_Any ScreenDetails_onscreenschange( const ScreenDetails *self);

void ScreenDetails_set_onscreenschange(ScreenDetails* self, const jb_Any* value);

jb_Any ScreenDetails_oncurrentscreenchange( const ScreenDetails *self);

void ScreenDetails_set_oncurrentscreenchange(ScreenDetails* self, const jb_Any* value);
