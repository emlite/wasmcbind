#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaList MediaList;
typedef struct CSSStyleSheet CSSStyleSheet;


/**
 * @brief Interface CSSImportRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSImportRule)
 */
DECLARE_EMLITE_TYPE(CSSImportRule, CSSRule);

/**
 * @brief Gets the `href` property. 
*/
jb_String CSSImportRule_href(const CSSImportRule *self);

/**
 * @brief Gets the `media` property. 
*/
MediaList CSSImportRule_media(const CSSImportRule *self);

/**
 * @brief Gets the `styleSheet` property. 
*/
CSSStyleSheet CSSImportRule_styleSheet(const CSSImportRule *self);

/**
 * @brief Gets the `layerName` property. 
*/
jb_String CSSImportRule_layerName(const CSSImportRule *self);

/**
 * @brief Gets the `supportsText` property. 
*/
jb_String CSSImportRule_supportsText(const CSSImportRule *self);

#ifdef __cplusplus
}
#endif
