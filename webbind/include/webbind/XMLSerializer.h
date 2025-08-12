#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;


/**
 * @brief Interface XMLSerializer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XMLSerializer)
 */
DECLARE_EMLITE_TYPE(XMLSerializer, em_Val);

/**
 * @brief Creates a new `XMLSerializer` object. 
*/
XMLSerializer XMLSerializer_new();

/**
 * @brief Calls the `serializeToString` method. 
*/
jb_String XMLSerializer_serializeToString(XMLSerializer* self , Node * root);

#ifdef __cplusplus
}
#endif
