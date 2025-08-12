#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ImageBitmap ImageBitmap;
typedef struct Blob Blob;
typedef struct ImageEncodeOptions ImageEncodeOptions;


/**
 * @brief Interface OffscreenCanvas
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas)
 */
DECLARE_EMLITE_TYPE(OffscreenCanvas, EventTarget);

/**
 * @brief Creates a new `OffscreenCanvas` object. 
*/
OffscreenCanvas OffscreenCanvas_new(long long width, long long height);

/**
 * @brief Gets the `width` property. 
*/
long long OffscreenCanvas_width(const OffscreenCanvas *self);

/**
 * @brief Sets the `width` property. 
*/
void OffscreenCanvas_set_width(OffscreenCanvas* self, long long value);

/**
 * @brief Gets the `height` property. 
*/
long long OffscreenCanvas_height(const OffscreenCanvas *self);

/**
 * @brief Sets the `height` property. 
*/
void OffscreenCanvas_set_height(OffscreenCanvas* self, long long value);

/**
 * @brief Calls the `getContext` method. 
*/
jb_Any OffscreenCanvas_getContext0(OffscreenCanvas* self , OffscreenRenderingContextId * contextId);

/**
 * @brief Calls the `getContext` method. 
*/
jb_Any OffscreenCanvas_getContext1(OffscreenCanvas* self , OffscreenRenderingContextId * contextId, jb_Any * options);

/**
 * @brief Calls the `transferToImageBitmap` method. 
*/
ImageBitmap OffscreenCanvas_transferToImageBitmap(OffscreenCanvas* self );

/**
 * @brief Calls the `convertToBlob` method. 
*/
jb_Promise OffscreenCanvas_convertToBlob0(OffscreenCanvas* self );

/**
 * @brief Calls the `convertToBlob` method. 
*/
jb_Promise OffscreenCanvas_convertToBlob1(OffscreenCanvas* self , ImageEncodeOptions * options);

/**
 * @brief Gets the `oncontextlost` property. 
*/
jb_Any OffscreenCanvas_oncontextlost(const OffscreenCanvas *self);

/**
 * @brief Sets the `oncontextlost` property. 
*/
void OffscreenCanvas_set_oncontextlost(OffscreenCanvas* self, jb_Any * value);

/**
 * @brief Gets the `oncontextrestored` property. 
*/
jb_Any OffscreenCanvas_oncontextrestored(const OffscreenCanvas *self);

/**
 * @brief Sets the `oncontextrestored` property. 
*/
void OffscreenCanvas_set_oncontextrestored(OffscreenCanvas* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
