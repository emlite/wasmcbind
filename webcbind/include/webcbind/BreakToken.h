#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ChildBreakToken ChildBreakToken;


/**
 * @brief Interface BreakToken
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BreakToken)
 */
DECLARE_EMLITE_TYPE(BreakToken, em_Val);

/**
 * @brief Gets the `childBreakTokens` property. 
*/
jb_Array BreakToken_childBreakTokens(const BreakToken *self);

/**
 * @brief Gets the `data` property. 
*/
jb_Any BreakToken_data(const BreakToken *self);

#ifdef __cplusplus
}
#endif
