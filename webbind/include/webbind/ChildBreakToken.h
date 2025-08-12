#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LayoutChild LayoutChild;


/**
 * @brief Interface ChildBreakToken
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ChildBreakToken)
 */
DECLARE_EMLITE_TYPE(ChildBreakToken, em_Val);

/**
 * @brief Gets the `breakType` property. 
*/
BreakType ChildBreakToken_breakType(const ChildBreakToken *self);

/**
 * @brief Gets the `child` property. 
*/
LayoutChild ChildBreakToken_child(const ChildBreakToken *self);

#ifdef __cplusplus
}
#endif
