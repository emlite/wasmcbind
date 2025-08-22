#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XRLayer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRLayer)
 */
DECLARE_EMLITE_TYPE(XRLayer, EventTarget);

#ifdef __cplusplus
}
#endif
