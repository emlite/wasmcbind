#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct GPUTextureView GPUTextureView;
typedef struct GPUTextureViewDescriptor GPUTextureViewDescriptor;


typedef struct {
  em_Val inner;
} GPUTextureViewDescriptor;


DECLARE_EMLITE_TYPE(GPUTextureViewDescriptor, em_Val);

GPUTextureFormat GPUTextureViewDescriptor_format( const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_format(GPUTextureViewDescriptor* self, const GPUTextureFormat* value);

GPUTextureViewDimension GPUTextureViewDescriptor_dimension( const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_dimension(GPUTextureViewDescriptor* self, const GPUTextureViewDimension* value);

jb_Any GPUTextureViewDescriptor_usage( const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_usage(GPUTextureViewDescriptor* self, const jb_Any* value);

GPUTextureAspect GPUTextureViewDescriptor_aspect( const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_aspect(GPUTextureViewDescriptor* self, const GPUTextureAspect* value);

jb_Any GPUTextureViewDescriptor_baseMipLevel( const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_baseMipLevel(GPUTextureViewDescriptor* self, const jb_Any* value);

jb_Any GPUTextureViewDescriptor_mipLevelCount( const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_mipLevelCount(GPUTextureViewDescriptor* self, const jb_Any* value);

jb_Any GPUTextureViewDescriptor_baseArrayLayer( const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_baseArrayLayer(GPUTextureViewDescriptor* self, const jb_Any* value);

jb_Any GPUTextureViewDescriptor_arrayLayerCount( const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_arrayLayerCount(GPUTextureViewDescriptor* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} GPUTexture;


DECLARE_EMLITE_TYPE(GPUTexture, em_Val);

GPUTextureView GPUTexture_createView(GPUTexture* self );

GPUTextureView GPUTexture_createView(GPUTexture* self , const GPUTextureViewDescriptor* descriptor);

jb_Undefined GPUTexture_destroy(GPUTexture* self );

jb_Any GPUTexture_width( const GPUTexture *self);

jb_Any GPUTexture_height( const GPUTexture *self);

jb_Any GPUTexture_depthOrArrayLayers( const GPUTexture *self);

jb_Any GPUTexture_mipLevelCount( const GPUTexture *self);

jb_Any GPUTexture_sampleCount( const GPUTexture *self);

GPUTextureDimension GPUTexture_dimension( const GPUTexture *self);

GPUTextureFormat GPUTexture_format( const GPUTexture *self);

jb_Any GPUTexture_usage( const GPUTexture *self);

jb_USVString GPUTexture_label( const GPUTexture *self);

void GPUTexture_set_label(GPUTexture* self, const jb_USVString* value);
