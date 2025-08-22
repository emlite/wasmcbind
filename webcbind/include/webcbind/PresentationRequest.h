#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PresentationConnection PresentationConnection;
typedef struct PresentationAvailability PresentationAvailability;


/**
 * @brief Interface PresentationRequest
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PresentationRequest)
 */
DECLARE_EMLITE_TYPE(PresentationRequest, EventTarget);

/**
 * @brief Creates a new `PresentationRequest` object. 
*/
PresentationRequest PresentationRequest_new(jb_Array * urls);

/**
 * @brief Calls the `start` method. 
*/
jb_Promise PresentationRequest_start(PresentationRequest* self );

/**
 * @brief Calls the `reconnect` method. 
*/
jb_Promise PresentationRequest_reconnect(PresentationRequest* self , jb_String * presentationId);

/**
 * @brief Calls the `getAvailability` method. 
*/
jb_Promise PresentationRequest_getAvailability(PresentationRequest* self );

/**
 * @brief Gets the `onconnectionavailable` property. 
*/
jb_Any PresentationRequest_onconnectionavailable(const PresentationRequest *self);

/**
 * @brief Sets the `onconnectionavailable` property. 
*/
void PresentationRequest_set_onconnectionavailable(PresentationRequest* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
