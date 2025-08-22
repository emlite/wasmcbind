#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebGLVertexArrayObjectOES WebGLVertexArrayObjectOES;


/**
 * @brief Interface OES_vertex_array_object
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/OES_vertex_array_object)
 */
DECLARE_EMLITE_TYPE(OES_vertex_array_object, em_Val);

/**
 * @brief Calls the `createVertexArrayOES` method. 
*/
WebGLVertexArrayObjectOES OES_vertex_array_object_createVertexArrayOES(OES_vertex_array_object* self );

/**
 * @brief Calls the `deleteVertexArrayOES` method. 
*/
jb_Undefined OES_vertex_array_object_deleteVertexArrayOES(OES_vertex_array_object* self , WebGLVertexArrayObjectOES * arrayObject);

/**
 * @brief Calls the `isVertexArrayOES` method. 
*/
jb_Any OES_vertex_array_object_isVertexArrayOES(OES_vertex_array_object* self , WebGLVertexArrayObjectOES * arrayObject);

/**
 * @brief Calls the `bindVertexArrayOES` method. 
*/
jb_Undefined OES_vertex_array_object_bindVertexArrayOES(OES_vertex_array_object* self , WebGLVertexArrayObjectOES * arrayObject);

#ifdef __cplusplus
}
#endif
