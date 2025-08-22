#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ErrorEventInit ErrorEventInit;


/**
 * @brief Interface ErrorEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ErrorEvent)
 */
DECLARE_EMLITE_TYPE(ErrorEvent, Event);

/**
 * @brief Creates a new `ErrorEvent` object. 
*/
ErrorEvent ErrorEvent_new0(jb_String * type);

/**
 * @brief Creates a new `ErrorEvent` object. 
*/
ErrorEvent ErrorEvent_new1(jb_String * type, ErrorEventInit * eventInitDict);

/**
 * @brief Gets the `message` property. 
*/
jb_String ErrorEvent_message(const ErrorEvent *self);

/**
 * @brief Gets the `filename` property. 
*/
jb_String ErrorEvent_filename(const ErrorEvent *self);

/**
 * @brief Gets the `lineno` property. 
*/
unsigned long ErrorEvent_lineno(const ErrorEvent *self);

/**
 * @brief Gets the `colno` property. 
*/
unsigned long ErrorEvent_colno(const ErrorEvent *self);

/**
 * @brief Gets the `error` property. 
*/
jb_Any ErrorEvent_error(const ErrorEvent *self);

#ifdef __cplusplus
}
#endif
