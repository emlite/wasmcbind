#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface MediaDeviceInfo
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo)
 */
DECLARE_EMLITE_TYPE(MediaDeviceInfo, em_Val);

/**
 * @brief Gets the `deviceId` property. 
*/
jb_String MediaDeviceInfo_deviceId(const MediaDeviceInfo *self);

/**
 * @brief Gets the `kind` property. 
*/
MediaDeviceKind MediaDeviceInfo_kind(const MediaDeviceInfo *self);

/**
 * @brief Gets the `label` property. 
*/
jb_String MediaDeviceInfo_label(const MediaDeviceInfo *self);

/**
 * @brief Gets the `groupId` property. 
*/
jb_String MediaDeviceInfo_groupId(const MediaDeviceInfo *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object MediaDeviceInfo_toJSON(MediaDeviceInfo* self );

#ifdef __cplusplus
}
#endif
