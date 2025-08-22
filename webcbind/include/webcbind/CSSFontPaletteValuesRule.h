#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSFontPaletteValuesRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule)
 */
DECLARE_EMLITE_TYPE(CSSFontPaletteValuesRule, CSSRule);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSFontPaletteValuesRule_name(const CSSFontPaletteValuesRule *self);

/**
 * @brief Gets the `fontFamily` property. 
*/
jb_String CSSFontPaletteValuesRule_fontFamily(const CSSFontPaletteValuesRule *self);

/**
 * @brief Gets the `basePalette` property. 
*/
jb_String CSSFontPaletteValuesRule_basePalette(const CSSFontPaletteValuesRule *self);

/**
 * @brief Gets the `overrideColors` property. 
*/
jb_String CSSFontPaletteValuesRule_overrideColors(const CSSFontPaletteValuesRule *self);

#ifdef __cplusplus
}
#endif
