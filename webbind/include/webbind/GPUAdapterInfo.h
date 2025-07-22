#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} GPUAdapterInfo;


DECLARE_EMLITE_TYPE(GPUAdapterInfo, em_Val);

jb_DOMString GPUAdapterInfo_vendor( const GPUAdapterInfo *self);

jb_DOMString GPUAdapterInfo_architecture( const GPUAdapterInfo *self);

jb_DOMString GPUAdapterInfo_device( const GPUAdapterInfo *self);

jb_DOMString GPUAdapterInfo_description( const GPUAdapterInfo *self);

unsigned long GPUAdapterInfo_subgroupMinSize( const GPUAdapterInfo *self);

unsigned long GPUAdapterInfo_subgroupMaxSize( const GPUAdapterInfo *self);

bool GPUAdapterInfo_isFallbackAdapter( const GPUAdapterInfo *self);
