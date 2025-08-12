#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ImageBitmap
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ImageBitmap)
 */
DECLARE_EMLITE_TYPE(ImageBitmap, em_Val);

/**
 * @brief Gets the `width` property. 
*/
unsigned long ImageBitmap_width(const ImageBitmap *self);

/**
 * @brief Gets the `height` property. 
*/
unsigned long ImageBitmap_height(const ImageBitmap *self);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined ImageBitmap_close(ImageBitmap* self );

#ifdef __cplusplus
}
#endif
