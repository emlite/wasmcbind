#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface NetworkInformation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation)
 */
DECLARE_EMLITE_TYPE(NetworkInformation, EventTarget);

/**
 * @brief Gets the `type` property. 
*/
ConnectionType NetworkInformation_type(const NetworkInformation *self);

/**
 * @brief Gets the `effectiveType` property. 
*/
EffectiveConnectionType NetworkInformation_effectiveType(const NetworkInformation *self);

/**
 * @brief Gets the `downlinkMax` property. 
*/
jb_Any NetworkInformation_downlinkMax(const NetworkInformation *self);

/**
 * @brief Gets the `downlink` property. 
*/
jb_Any NetworkInformation_downlink(const NetworkInformation *self);

/**
 * @brief Gets the `rtt` property. 
*/
jb_Any NetworkInformation_rtt(const NetworkInformation *self);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any NetworkInformation_onchange(const NetworkInformation *self);

/**
 * @brief Sets the `onchange` property. 
*/
void NetworkInformation_set_onchange(NetworkInformation* self, jb_Any * value);

/**
 * @brief Gets the `saveData` property. 
*/
bool NetworkInformation_saveData(const NetworkInformation *self);

#ifdef __cplusplus
}
#endif
