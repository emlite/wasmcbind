#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Namespace TestUtils
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TestUtils)
 */

/**
 * @brief Calls the \`gc\` method. 
*/
jb_Promise TestUtils_gc();

#ifdef __cplusplus
}
#endif
