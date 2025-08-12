#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLElement HTMLElement;


/**
 * @brief Interface CaptureController
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController)
 */
DECLARE_EMLITE_TYPE(CaptureController, EventTarget);

/**
 * @brief Creates a new `CaptureController` object. 
*/
CaptureController CaptureController_new();

/**
 * @brief Calls the `setFocusBehavior` method. 
*/
jb_Undefined CaptureController_setFocusBehavior(CaptureController* self , CaptureStartFocusBehavior * focusBehavior);

/**
 * @brief Gets the `oncapturedmousechange` property. 
*/
jb_Any CaptureController_oncapturedmousechange(const CaptureController *self);

/**
 * @brief Sets the `oncapturedmousechange` property. 
*/
void CaptureController_set_oncapturedmousechange(CaptureController* self, jb_Any * value);

/**
 * @brief Calls the `getSupportedZoomLevels` method. 
*/
jb_Array CaptureController_getSupportedZoomLevels(CaptureController* self );

/**
 * @brief Gets the `zoomLevel` property. 
*/
long CaptureController_zoomLevel(const CaptureController *self);

/**
 * @brief Calls the `increaseZoomLevel` method. 
*/
jb_Promise CaptureController_increaseZoomLevel(CaptureController* self );

/**
 * @brief Calls the `decreaseZoomLevel` method. 
*/
jb_Promise CaptureController_decreaseZoomLevel(CaptureController* self );

/**
 * @brief Calls the `resetZoomLevel` method. 
*/
jb_Promise CaptureController_resetZoomLevel(CaptureController* self );

/**
 * @brief Gets the `onzoomlevelchange` property. 
*/
jb_Any CaptureController_onzoomlevelchange(const CaptureController *self);

/**
 * @brief Sets the `onzoomlevelchange` property. 
*/
void CaptureController_set_onzoomlevelchange(CaptureController* self, jb_Any * value);

/**
 * @brief Calls the `forwardWheel` method. 
*/
jb_Promise CaptureController_forwardWheel(CaptureController* self , HTMLElement * element);

#ifdef __cplusplus
}
#endif
