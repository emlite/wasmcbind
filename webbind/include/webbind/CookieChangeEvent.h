#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CookieChangeEventInit CookieChangeEventInit;
typedef struct CookieListItem CookieListItem;


/**
 * @brief Interface CookieChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CookieChangeEvent)
 */
DECLARE_EMLITE_TYPE(CookieChangeEvent, Event);

/**
 * @brief Creates a new `CookieChangeEvent` object. 
*/
CookieChangeEvent CookieChangeEvent_new0(jb_String * type);

/**
 * @brief Creates a new `CookieChangeEvent` object. 
*/
CookieChangeEvent CookieChangeEvent_new1(jb_String * type, CookieChangeEventInit * eventInitDict);

/**
 * @brief Gets the `changed` property. 
*/
jb_Array CookieChangeEvent_changed(const CookieChangeEvent *self);

/**
 * @brief Gets the `deleted` property. 
*/
jb_Array CookieChangeEvent_deleted(const CookieChangeEvent *self);

#ifdef __cplusplus
}
#endif
