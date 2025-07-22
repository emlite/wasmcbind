#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct VideoColorSpaceInit VideoColorSpaceInit;


typedef struct {
  em_Val inner;
} VideoColorSpaceInit;


DECLARE_EMLITE_TYPE(VideoColorSpaceInit, em_Val);

VideoColorPrimaries VideoColorSpaceInit_primaries( const VideoColorSpaceInit *self);

void VideoColorSpaceInit_set_primaries(VideoColorSpaceInit* self, const VideoColorPrimaries* value);

VideoTransferCharacteristics VideoColorSpaceInit_transfer( const VideoColorSpaceInit *self);

void VideoColorSpaceInit_set_transfer(VideoColorSpaceInit* self, const VideoTransferCharacteristics* value);

VideoMatrixCoefficients VideoColorSpaceInit_matrix( const VideoColorSpaceInit *self);

void VideoColorSpaceInit_set_matrix(VideoColorSpaceInit* self, const VideoMatrixCoefficients* value);

bool VideoColorSpaceInit_fullRange( const VideoColorSpaceInit *self);

void VideoColorSpaceInit_set_fullRange(VideoColorSpaceInit* self, bool value);
typedef struct {
  em_Val inner;
} VideoColorSpace;


DECLARE_EMLITE_TYPE(VideoColorSpace, em_Val);

VideoColorSpace VideoColorSpace_new();

VideoColorSpace VideoColorSpace_new(const VideoColorSpaceInit* init);

VideoColorPrimaries VideoColorSpace_primaries( const VideoColorSpace *self);

VideoTransferCharacteristics VideoColorSpace_transfer( const VideoColorSpace *self);

VideoMatrixCoefficients VideoColorSpace_matrix( const VideoColorSpace *self);

bool VideoColorSpace_fullRange( const VideoColorSpace *self);

VideoColorSpaceInit VideoColorSpace_toJSON(VideoColorSpace* self );
