#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface History
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/History)
 */
DECLARE_EMLITE_TYPE(History, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long History_length(const History *self);

/**
 * @brief Gets the `scrollRestoration` property. 
*/
ScrollRestoration History_scrollRestoration(const History *self);

/**
 * @brief Sets the `scrollRestoration` property. 
*/
void History_set_scrollRestoration(History* self, ScrollRestoration * value);

/**
 * @brief Gets the `state` property. 
*/
jb_Any History_state(const History *self);

/**
 * @brief Calls the `go` method. 
*/
jb_Undefined History_go0(History* self );

/**
 * @brief Calls the `go` method. 
*/
jb_Undefined History_go1(History* self , long delta);

/**
 * @brief Calls the `back` method. 
*/
jb_Undefined History_back(History* self );

/**
 * @brief Calls the `forward` method. 
*/
jb_Undefined History_forward(History* self );

/**
 * @brief Calls the `pushState` method. 
*/
jb_Undefined History_pushState0(History* self , jb_Any * data, jb_String * unused);

/**
 * @brief Calls the `pushState` method. 
*/
jb_Undefined History_pushState1(History* self , jb_Any * data, jb_String * unused, jb_String * url);

/**
 * @brief Calls the `replaceState` method. 
*/
jb_Undefined History_replaceState0(History* self , jb_Any * data, jb_String * unused);

/**
 * @brief Calls the `replaceState` method. 
*/
jb_Undefined History_replaceState1(History* self , jb_Any * data, jb_String * unused, jb_String * url);

#ifdef __cplusplus
}
#endif
