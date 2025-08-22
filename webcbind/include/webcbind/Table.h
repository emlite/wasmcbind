#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TableDescriptor TableDescriptor;


/**
 * @brief Interface Table
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Table)
 */
DECLARE_EMLITE_TYPE(Table, em_Val);

/**
 * @brief Creates a new `Table` object. 
*/
Table Table_new0(TableDescriptor * descriptor);

/**
 * @brief Creates a new `Table` object. 
*/
Table Table_new1(TableDescriptor * descriptor, jb_Any * value);

/**
 * @brief Calls the `grow` method. 
*/
unsigned long Table_grow0(Table* self , unsigned long delta);

/**
 * @brief Calls the `grow` method. 
*/
unsigned long Table_grow1(Table* self , unsigned long delta, jb_Any * value);

/**
 * @brief Calls the `get` method. 
*/
jb_Any Table_get(Table* self , unsigned long index);

/**
 * @brief Calls the `set` method. 
*/
jb_Undefined Table_set0(Table* self , unsigned long index);

/**
 * @brief Calls the `set` method. 
*/
jb_Undefined Table_set1(Table* self , unsigned long index, jb_Any * value);

/**
 * @brief Gets the `length` property. 
*/
unsigned long Table_length(const Table *self);

#ifdef __cplusplus
}
#endif
