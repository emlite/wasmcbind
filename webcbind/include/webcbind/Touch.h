#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TouchInit TouchInit;
typedef struct EventTarget EventTarget;


/**
 * @brief Interface Touch
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Touch)
 */
DECLARE_EMLITE_TYPE(Touch, em_Val);

/**
 * @brief Creates a new `Touch` object. 
*/
Touch Touch_new(TouchInit * touchInitDict);

/**
 * @brief Gets the `identifier` property. 
*/
long Touch_identifier(const Touch *self);

/**
 * @brief Gets the `target` property. 
*/
EventTarget Touch_target(const Touch *self);

/**
 * @brief Gets the `screenX` property. 
*/
double Touch_screenX(const Touch *self);

/**
 * @brief Gets the `screenY` property. 
*/
double Touch_screenY(const Touch *self);

/**
 * @brief Gets the `clientX` property. 
*/
double Touch_clientX(const Touch *self);

/**
 * @brief Gets the `clientY` property. 
*/
double Touch_clientY(const Touch *self);

/**
 * @brief Gets the `pageX` property. 
*/
double Touch_pageX(const Touch *self);

/**
 * @brief Gets the `pageY` property. 
*/
double Touch_pageY(const Touch *self);

/**
 * @brief Gets the `radiusX` property. 
*/
float Touch_radiusX(const Touch *self);

/**
 * @brief Gets the `radiusY` property. 
*/
float Touch_radiusY(const Touch *self);

/**
 * @brief Gets the `rotationAngle` property. 
*/
float Touch_rotationAngle(const Touch *self);

/**
 * @brief Gets the `force` property. 
*/
float Touch_force(const Touch *self);

/**
 * @brief Gets the `altitudeAngle` property. 
*/
float Touch_altitudeAngle(const Touch *self);

/**
 * @brief Gets the `azimuthAngle` property. 
*/
float Touch_azimuthAngle(const Touch *self);

/**
 * @brief Gets the `touchType` property. 
*/
TouchType Touch_touchType(const Touch *self);

#ifdef __cplusplus
}
#endif
