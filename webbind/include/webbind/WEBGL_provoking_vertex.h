#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WEBGL_provoking_vertex
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_provoking_vertex)
 */
DECLARE_EMLITE_TYPE(WEBGL_provoking_vertex, em_Val);

/**
 * @brief Calls the `provokingVertexWEBGL` method. 
*/
jb_Undefined WEBGL_provoking_vertex_provokingVertexWEBGL(WEBGL_provoking_vertex* self , jb_Any * provokeMode);

#ifdef __cplusplus
}
#endif
