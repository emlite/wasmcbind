#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ImageDecoderInit ImageDecoderInit;
typedef struct ImageTrackList ImageTrackList;
typedef struct ImageDecodeResult ImageDecodeResult;
typedef struct ImageDecodeOptions ImageDecodeOptions;

DECLARE_EMLITE_TYPE(ImageDecoder, em_Val);

ImageDecoder ImageDecoder_new(ImageDecoderInit * init);

jb_String ImageDecoder_type(const ImageDecoder *self);

bool ImageDecoder_complete(const ImageDecoder *self);

jb_Promise ImageDecoder_completed(const ImageDecoder *self);

ImageTrackList ImageDecoder_tracks(const ImageDecoder *self);

jb_Promise ImageDecoder_decode0(ImageDecoder* self );

jb_Promise ImageDecoder_decode1(ImageDecoder* self , ImageDecodeOptions * options);

jb_Undefined ImageDecoder_reset(ImageDecoder* self );

jb_Undefined ImageDecoder_close(ImageDecoder* self );

jb_Promise ImageDecoder_isTypeSupported(ImageDecoder* self , jb_String * type);

#ifdef __cplusplus
}
#endif
