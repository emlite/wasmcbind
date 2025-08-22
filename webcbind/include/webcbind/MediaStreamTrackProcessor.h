#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrackProcessorInit MediaStreamTrackProcessorInit;
typedef struct ReadableStream ReadableStream;


/**
 * @brief Interface MediaStreamTrackProcessor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackProcessor)
 */
DECLARE_EMLITE_TYPE(MediaStreamTrackProcessor, em_Val);

/**
 * @brief Creates a new `MediaStreamTrackProcessor` object. 
*/
MediaStreamTrackProcessor MediaStreamTrackProcessor_new(MediaStreamTrackProcessorInit * init);

/**
 * @brief Gets the `readable` property. 
*/
ReadableStream MediaStreamTrackProcessor_readable(const MediaStreamTrackProcessor *self);

#ifdef __cplusplus
}
#endif
