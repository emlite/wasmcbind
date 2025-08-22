#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Client.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WindowClient
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WindowClient)
 */
DECLARE_EMLITE_TYPE(WindowClient, Client);

/**
 * @brief Gets the `visibilityState` property. 
*/
DocumentVisibilityState WindowClient_visibilityState(const WindowClient *self);

/**
 * @brief Gets the `focused` property. 
*/
bool WindowClient_focused(const WindowClient *self);

/**
 * @brief Gets the `ancestorOrigins` property. 
*/
jb_Array WindowClient_ancestorOrigins(const WindowClient *self);

/**
 * @brief Calls the `focus` method. 
*/
jb_Promise WindowClient_focus(WindowClient* self );

/**
 * @brief Calls the `navigate` method. 
*/
jb_Promise WindowClient_navigate(WindowClient* self , jb_String * url);

#ifdef __cplusplus
}
#endif
