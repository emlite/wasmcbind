#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct GPUComputePipeline GPUComputePipeline;
typedef struct GPUBuffer GPUBuffer;
typedef struct GPUBindGroup GPUBindGroup;


typedef struct {
  em_Val inner;
} GPUComputePassEncoder;


DECLARE_EMLITE_TYPE(GPUComputePassEncoder, em_Val);

jb_Undefined GPUComputePassEncoder_setPipeline(GPUComputePassEncoder* self , const GPUComputePipeline* pipeline);

jb_Undefined GPUComputePassEncoder_dispatchWorkgroups(GPUComputePassEncoder* self , const jb_Any* workgroupCountX);

jb_Undefined GPUComputePassEncoder_dispatchWorkgroups(GPUComputePassEncoder* self , const jb_Any* workgroupCountX, const jb_Any* workgroupCountY);

jb_Undefined GPUComputePassEncoder_dispatchWorkgroups(GPUComputePassEncoder* self , const jb_Any* workgroupCountX, const jb_Any* workgroupCountY, const jb_Any* workgroupCountZ);

jb_Undefined GPUComputePassEncoder_dispatchWorkgroupsIndirect(GPUComputePassEncoder* self , const GPUBuffer* indirectBuffer, const jb_Any* indirectOffset);

jb_Undefined GPUComputePassEncoder_end(GPUComputePassEncoder* self );

jb_USVString GPUComputePassEncoder_label( const GPUComputePassEncoder *self);

void GPUComputePassEncoder_set_label(GPUComputePassEncoder* self, const jb_USVString* value);

jb_Undefined GPUComputePassEncoder_pushDebugGroup(GPUComputePassEncoder* self , const jb_USVString* groupLabel);

jb_Undefined GPUComputePassEncoder_popDebugGroup(GPUComputePassEncoder* self );

jb_Undefined GPUComputePassEncoder_insertDebugMarker(GPUComputePassEncoder* self , const jb_USVString* markerLabel);

jb_Undefined GPUComputePassEncoder_setBindGroup(GPUComputePassEncoder* self , const jb_Any* index, const GPUBindGroup* bindGroup, const jb_Uint32Array* dynamicOffsetsData, const jb_Any* dynamicOffsetsDataStart, const jb_Any* dynamicOffsetsDataLength);
