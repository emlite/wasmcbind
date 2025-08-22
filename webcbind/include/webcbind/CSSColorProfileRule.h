#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSColorProfileRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule)
 */
DECLARE_EMLITE_TYPE(CSSColorProfileRule, CSSRule);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSColorProfileRule_name(const CSSColorProfileRule *self);

/**
 * @brief Gets the `src` property. 
*/
jb_String CSSColorProfileRule_src(const CSSColorProfileRule *self);

/**
 * @brief Gets the `renderingIntent` property. 
*/
jb_String CSSColorProfileRule_renderingIntent(const CSSColorProfileRule *self);

/**
 * @brief Gets the `components` property. 
*/
jb_String CSSColorProfileRule_components(const CSSColorProfileRule *self);

#ifdef __cplusplus
}
#endif
