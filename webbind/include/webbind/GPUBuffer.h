#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} GPUBuffer;


DECLARE_EMLITE_TYPE(GPUBuffer, em_Val);

jb_Any GPUBuffer_size( const GPUBuffer *self);

jb_Any GPUBuffer_usage( const GPUBuffer *self);

GPUBufferMapState GPUBuffer_mapState( const GPUBuffer *self);

jb_Promise GPUBuffer_mapAsync(GPUBuffer* self , const jb_Any* mode);

jb_Promise GPUBuffer_mapAsync(GPUBuffer* self , const jb_Any* mode, const jb_Any* offset);

jb_Promise GPUBuffer_mapAsync(GPUBuffer* self , const jb_Any* mode, const jb_Any* offset, const jb_Any* size);

jb_ArrayBuffer GPUBuffer_getMappedRange(GPUBuffer* self );

jb_ArrayBuffer GPUBuffer_getMappedRange(GPUBuffer* self , const jb_Any* offset);

jb_ArrayBuffer GPUBuffer_getMappedRange(GPUBuffer* self , const jb_Any* offset, const jb_Any* size);

jb_Undefined GPUBuffer_unmap(GPUBuffer* self );

jb_Undefined GPUBuffer_destroy(GPUBuffer* self );

jb_USVString GPUBuffer_label( const GPUBuffer *self);

void GPUBuffer_set_label(GPUBuffer* self, const jb_USVString* value);
