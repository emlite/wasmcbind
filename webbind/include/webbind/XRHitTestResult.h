#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRPose XRPose;
typedef struct XRSpace XRSpace;
typedef struct XRAnchor XRAnchor;


/**
 * @brief Interface XRHitTestResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRHitTestResult)
 */
DECLARE_EMLITE_TYPE(XRHitTestResult, em_Val);

/**
 * @brief Calls the `getPose` method. 
*/
XRPose XRHitTestResult_getPose(XRHitTestResult* self , XRSpace * baseSpace);

/**
 * @brief Calls the `createAnchor` method. 
*/
jb_Promise XRHitTestResult_createAnchor(XRHitTestResult* self );

#ifdef __cplusplus
}
#endif
