#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(StreamPipeOptions, em_Val);

bool StreamPipeOptions_preventClose(const StreamPipeOptions *self);

void StreamPipeOptions_set_preventClose(StreamPipeOptions* self, bool value);

bool StreamPipeOptions_preventAbort(const StreamPipeOptions *self);

void StreamPipeOptions_set_preventAbort(StreamPipeOptions* self, bool value);

bool StreamPipeOptions_preventCancel(const StreamPipeOptions *self);

void StreamPipeOptions_set_preventCancel(StreamPipeOptions* self, bool value);

AbortSignal StreamPipeOptions_signal(const StreamPipeOptions *self);

void StreamPipeOptions_set_signal(StreamPipeOptions* self, AbortSignal * value);

StreamPipeOptions StreamPipeOptions_new();

#ifdef __cplusplus
}
#endif
