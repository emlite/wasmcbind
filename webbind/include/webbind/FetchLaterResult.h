#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface FetchLaterResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FetchLaterResult)
 */
DECLARE_EMLITE_TYPE(FetchLaterResult, em_Val);

/**
 * @brief Gets the `activated` property. 
*/
bool FetchLaterResult_activated(const FetchLaterResult *self);

#ifdef __cplusplus
}
#endif
