#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface MediaError
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaError)
 */
DECLARE_EMLITE_TYPE(MediaError, em_Val);

/**
 * @brief Gets the `code` property. 
*/
unsigned short MediaError_code(const MediaError *self);

/**
 * @brief Gets the `message` property. 
*/
jb_String MediaError_message(const MediaError *self);

#ifdef __cplusplus
}
#endif
