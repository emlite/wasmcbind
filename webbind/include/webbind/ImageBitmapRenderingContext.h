#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ImageBitmap ImageBitmap;


/**
 * @brief Interface ImageBitmapRenderingContext
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ImageBitmapRenderingContext)
 */
DECLARE_EMLITE_TYPE(ImageBitmapRenderingContext, em_Val);

/**
 * @brief Gets the `canvas` property. 
*/
jb_Any ImageBitmapRenderingContext_canvas(const ImageBitmapRenderingContext *self);

/**
 * @brief Calls the `transferFromImageBitmap` method. 
*/
jb_Undefined ImageBitmapRenderingContext_transferFromImageBitmap(ImageBitmapRenderingContext* self , ImageBitmap * bitmap);

#ifdef __cplusplus
}
#endif
