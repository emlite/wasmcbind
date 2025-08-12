#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GamepadPose
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose)
 */
DECLARE_EMLITE_TYPE(GamepadPose, em_Val);

/**
 * @brief Gets the `hasOrientation` property. 
*/
bool GamepadPose_hasOrientation(const GamepadPose *self);

/**
 * @brief Gets the `hasPosition` property. 
*/
bool GamepadPose_hasPosition(const GamepadPose *self);

/**
 * @brief Gets the `position` property. 
*/
jb_Float32Array GamepadPose_position(const GamepadPose *self);

/**
 * @brief Gets the `linearVelocity` property. 
*/
jb_Float32Array GamepadPose_linearVelocity(const GamepadPose *self);

/**
 * @brief Gets the `linearAcceleration` property. 
*/
jb_Float32Array GamepadPose_linearAcceleration(const GamepadPose *self);

/**
 * @brief Gets the `orientation` property. 
*/
jb_Float32Array GamepadPose_orientation(const GamepadPose *self);

/**
 * @brief Gets the `angularVelocity` property. 
*/
jb_Float32Array GamepadPose_angularVelocity(const GamepadPose *self);

/**
 * @brief Gets the `angularAcceleration` property. 
*/
jb_Float32Array GamepadPose_angularAcceleration(const GamepadPose *self);

#ifdef __cplusplus
}
#endif
