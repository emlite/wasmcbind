#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface AudioParam
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam)
 */
DECLARE_EMLITE_TYPE(AudioParam, em_Val);

/**
 * @brief Gets the `value` property. 
*/
float AudioParam_value(const AudioParam *self);

/**
 * @brief Sets the `value` property. 
*/
void AudioParam_set_value(AudioParam* self, float value);

/**
 * @brief Gets the `automationRate` property. 
*/
AutomationRate AudioParam_automationRate(const AudioParam *self);

/**
 * @brief Sets the `automationRate` property. 
*/
void AudioParam_set_automationRate(AudioParam* self, AutomationRate * value);

/**
 * @brief Gets the `defaultValue` property. 
*/
float AudioParam_defaultValue(const AudioParam *self);

/**
 * @brief Gets the `minValue` property. 
*/
float AudioParam_minValue(const AudioParam *self);

/**
 * @brief Gets the `maxValue` property. 
*/
float AudioParam_maxValue(const AudioParam *self);

/**
 * @brief Calls the `setValueAtTime` method. 
*/
AudioParam AudioParam_setValueAtTime(AudioParam* self , float value, double startTime);

/**
 * @brief Calls the `linearRampToValueAtTime` method. 
*/
AudioParam AudioParam_linearRampToValueAtTime(AudioParam* self , float value, double endTime);

/**
 * @brief Calls the `exponentialRampToValueAtTime` method. 
*/
AudioParam AudioParam_exponentialRampToValueAtTime(AudioParam* self , float value, double endTime);

/**
 * @brief Calls the `setTargetAtTime` method. 
*/
AudioParam AudioParam_setTargetAtTime(AudioParam* self , float target, double startTime, float timeConstant);

/**
 * @brief Calls the `setValueCurveAtTime` method. 
*/
AudioParam AudioParam_setValueCurveAtTime(AudioParam* self , jb_Array * values, double startTime, double duration);

/**
 * @brief Calls the `cancelScheduledValues` method. 
*/
AudioParam AudioParam_cancelScheduledValues(AudioParam* self , double cancelTime);

/**
 * @brief Calls the `cancelAndHoldAtTime` method. 
*/
AudioParam AudioParam_cancelAndHoldAtTime(AudioParam* self , double cancelTime);

#ifdef __cplusplus
}
#endif
