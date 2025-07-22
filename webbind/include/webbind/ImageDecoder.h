#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ImageTrackList ImageTrackList;
typedef struct ImageDecodeResult ImageDecodeResult;
typedef struct ImageDecodeOptions ImageDecodeOptions;
typedef struct VideoFrame VideoFrame;


typedef struct {
  em_Val inner;
} ImageDecodeResult;


DECLARE_EMLITE_TYPE(ImageDecodeResult, em_Val);

VideoFrame ImageDecodeResult_image( const ImageDecodeResult *self);

void ImageDecodeResult_set_image(ImageDecodeResult* self, const VideoFrame* value);

bool ImageDecodeResult_complete( const ImageDecodeResult *self);

void ImageDecodeResult_set_complete(ImageDecodeResult* self, bool value);
typedef struct {
  em_Val inner;
} ImageDecodeOptions;


DECLARE_EMLITE_TYPE(ImageDecodeOptions, em_Val);

unsigned long ImageDecodeOptions_frameIndex( const ImageDecodeOptions *self);

void ImageDecodeOptions_set_frameIndex(ImageDecodeOptions* self, unsigned long value);

bool ImageDecodeOptions_completeFramesOnly( const ImageDecodeOptions *self);

void ImageDecodeOptions_set_completeFramesOnly(ImageDecodeOptions* self, bool value);
typedef struct {
  em_Val inner;
} ImageDecoder;


DECLARE_EMLITE_TYPE(ImageDecoder, em_Val);

ImageDecoder ImageDecoder_new(const jb_Any* init);

jb_DOMString ImageDecoder_type( const ImageDecoder *self);

bool ImageDecoder_complete( const ImageDecoder *self);

jb_Promise ImageDecoder_completed( const ImageDecoder *self);

ImageTrackList ImageDecoder_tracks( const ImageDecoder *self);

jb_Promise ImageDecoder_decode(ImageDecoder* self );

jb_Promise ImageDecoder_decode(ImageDecoder* self , const ImageDecodeOptions* options);

jb_Undefined ImageDecoder_reset(ImageDecoder* self );

jb_Undefined ImageDecoder_close(ImageDecoder* self );

jb_Promise ImageDecoder_isTypeSupported(ImageDecoder* self , const jb_DOMString* type);
