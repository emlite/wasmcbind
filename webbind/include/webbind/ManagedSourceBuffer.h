#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SourceBuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ManagedSourceBuffer, SourceBuffer);

jb_Any ManagedSourceBuffer_onbufferedchange(const ManagedSourceBuffer *self);

void ManagedSourceBuffer_set_onbufferedchange(ManagedSourceBuffer* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
