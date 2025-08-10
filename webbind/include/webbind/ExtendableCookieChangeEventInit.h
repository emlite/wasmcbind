#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ExtendableCookieChangeEventInit, ExtendableEventInit);

jb_Any ExtendableCookieChangeEventInit_changed(const ExtendableCookieChangeEventInit *self);

void ExtendableCookieChangeEventInit_set_changed(ExtendableCookieChangeEventInit* self, jb_Any * value);

jb_Any ExtendableCookieChangeEventInit_deleted(const ExtendableCookieChangeEventInit *self);

void ExtendableCookieChangeEventInit_set_deleted(ExtendableCookieChangeEventInit* self, jb_Any * value);

ExtendableCookieChangeEventInit ExtendableCookieChangeEventInit_new();

#ifdef __cplusplus
}
#endif
