#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PresentationAvailability
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PresentationAvailability)
 */
DECLARE_EMLITE_TYPE(PresentationAvailability, EventTarget);

/**
 * @brief Gets the `value` property. 
*/
bool PresentationAvailability_value(const PresentationAvailability *self);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any PresentationAvailability_onchange(const PresentationAvailability *self);

/**
 * @brief Sets the `onchange` property. 
*/
void PresentationAvailability_set_onchange(PresentationAvailability* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
