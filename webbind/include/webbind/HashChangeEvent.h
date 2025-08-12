#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HashChangeEventInit HashChangeEventInit;


/**
 * @brief Interface HashChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HashChangeEvent)
 */
DECLARE_EMLITE_TYPE(HashChangeEvent, Event);

/**
 * @brief Creates a new `HashChangeEvent` object. 
*/
HashChangeEvent HashChangeEvent_new0(jb_String * type);

/**
 * @brief Creates a new `HashChangeEvent` object. 
*/
HashChangeEvent HashChangeEvent_new1(jb_String * type, HashChangeEventInit * eventInitDict);

/**
 * @brief Gets the `oldURL` property. 
*/
jb_String HashChangeEvent_oldURL(const HashChangeEvent *self);

/**
 * @brief Gets the `newURL` property. 
*/
jb_String HashChangeEvent_newURL(const HashChangeEvent *self);

#ifdef __cplusplus
}
#endif
