#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} Memory;


DECLARE_EMLITE_TYPE(Memory, em_Val);

Memory Memory_new(const jb_Any* descriptor);

unsigned long Memory_grow(Memory* self , unsigned long delta);

jb_ArrayBuffer Memory_toFixedLengthBuffer(Memory* self );

jb_ArrayBuffer Memory_toResizableBuffer(Memory* self );

jb_ArrayBuffer Memory_buffer( const Memory *self);
