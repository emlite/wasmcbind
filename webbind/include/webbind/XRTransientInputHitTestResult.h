#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRInputSource XRInputSource;
typedef struct XRHitTestResult XRHitTestResult;


/**
 * @brief Interface XRTransientInputHitTestResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestResult)
 */
DECLARE_EMLITE_TYPE(XRTransientInputHitTestResult, em_Val);

/**
 * @brief Gets the `inputSource` property. 
*/
XRInputSource XRTransientInputHitTestResult_inputSource(const XRTransientInputHitTestResult *self);

/**
 * @brief Gets the `results` property. 
*/
jb_Array XRTransientInputHitTestResult_results(const XRTransientInputHitTestResult *self);

#ifdef __cplusplus
}
#endif
