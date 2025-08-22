#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Document Document;


/**
 * @brief Interface DOMParser
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMParser)
 */
DECLARE_EMLITE_TYPE(DOMParser, em_Val);

/**
 * @brief Creates a new `DOMParser` object. 
*/
DOMParser DOMParser_new();

/**
 * @brief Calls the `parseFromString` method. 
*/
Document DOMParser_parseFromString(DOMParser* self , jb_Any * string, DOMParserSupportedType * type);

#ifdef __cplusplus
}
#endif
