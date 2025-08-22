#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebGLQuery WebGLQuery;


/**
 * @brief Interface EXT_disjoint_timer_query_webgl2
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query_webgl2)
 */
DECLARE_EMLITE_TYPE(EXT_disjoint_timer_query_webgl2, em_Val);

/**
 * @brief Calls the `queryCounterEXT` method. 
*/
jb_Undefined EXT_disjoint_timer_query_webgl2_queryCounterEXT(EXT_disjoint_timer_query_webgl2* self , WebGLQuery * query, jb_Any * target);

#ifdef __cplusplus
}
#endif
