#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ANGLE_instanced_arrays
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ANGLE_instanced_arrays)
 */
DECLARE_EMLITE_TYPE(ANGLE_instanced_arrays, em_Val);

/**
 * @brief Calls the `drawArraysInstancedANGLE` method. 
*/
jb_Undefined ANGLE_instanced_arrays_drawArraysInstancedANGLE(ANGLE_instanced_arrays* self , jb_Any * mode, jb_Any * first, jb_Any * count, jb_Any * primcount);

/**
 * @brief Calls the `drawElementsInstancedANGLE` method. 
*/
jb_Undefined ANGLE_instanced_arrays_drawElementsInstancedANGLE(ANGLE_instanced_arrays* self , jb_Any * mode, jb_Any * count, jb_Any * type, jb_Any * offset, jb_Any * primcount);

/**
 * @brief Calls the `vertexAttribDivisorANGLE` method. 
*/
jb_Undefined ANGLE_instanced_arrays_vertexAttribDivisorANGLE(ANGLE_instanced_arrays* self , jb_Any * index, jb_Any * divisor);

#ifdef __cplusplus
}
#endif
