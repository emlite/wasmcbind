#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PresentationConnection
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection)
 */
DECLARE_EMLITE_TYPE(PresentationConnection, EventTarget);

/**
 * @brief Gets the `id` property. 
*/
jb_String PresentationConnection_id(const PresentationConnection *self);

/**
 * @brief Gets the `url` property. 
*/
jb_String PresentationConnection_url(const PresentationConnection *self);

/**
 * @brief Gets the `state` property. 
*/
PresentationConnectionState PresentationConnection_state(const PresentationConnection *self);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined PresentationConnection_close(PresentationConnection* self );

/**
 * @brief Calls the `terminate` method. 
*/
jb_Undefined PresentationConnection_terminate(PresentationConnection* self );

/**
 * @brief Gets the `onconnect` property. 
*/
jb_Any PresentationConnection_onconnect(const PresentationConnection *self);

/**
 * @brief Sets the `onconnect` property. 
*/
void PresentationConnection_set_onconnect(PresentationConnection* self, jb_Any * value);

/**
 * @brief Gets the `onclose` property. 
*/
jb_Any PresentationConnection_onclose(const PresentationConnection *self);

/**
 * @brief Sets the `onclose` property. 
*/
void PresentationConnection_set_onclose(PresentationConnection* self, jb_Any * value);

/**
 * @brief Gets the `onterminate` property. 
*/
jb_Any PresentationConnection_onterminate(const PresentationConnection *self);

/**
 * @brief Sets the `onterminate` property. 
*/
void PresentationConnection_set_onterminate(PresentationConnection* self, jb_Any * value);

/**
 * @brief Gets the `binaryType` property. 
*/
BinaryType PresentationConnection_binaryType(const PresentationConnection *self);

/**
 * @brief Sets the `binaryType` property. 
*/
void PresentationConnection_set_binaryType(PresentationConnection* self, BinaryType * value);

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any PresentationConnection_onmessage(const PresentationConnection *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void PresentationConnection_set_onmessage(PresentationConnection* self, jb_Any * value);

/**
 * @brief Calls the `send` method. 
*/
jb_Undefined PresentationConnection_send(PresentationConnection* self , jb_Any * data);

#ifdef __cplusplus
}
#endif
