#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SanitizerConfig SanitizerConfig;


/**
 * @brief Interface Sanitizer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Sanitizer)
 */
DECLARE_EMLITE_TYPE(Sanitizer, em_Val);

/**
 * @brief Creates a new `Sanitizer` object. 
*/
Sanitizer Sanitizer_new0();

/**
 * @brief Creates a new `Sanitizer` object. 
*/
Sanitizer Sanitizer_new1(jb_Any * configuration);

/**
 * @brief Calls the `get` method. 
*/
SanitizerConfig Sanitizer_get(Sanitizer* self );

/**
 * @brief Calls the `allowElement` method. 
*/
jb_Undefined Sanitizer_allowElement(Sanitizer* self , jb_Any * element);

/**
 * @brief Calls the `removeElement` method. 
*/
jb_Undefined Sanitizer_removeElement(Sanitizer* self , jb_Any * element);

/**
 * @brief Calls the `replaceElementWithChildren` method. 
*/
jb_Undefined Sanitizer_replaceElementWithChildren(Sanitizer* self , jb_Any * element);

/**
 * @brief Calls the `allowAttribute` method. 
*/
jb_Undefined Sanitizer_allowAttribute(Sanitizer* self , jb_Any * attribute);

/**
 * @brief Calls the `removeAttribute` method. 
*/
jb_Undefined Sanitizer_removeAttribute(Sanitizer* self , jb_Any * attribute);

/**
 * @brief Calls the `setComments` method. 
*/
jb_Undefined Sanitizer_setComments(Sanitizer* self , bool allow);

/**
 * @brief Calls the `setDataAttributes` method. 
*/
jb_Undefined Sanitizer_setDataAttributes(Sanitizer* self , bool allow);

/**
 * @brief Calls the `removeUnsafe` method. 
*/
jb_Undefined Sanitizer_removeUnsafe(Sanitizer* self );

#ifdef __cplusplus
}
#endif
