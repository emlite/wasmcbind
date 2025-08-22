#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSConditionRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaList MediaList;


/**
 * @brief Interface CSSMediaRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSMediaRule)
 */
DECLARE_EMLITE_TYPE(CSSMediaRule, CSSConditionRule);

/**
 * @brief Gets the `media` property. 
*/
MediaList CSSMediaRule_media(const CSSMediaRule *self);

/**
 * @brief Gets the `matches` property. 
*/
bool CSSMediaRule_matches(const CSSMediaRule *self);

#ifdef __cplusplus
}
#endif
