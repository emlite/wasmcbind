#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioParam AudioParam;


/**
 * @brief Interface AudioListener
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener)
 */
DECLARE_EMLITE_TYPE(AudioListener, em_Val);

/**
 * @brief Gets the `positionX` property. 
*/
AudioParam AudioListener_positionX(const AudioListener *self);

/**
 * @brief Gets the `positionY` property. 
*/
AudioParam AudioListener_positionY(const AudioListener *self);

/**
 * @brief Gets the `positionZ` property. 
*/
AudioParam AudioListener_positionZ(const AudioListener *self);

/**
 * @brief Gets the `forwardX` property. 
*/
AudioParam AudioListener_forwardX(const AudioListener *self);

/**
 * @brief Gets the `forwardY` property. 
*/
AudioParam AudioListener_forwardY(const AudioListener *self);

/**
 * @brief Gets the `forwardZ` property. 
*/
AudioParam AudioListener_forwardZ(const AudioListener *self);

/**
 * @brief Gets the `upX` property. 
*/
AudioParam AudioListener_upX(const AudioListener *self);

/**
 * @brief Gets the `upY` property. 
*/
AudioParam AudioListener_upY(const AudioListener *self);

/**
 * @brief Gets the `upZ` property. 
*/
AudioParam AudioListener_upZ(const AudioListener *self);

/**
 * @brief Calls the `setPosition` method. 
*/
jb_Undefined AudioListener_setPosition(AudioListener* self , float x, float y, float z);

/**
 * @brief Calls the `setOrientation` method. 
*/
jb_Undefined AudioListener_setOrientation(AudioListener* self , float x, float y, float z, float xUp, float yUp, float zUp);

#ifdef __cplusplus
}
#endif
