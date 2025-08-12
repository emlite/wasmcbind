#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSFontFeatureValuesMap
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesMap)
 */
DECLARE_EMLITE_TYPE(CSSFontFeatureValuesMap, em_Val);

/**
 * @brief Calls the `set` method. 
*/
jb_Undefined CSSFontFeatureValuesMap_set(CSSFontFeatureValuesMap* self , jb_String * featureValueName, jb_Any * values);

#ifdef __cplusplus
}
#endif
