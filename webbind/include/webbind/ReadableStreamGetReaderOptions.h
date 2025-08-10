#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ReadableStreamGetReaderOptions, em_Val);

ReadableStreamReaderMode ReadableStreamGetReaderOptions_mode(const ReadableStreamGetReaderOptions *self);

void ReadableStreamGetReaderOptions_set_mode(ReadableStreamGetReaderOptions* self, ReadableStreamReaderMode * value);

ReadableStreamGetReaderOptions ReadableStreamGetReaderOptions_new();

#ifdef __cplusplus
}
#endif
