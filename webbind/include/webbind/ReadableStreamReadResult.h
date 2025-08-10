#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ReadableStreamReadResult, em_Val);

jb_Any ReadableStreamReadResult_value(const ReadableStreamReadResult *self);

void ReadableStreamReadResult_set_value(ReadableStreamReadResult* self, jb_Any * value);

bool ReadableStreamReadResult_done(const ReadableStreamReadResult *self);

void ReadableStreamReadResult_set_done(ReadableStreamReadResult* self, bool value);

ReadableStreamReadResult ReadableStreamReadResult_new();

#ifdef __cplusplus
}
#endif
