#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSGroupingRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSStartingStyleRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSStartingStyleRule)
 */
DECLARE_EMLITE_TYPE(CSSStartingStyleRule, CSSGroupingRule);

#ifdef __cplusplus
}
#endif
