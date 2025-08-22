#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MediaDeviceInfo.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaTrackCapabilities MediaTrackCapabilities;


/**
 * @brief Interface InputDeviceInfo
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/InputDeviceInfo)
 */
DECLARE_EMLITE_TYPE(InputDeviceInfo, MediaDeviceInfo);

/**
 * @brief Calls the `getCapabilities` method. 
*/
MediaTrackCapabilities InputDeviceInfo_getCapabilities(InputDeviceInfo* self );

#ifdef __cplusplus
}
#endif
