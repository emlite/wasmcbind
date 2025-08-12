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


/**
 * @brief Interface ImageDecoder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder)
 */
DECLARE_EMLITE_TYPE(ImageDecoder, em_Val);

/**
 * @brief Creates a new `ImageDecoder` object. 
*/
ImageDecoder ImageDecoder_new(ImageDecoderInit * init);

/**
 * @brief Gets the `type` property. 
*/
jb_String ImageDecoder_type(const ImageDecoder *self);

/**
 * @brief Gets the `complete` property. 
*/
bool ImageDecoder_complete(const ImageDecoder *self);

/**
 * @brief Gets the `completed` property. 
*/
jb_Promise ImageDecoder_completed(const ImageDecoder *self);

/**
 * @brief Gets the `tracks` property. 
*/
ImageTrackList ImageDecoder_tracks(const ImageDecoder *self);

/**
 * @brief Calls the `decode` method. 
*/
jb_Promise ImageDecoder_decode0(ImageDecoder* self );

/**
 * @brief Calls the `decode` method. 
*/
jb_Promise ImageDecoder_decode1(ImageDecoder* self , ImageDecodeOptions * options);

/**
 * @brief Calls the `reset` method. 
*/
jb_Undefined ImageDecoder_reset(ImageDecoder* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined ImageDecoder_close(ImageDecoder* self );

/**
 * @brief Calls the `isTypeSupported` method. 
*/
jb_Promise ImageDecoder_isTypeSupported(ImageDecoder* self , jb_String * type);

#ifdef __cplusplus
}
#endif
