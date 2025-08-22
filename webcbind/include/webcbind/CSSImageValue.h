#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSStyleValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSImageValue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSImageValue)
 */
DECLARE_EMLITE_TYPE(CSSImageValue, CSSStyleValue);

#ifdef __cplusplus
}
#endif
