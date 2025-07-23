#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "CookieStore.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(ExtendableCookieChangeEvent, ExtendableEvent);

ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new0(jb_DOMString * type);

ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_FrozenArray ExtendableCookieChangeEvent_changed(const ExtendableCookieChangeEvent *self);

jb_FrozenArray ExtendableCookieChangeEvent_deleted(const ExtendableCookieChangeEvent *self);
