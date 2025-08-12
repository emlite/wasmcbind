#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebGLTimerQueryEXT WebGLTimerQueryEXT;


/**
 * @brief Interface EXT_disjoint_timer_query
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/EXT_disjoint_timer_query)
 */
DECLARE_EMLITE_TYPE(EXT_disjoint_timer_query, em_Val);

/**
 * @brief Calls the `createQueryEXT` method. 
*/
WebGLTimerQueryEXT EXT_disjoint_timer_query_createQueryEXT(EXT_disjoint_timer_query* self );

/**
 * @brief Calls the `deleteQueryEXT` method. 
*/
jb_Undefined EXT_disjoint_timer_query_deleteQueryEXT(EXT_disjoint_timer_query* self , WebGLTimerQueryEXT * query);

/**
 * @brief Calls the `isQueryEXT` method. 
*/
bool EXT_disjoint_timer_query_isQueryEXT(EXT_disjoint_timer_query* self , WebGLTimerQueryEXT * query);

/**
 * @brief Calls the `beginQueryEXT` method. 
*/
jb_Undefined EXT_disjoint_timer_query_beginQueryEXT(EXT_disjoint_timer_query* self , jb_Any * target, WebGLTimerQueryEXT * query);

/**
 * @brief Calls the `endQueryEXT` method. 
*/
jb_Undefined EXT_disjoint_timer_query_endQueryEXT(EXT_disjoint_timer_query* self , jb_Any * target);

/**
 * @brief Calls the `queryCounterEXT` method. 
*/
jb_Undefined EXT_disjoint_timer_query_queryCounterEXT(EXT_disjoint_timer_query* self , WebGLTimerQueryEXT * query, jb_Any * target);

/**
 * @brief Calls the `getQueryEXT` method. 
*/
jb_Any EXT_disjoint_timer_query_getQueryEXT(EXT_disjoint_timer_query* self , jb_Any * target, jb_Any * pname);

/**
 * @brief Calls the `getQueryObjectEXT` method. 
*/
jb_Any EXT_disjoint_timer_query_getQueryObjectEXT(EXT_disjoint_timer_query* self , WebGLTimerQueryEXT * query, jb_Any * pname);

#ifdef __cplusplus
}
#endif
