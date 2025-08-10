#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CookieChangeEventInit, EventInit);

jb_Any CookieChangeEventInit_changed(const CookieChangeEventInit *self);

void CookieChangeEventInit_set_changed(CookieChangeEventInit* self, jb_Any * value);

jb_Any CookieChangeEventInit_deleted(const CookieChangeEventInit *self);

void CookieChangeEventInit_set_deleted(CookieChangeEventInit* self, jb_Any * value);

CookieChangeEventInit CookieChangeEventInit_new();

#ifdef __cplusplus
}
#endif
