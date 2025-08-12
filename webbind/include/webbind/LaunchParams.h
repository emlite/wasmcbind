#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FileSystemHandle FileSystemHandle;


/**
 * @brief Interface LaunchParams
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LaunchParams)
 */
DECLARE_EMLITE_TYPE(LaunchParams, em_Val);

/**
 * @brief Gets the `targetURL` property. 
*/
jb_String LaunchParams_targetURL(const LaunchParams *self);

/**
 * @brief Gets the `files` property. 
*/
jb_Array LaunchParams_files(const LaunchParams *self);

#ifdef __cplusplus
}
#endif
