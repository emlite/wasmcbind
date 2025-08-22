#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ExtendableCookieChangeEventInit ExtendableCookieChangeEventInit;
typedef struct CookieListItem CookieListItem;


/**
 * @brief Interface ExtendableCookieChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableCookieChangeEvent)
 */
DECLARE_EMLITE_TYPE(ExtendableCookieChangeEvent, ExtendableEvent);

/**
 * @brief Creates a new `ExtendableCookieChangeEvent` object. 
*/
ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new0(jb_String * type);

/**
 * @brief Creates a new `ExtendableCookieChangeEvent` object. 
*/
ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new1(jb_String * type, ExtendableCookieChangeEventInit * eventInitDict);

/**
 * @brief Gets the `changed` property. 
*/
jb_Array ExtendableCookieChangeEvent_changed(const ExtendableCookieChangeEvent *self);

/**
 * @brief Gets the `deleted` property. 
*/
jb_Array ExtendableCookieChangeEvent_deleted(const ExtendableCookieChangeEvent *self);

#ifdef __cplusplus
}
#endif
