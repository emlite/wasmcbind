#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StructuredSerializeOptions StructuredSerializeOptions;


/**
 * @brief Interface Client
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Client)
 */
DECLARE_EMLITE_TYPE(Client, em_Val);

/**
 * @brief Gets the `url` property. 
*/
jb_String Client_url(const Client *self);

/**
 * @brief Gets the `frameType` property. 
*/
FrameType Client_frameType(const Client *self);

/**
 * @brief Gets the `id` property. 
*/
jb_String Client_id(const Client *self);

/**
 * @brief Gets the `type` property. 
*/
ClientType Client_type(const Client *self);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined Client_postMessage0(Client* self , jb_Any * message);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined Client_postMessage1(Client* self , jb_Any * message, StructuredSerializeOptions * options);

/**
 * @brief Gets the `lifecycleState` property. 
*/
ClientLifecycleState Client_lifecycleState(const Client *self);

#ifdef __cplusplus
}
#endif
