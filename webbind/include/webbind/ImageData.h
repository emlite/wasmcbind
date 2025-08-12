#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ImageDataSettings ImageDataSettings;


/**
 * @brief Interface ImageData
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ImageData)
 */
DECLARE_EMLITE_TYPE(ImageData, em_Val);

/**
 * @brief Creates a new `ImageData` object. 
*/
ImageData ImageData_new0(jb_Any * data, unsigned long sw);

/**
 * @brief Creates a new `ImageData` object. 
*/
ImageData ImageData_new1(jb_Any * data, unsigned long sw, unsigned long sh);

/**
 * @brief Creates a new `ImageData` object. 
*/
ImageData ImageData_new2(jb_Any * data, unsigned long sw, unsigned long sh, ImageDataSettings * settings);

/**
 * @brief Gets the `width` property. 
*/
unsigned long ImageData_width(const ImageData *self);

/**
 * @brief Gets the `height` property. 
*/
unsigned long ImageData_height(const ImageData *self);

/**
 * @brief Gets the `data` property. 
*/
jb_Any ImageData_data(const ImageData *self);

/**
 * @brief Gets the `pixelFormat` property. 
*/
ImageDataPixelFormat ImageData_pixelFormat(const ImageData *self);

/**
 * @brief Gets the `colorSpace` property. 
*/
PredefinedColorSpace ImageData_colorSpace(const ImageData *self);

#ifdef __cplusplus
}
#endif
