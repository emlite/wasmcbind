#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "CookieStore.h"
#include "enums.h"


typedef struct {
  Event inner;
} CookieChangeEvent;


DECLARE_EMLITE_TYPE(CookieChangeEvent, Event);

CookieChangeEvent CookieChangeEvent_new(const jb_DOMString* type);

CookieChangeEvent CookieChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_FrozenArray CookieChangeEvent_changed( const CookieChangeEvent *self);

jb_FrozenArray CookieChangeEvent_deleted( const CookieChangeEvent *self);
