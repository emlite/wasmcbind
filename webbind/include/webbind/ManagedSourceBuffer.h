#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SourceBuffer.h"
#include "enums.h"


typedef struct {
  SourceBuffer inner;
} ManagedSourceBuffer;


DECLARE_EMLITE_TYPE(ManagedSourceBuffer, SourceBuffer);

jb_Any ManagedSourceBuffer_onbufferedchange( const ManagedSourceBuffer *self);

void ManagedSourceBuffer_set_onbufferedchange(ManagedSourceBuffer* self, const jb_Any* value);
