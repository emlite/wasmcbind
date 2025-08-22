#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSFontFeatureValuesMap CSSFontFeatureValuesMap;


/**
 * @brief Interface CSSFontFeatureValuesRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule)
 */
DECLARE_EMLITE_TYPE(CSSFontFeatureValuesRule, CSSRule);

/**
 * @brief Gets the `fontFamily` property. 
*/
jb_String CSSFontFeatureValuesRule_fontFamily(const CSSFontFeatureValuesRule *self);

/**
 * @brief Sets the `fontFamily` property. 
*/
void CSSFontFeatureValuesRule_set_fontFamily(CSSFontFeatureValuesRule* self, jb_String * value);

/**
 * @brief Gets the `annotation` property. 
*/
CSSFontFeatureValuesMap CSSFontFeatureValuesRule_annotation(const CSSFontFeatureValuesRule *self);

/**
 * @brief Gets the `ornaments` property. 
*/
CSSFontFeatureValuesMap CSSFontFeatureValuesRule_ornaments(const CSSFontFeatureValuesRule *self);

/**
 * @brief Gets the `stylistic` property. 
*/
CSSFontFeatureValuesMap CSSFontFeatureValuesRule_stylistic(const CSSFontFeatureValuesRule *self);

/**
 * @brief Gets the `swash` property. 
*/
CSSFontFeatureValuesMap CSSFontFeatureValuesRule_swash(const CSSFontFeatureValuesRule *self);

/**
 * @brief Gets the `characterVariant` property. 
*/
CSSFontFeatureValuesMap CSSFontFeatureValuesRule_characterVariant(const CSSFontFeatureValuesRule *self);

/**
 * @brief Gets the `styleset` property. 
*/
CSSFontFeatureValuesMap CSSFontFeatureValuesRule_styleset(const CSSFontFeatureValuesRule *self);

/**
 * @brief Gets the `historicalForms` property. 
*/
CSSFontFeatureValuesMap CSSFontFeatureValuesRule_historicalForms(const CSSFontFeatureValuesRule *self);

#ifdef __cplusplus
}
#endif
