#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WEBGL_multi_draw_instanced_base_vertex_base_instance
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw_instanced_base_vertex_base_instance)
 */
DECLARE_EMLITE_TYPE(WEBGL_multi_draw_instanced_base_vertex_base_instance, em_Val);

/**
 * @brief Calls the `multiDrawArraysInstancedBaseInstanceWEBGL` method. 
*/
jb_Undefined WEBGL_multi_draw_instanced_base_vertex_base_instance_multiDrawArraysInstancedBaseInstanceWEBGL(WEBGL_multi_draw_instanced_base_vertex_base_instance* self , jb_Any * mode, jb_Any * firstsList, long long firstsOffset, jb_Any * countsList, long long countsOffset, jb_Any * instanceCountsList, long long instanceCountsOffset, jb_Any * baseInstancesList, long long baseInstancesOffset, jb_Any * drawcount);

/**
 * @brief Calls the `multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL` method. 
*/
jb_Undefined WEBGL_multi_draw_instanced_base_vertex_base_instance_multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL(WEBGL_multi_draw_instanced_base_vertex_base_instance* self , jb_Any * mode, jb_Any * countsList, long long countsOffset, jb_Any * type, jb_Any * offsetsList, long long offsetsOffset, jb_Any * instanceCountsList, long long instanceCountsOffset, jb_Any * baseVerticesList, long long baseVerticesOffset, jb_Any * baseInstancesList, long long baseInstancesOffset, jb_Any * drawcount);

#ifdef __cplusplus
}
#endif
