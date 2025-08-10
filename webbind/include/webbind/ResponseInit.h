#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ResponseInit, em_Val);

unsigned short ResponseInit_status(const ResponseInit *self);

void ResponseInit_set_status(ResponseInit* self, unsigned short value);

jb_String ResponseInit_statusText(const ResponseInit *self);

void ResponseInit_set_statusText(ResponseInit* self, jb_String * value);

jb_Any ResponseInit_headers(const ResponseInit *self);

void ResponseInit_set_headers(ResponseInit* self, jb_Any * value);

ResponseInit ResponseInit_new();

#ifdef __cplusplus
}
#endif
