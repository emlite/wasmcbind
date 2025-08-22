#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Touch Touch;


/**
 * @brief Interface TouchList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TouchList)
 */
DECLARE_EMLITE_TYPE(TouchList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long TouchList_length(const TouchList *self);

/**
 * @brief Calls the `item` method. 
*/
Touch TouchList_item(TouchList* self , unsigned long index);

#ifdef __cplusplus
}
#endif
