#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VideoColorSpaceInit VideoColorSpaceInit;


/**
 * @brief Interface VideoColorSpace
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VideoColorSpace)
 */
DECLARE_EMLITE_TYPE(VideoColorSpace, em_Val);

/**
 * @brief Creates a new `VideoColorSpace` object. 
*/
VideoColorSpace VideoColorSpace_new0();

/**
 * @brief Creates a new `VideoColorSpace` object. 
*/
VideoColorSpace VideoColorSpace_new1(VideoColorSpaceInit * init);

/**
 * @brief Gets the `primaries` property. 
*/
VideoColorPrimaries VideoColorSpace_primaries(const VideoColorSpace *self);

/**
 * @brief Gets the `transfer` property. 
*/
VideoTransferCharacteristics VideoColorSpace_transfer(const VideoColorSpace *self);

/**
 * @brief Gets the `matrix` property. 
*/
VideoMatrixCoefficients VideoColorSpace_matrix(const VideoColorSpace *self);

/**
 * @brief Gets the `fullRange` property. 
*/
bool VideoColorSpace_fullRange(const VideoColorSpace *self);

/**
 * @brief Calls the `toJSON` method. 
*/
VideoColorSpaceInit VideoColorSpace_toJSON(VideoColorSpace* self );

#ifdef __cplusplus
}
#endif
