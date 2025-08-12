#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XRSpace
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRSpace)
 */
DECLARE_EMLITE_TYPE(XRSpace, EventTarget);

#ifdef __cplusplus
}
#endif
