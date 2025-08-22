#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MimeType MimeType;


/**
 * @brief Interface MimeTypeArray
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MimeTypeArray)
 */
DECLARE_EMLITE_TYPE(MimeTypeArray, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long MimeTypeArray_length(const MimeTypeArray *self);

/**
 * @brief Calls the `item` method. 
*/
MimeType MimeTypeArray_item(MimeTypeArray* self , unsigned long index);

/**
 * @brief Calls the `namedItem` method. 
*/
MimeType MimeTypeArray_namedItem(MimeTypeArray* self , jb_String * name);

#ifdef __cplusplus
}
#endif
