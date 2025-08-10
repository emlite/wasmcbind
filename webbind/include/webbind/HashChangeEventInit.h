#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HashChangeEventInit, EventInit);

jb_String HashChangeEventInit_oldURL(const HashChangeEventInit *self);

void HashChangeEventInit_set_oldURL(HashChangeEventInit* self, jb_String * value);

jb_String HashChangeEventInit_newURL(const HashChangeEventInit *self);

void HashChangeEventInit_set_newURL(HashChangeEventInit* self, jb_String * value);

HashChangeEventInit HashChangeEventInit_new();

#ifdef __cplusplus
}
#endif
