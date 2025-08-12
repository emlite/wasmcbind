#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSFontFaceDescriptors CSSFontFaceDescriptors;


/**
 * @brief Interface CSSFontFaceRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceRule)
 */
DECLARE_EMLITE_TYPE(CSSFontFaceRule, CSSRule);

/**
 * @brief Gets the `style` property. 
*/
CSSFontFaceDescriptors CSSFontFaceRule_style(const CSSFontFaceRule *self);

#ifdef __cplusplus
}
#endif
