#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface MLGraph
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MLGraph)
 */
DECLARE_EMLITE_TYPE(MLGraph, em_Val);

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined MLGraph_destroy(MLGraph* self );

#ifdef __cplusplus
}
#endif
