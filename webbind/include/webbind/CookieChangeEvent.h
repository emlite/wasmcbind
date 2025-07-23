#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "CookieStore.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CookieChangeEvent, Event);

CookieChangeEvent CookieChangeEvent_new0(jb_DOMString * type);

CookieChangeEvent CookieChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_FrozenArray CookieChangeEvent_changed(const CookieChangeEvent *self);

jb_FrozenArray CookieChangeEvent_deleted(const CookieChangeEvent *self);
