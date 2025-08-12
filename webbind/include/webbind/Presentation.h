#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PresentationRequest PresentationRequest;
typedef struct PresentationReceiver PresentationReceiver;


/**
 * @brief Interface Presentation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Presentation)
 */
DECLARE_EMLITE_TYPE(Presentation, em_Val);

/**
 * @brief Gets the `defaultRequest` property. 
*/
PresentationRequest Presentation_defaultRequest(const Presentation *self);

/**
 * @brief Sets the `defaultRequest` property. 
*/
void Presentation_set_defaultRequest(Presentation* self, PresentationRequest * value);

/**
 * @brief Gets the `receiver` property. 
*/
PresentationReceiver Presentation_receiver(const Presentation *self);

#ifdef __cplusplus
}
#endif
