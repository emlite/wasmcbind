#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WebGLUniformLocation WebGLUniformLocation;


typedef struct {
  em_Val inner;
} WebGLRenderingContext;


DECLARE_EMLITE_TYPE(WebGLRenderingContext, em_Val);

jb_Promise WebGLRenderingContext_makeXRCompatible(WebGLRenderingContext* self );

jb_Undefined WebGLRenderingContext_bufferData(WebGLRenderingContext* self , const jb_Any* target, const jb_Any* data, const jb_Any* usage);

jb_Undefined WebGLRenderingContext_bufferSubData(WebGLRenderingContext* self , const jb_Any* target, const jb_Any* offset, const jb_Any* data);

jb_Undefined WebGLRenderingContext_compressedTexImage2D(WebGLRenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* border, const jb_Any* data);

jb_Undefined WebGLRenderingContext_compressedTexSubImage2D(WebGLRenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* width, const jb_Any* height, const jb_Any* format, const jb_Any* data);

jb_Undefined WebGLRenderingContext_readPixels(WebGLRenderingContext* self , const jb_Any* x, const jb_Any* y, const jb_Any* width, const jb_Any* height, const jb_Any* format, const jb_Any* type, const jb_Any* pixels);

jb_Undefined WebGLRenderingContext_texImage2D(WebGLRenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* format, const jb_Any* type, const jb_Any* source);

jb_Undefined WebGLRenderingContext_texSubImage2D(WebGLRenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* format, const jb_Any* type, const jb_Any* source);

jb_Undefined WebGLRenderingContext_uniform1fv(WebGLRenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v);

jb_Undefined WebGLRenderingContext_uniform2fv(WebGLRenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v);

jb_Undefined WebGLRenderingContext_uniform3fv(WebGLRenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v);

jb_Undefined WebGLRenderingContext_uniform4fv(WebGLRenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v);

jb_Undefined WebGLRenderingContext_uniform1iv(WebGLRenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v);

jb_Undefined WebGLRenderingContext_uniform2iv(WebGLRenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v);

jb_Undefined WebGLRenderingContext_uniform3iv(WebGLRenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v);

jb_Undefined WebGLRenderingContext_uniform4iv(WebGLRenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v);

jb_Undefined WebGLRenderingContext_uniformMatrix2fv(WebGLRenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* value);

jb_Undefined WebGLRenderingContext_uniformMatrix3fv(WebGLRenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* value);

jb_Undefined WebGLRenderingContext_uniformMatrix4fv(WebGLRenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* value);
