#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ImageTrack
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrack)
 */
DECLARE_EMLITE_TYPE(ImageTrack, em_Val);

/**
 * @brief Gets the `animated` property. 
*/
bool ImageTrack_animated(const ImageTrack *self);

/**
 * @brief Gets the `frameCount` property. 
*/
unsigned long ImageTrack_frameCount(const ImageTrack *self);

/**
 * @brief Gets the `repetitionCount` property. 
*/
float ImageTrack_repetitionCount(const ImageTrack *self);

/**
 * @brief Gets the `selected` property. 
*/
bool ImageTrack_selected(const ImageTrack *self);

/**
 * @brief Sets the `selected` property. 
*/
void ImageTrack_set_selected(ImageTrack* self, bool value);

#ifdef __cplusplus
}
#endif
