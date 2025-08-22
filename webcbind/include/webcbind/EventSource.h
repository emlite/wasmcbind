#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventSourceInit EventSourceInit;


/**
 * @brief Interface EventSource
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/EventSource)
 */
DECLARE_EMLITE_TYPE(EventSource, EventTarget);

/**
 * @brief Creates a new `EventSource` object. 
*/
EventSource EventSource_new0(jb_String * url);

/**
 * @brief Creates a new `EventSource` object. 
*/
EventSource EventSource_new1(jb_String * url, EventSourceInit * eventSourceInitDict);

/**
 * @brief Gets the `url` property. 
*/
jb_String EventSource_url(const EventSource *self);

/**
 * @brief Gets the `withCredentials` property. 
*/
bool EventSource_withCredentials(const EventSource *self);

/**
 * @brief Gets the `readyState` property. 
*/
unsigned short EventSource_readyState(const EventSource *self);

/**
 * @brief Gets the `onopen` property. 
*/
jb_Any EventSource_onopen(const EventSource *self);

/**
 * @brief Sets the `onopen` property. 
*/
void EventSource_set_onopen(EventSource* self, jb_Any * value);

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any EventSource_onmessage(const EventSource *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void EventSource_set_onmessage(EventSource* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any EventSource_onerror(const EventSource *self);

/**
 * @brief Sets the `onerror` property. 
*/
void EventSource_set_onerror(EventSource* self, jb_Any * value);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined EventSource_close(EventSource* self );

#ifdef __cplusplus
}
#endif
