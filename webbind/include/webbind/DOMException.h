#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface DOMException
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMException)
 */
DECLARE_EMLITE_TYPE(DOMException, em_Val);

/**
 * @brief Creates a new `DOMException` object. 
*/
DOMException DOMException_new0();

/**
 * @brief Creates a new `DOMException` object. 
*/
DOMException DOMException_new1(jb_String * message);

/**
 * @brief Creates a new `DOMException` object. 
*/
DOMException DOMException_new2(jb_String * message, jb_String * name);

/**
 * @brief Gets the `name` property. 
*/
jb_String DOMException_name(const DOMException *self);

/**
 * @brief Gets the `message` property. 
*/
jb_String DOMException_message(const DOMException *self);

/**
 * @brief Gets the `code` property. 
*/
unsigned short DOMException_code(const DOMException *self);

#ifdef __cplusplus
}
#endif
