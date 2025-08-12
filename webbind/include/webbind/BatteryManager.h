#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface BatteryManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager)
 */
DECLARE_EMLITE_TYPE(BatteryManager, EventTarget);

/**
 * @brief Gets the `charging` property. 
*/
bool BatteryManager_charging(const BatteryManager *self);

/**
 * @brief Gets the `chargingTime` property. 
*/
double BatteryManager_chargingTime(const BatteryManager *self);

/**
 * @brief Gets the `dischargingTime` property. 
*/
double BatteryManager_dischargingTime(const BatteryManager *self);

/**
 * @brief Gets the `level` property. 
*/
double BatteryManager_level(const BatteryManager *self);

/**
 * @brief Gets the `onchargingchange` property. 
*/
jb_Any BatteryManager_onchargingchange(const BatteryManager *self);

/**
 * @brief Sets the `onchargingchange` property. 
*/
void BatteryManager_set_onchargingchange(BatteryManager* self, jb_Any * value);

/**
 * @brief Gets the `onchargingtimechange` property. 
*/
jb_Any BatteryManager_onchargingtimechange(const BatteryManager *self);

/**
 * @brief Sets the `onchargingtimechange` property. 
*/
void BatteryManager_set_onchargingtimechange(BatteryManager* self, jb_Any * value);

/**
 * @brief Gets the `ondischargingtimechange` property. 
*/
jb_Any BatteryManager_ondischargingtimechange(const BatteryManager *self);

/**
 * @brief Sets the `ondischargingtimechange` property. 
*/
void BatteryManager_set_ondischargingtimechange(BatteryManager* self, jb_Any * value);

/**
 * @brief Gets the `onlevelchange` property. 
*/
jb_Any BatteryManager_onlevelchange(const BatteryManager *self);

/**
 * @brief Sets the `onlevelchange` property. 
*/
void BatteryManager_set_onlevelchange(BatteryManager* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
