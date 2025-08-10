#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ReadableStreamBYOBReaderReadOptions, em_Val);

long long ReadableStreamBYOBReaderReadOptions_min(const ReadableStreamBYOBReaderReadOptions *self);

void ReadableStreamBYOBReaderReadOptions_set_min(ReadableStreamBYOBReaderReadOptions* self, long long value);

ReadableStreamBYOBReaderReadOptions ReadableStreamBYOBReaderReadOptions_new();

#ifdef __cplusplus
}
#endif
