#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XMLHttpRequestEventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XMLHttpRequestUpload
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestUpload)
 */
DECLARE_EMLITE_TYPE(XMLHttpRequestUpload, XMLHttpRequestEventTarget);

#ifdef __cplusplus
}
#endif
