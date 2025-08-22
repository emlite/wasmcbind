#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebGLUniformLocation WebGLUniformLocation;


/**
 * @brief Interface WebGLRenderingContext
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext)
 */
DECLARE_EMLITE_TYPE(WebGLRenderingContext, em_Val);

/**
 * @brief Calls the `makeXRCompatible` method. 
*/
jb_Promise WebGLRenderingContext_makeXRCompatible(WebGLRenderingContext* self );

/**
 * @brief Calls the `bufferData` method. 
*/
jb_Undefined WebGLRenderingContext_bufferData(WebGLRenderingContext* self , jb_Any * target, jb_Any * data, jb_Any * usage);

/**
 * @brief Calls the `bufferSubData` method. 
*/
jb_Undefined WebGLRenderingContext_bufferSubData(WebGLRenderingContext* self , jb_Any * target, jb_Any * offset, jb_Any * data);

/**
 * @brief Calls the `compressedTexImage2D` method. 
*/
jb_Undefined WebGLRenderingContext_compressedTexImage2D(WebGLRenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * border, jb_Any * data);

/**
 * @brief Calls the `compressedTexSubImage2D` method. 
*/
jb_Undefined WebGLRenderingContext_compressedTexSubImage2D(WebGLRenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * data);

/**
 * @brief Calls the `readPixels` method. 
*/
jb_Undefined WebGLRenderingContext_readPixels(WebGLRenderingContext* self , jb_Any * x, jb_Any * y, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * type, jb_Any * pixels);

/**
 * @brief Calls the `texImage2D` method. 
*/
jb_Undefined WebGLRenderingContext_texImage2D(WebGLRenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * format, jb_Any * type, jb_Any * source);

/**
 * @brief Calls the `texSubImage2D` method. 
*/
jb_Undefined WebGLRenderingContext_texSubImage2D(WebGLRenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * format, jb_Any * type, jb_Any * source);

/**
 * @brief Calls the `uniform1fv` method. 
*/
jb_Undefined WebGLRenderingContext_uniform1fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

/**
 * @brief Calls the `uniform2fv` method. 
*/
jb_Undefined WebGLRenderingContext_uniform2fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

/**
 * @brief Calls the `uniform3fv` method. 
*/
jb_Undefined WebGLRenderingContext_uniform3fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

/**
 * @brief Calls the `uniform4fv` method. 
*/
jb_Undefined WebGLRenderingContext_uniform4fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

/**
 * @brief Calls the `uniform1iv` method. 
*/
jb_Undefined WebGLRenderingContext_uniform1iv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

/**
 * @brief Calls the `uniform2iv` method. 
*/
jb_Undefined WebGLRenderingContext_uniform2iv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

/**
 * @brief Calls the `uniform3iv` method. 
*/
jb_Undefined WebGLRenderingContext_uniform3iv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

/**
 * @brief Calls the `uniform4iv` method. 
*/
jb_Undefined WebGLRenderingContext_uniform4iv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v);

/**
 * @brief Calls the `uniformMatrix2fv` method. 
*/
jb_Undefined WebGLRenderingContext_uniformMatrix2fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * value);

/**
 * @brief Calls the `uniformMatrix3fv` method. 
*/
jb_Undefined WebGLRenderingContext_uniformMatrix3fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * value);

/**
 * @brief Calls the `uniformMatrix4fv` method. 
*/
jb_Undefined WebGLRenderingContext_uniformMatrix4fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * value);

#ifdef __cplusplus
}
#endif
