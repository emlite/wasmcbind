#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface AudioSinkInfo
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioSinkInfo)
 */
DECLARE_EMLITE_TYPE(AudioSinkInfo, em_Val);

/**
 * @brief Gets the `type` property. 
*/
AudioSinkType AudioSinkInfo_type(const AudioSinkInfo *self);

#ifdef __cplusplus
}
#endif
