#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ReadableStreamIteratorOptions, em_Val);

bool ReadableStreamIteratorOptions_preventCancel(const ReadableStreamIteratorOptions *self);

void ReadableStreamIteratorOptions_set_preventCancel(ReadableStreamIteratorOptions* self, bool value);

ReadableStreamIteratorOptions ReadableStreamIteratorOptions_new();

#ifdef __cplusplus
}
#endif
