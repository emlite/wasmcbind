#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "NodeList.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface RadioNodeList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RadioNodeList)
 */
DECLARE_EMLITE_TYPE(RadioNodeList, NodeList);

/**
 * @brief Gets the `value` property. 
*/
jb_String RadioNodeList_value(const RadioNodeList *self);

/**
 * @brief Sets the `value` property. 
*/
void RadioNodeList_set_value(RadioNodeList* self, jb_String * value);

#ifdef __cplusplus
}
#endif
