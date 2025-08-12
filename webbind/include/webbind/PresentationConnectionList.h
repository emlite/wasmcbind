#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PresentationConnection PresentationConnection;


/**
 * @brief Interface PresentationConnectionList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionList)
 */
DECLARE_EMLITE_TYPE(PresentationConnectionList, EventTarget);

/**
 * @brief Gets the `connections` property. 
*/
jb_Array PresentationConnectionList_connections(const PresentationConnectionList *self);

/**
 * @brief Gets the `onconnectionavailable` property. 
*/
jb_Any PresentationConnectionList_onconnectionavailable(const PresentationConnectionList *self);

/**
 * @brief Sets the `onconnectionavailable` property. 
*/
void PresentationConnectionList_set_onconnectionavailable(PresentationConnectionList* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
