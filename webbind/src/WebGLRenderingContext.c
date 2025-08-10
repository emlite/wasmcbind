#include <webbind/WebGLRenderingContext.h>

#include <webbind/WebGLUniformLocation.h>

DEFINE_EMLITE_TYPE(WebGLRenderingContext, em_Val);


jb_Promise WebGLRenderingContext_makeXRCompatible(WebGLRenderingContext* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "makeXRCompatible"));
}


jb_Undefined WebGLRenderingContext_bufferData(WebGLRenderingContext* self , jb_Any * target, jb_Any * data, jb_Any * usage) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bufferData", em_Val_from(target), em_Val_from(data), em_Val_from(usage)));
}


jb_Undefined WebGLRenderingContext_bufferSubData(WebGLRenderingContext* self , jb_Any * target, jb_Any * offset, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bufferSubData", em_Val_from(target), em_Val_from(offset), em_Val_from(data)));
}


jb_Undefined WebGLRenderingContext_compressedTexImage2D(WebGLRenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * border, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(border), em_Val_from(data)));
}


jb_Undefined WebGLRenderingContext_compressedTexSubImage2D(WebGLRenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(width), em_Val_from(height), em_Val_from(format), em_Val_from(data)));
}


jb_Undefined WebGLRenderingContext_readPixels(WebGLRenderingContext* self , jb_Any * x, jb_Any * y, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * type, jb_Any * pixels) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "readPixels", em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height), em_Val_from(format), em_Val_from(type), em_Val_from(pixels)));
}


jb_Undefined WebGLRenderingContext_texImage2D(WebGLRenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * format, jb_Any * type, jb_Any * source) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(format), em_Val_from(type), em_Val_from(source)));
}


jb_Undefined WebGLRenderingContext_texSubImage2D(WebGLRenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * format, jb_Any * type, jb_Any * source) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texSubImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(format), em_Val_from(type), em_Val_from(source)));
}


jb_Undefined WebGLRenderingContext_uniform1fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1fv", em_Val_from(location), em_Val_from(v)));
}


jb_Undefined WebGLRenderingContext_uniform2fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2fv", em_Val_from(location), em_Val_from(v)));
}


jb_Undefined WebGLRenderingContext_uniform3fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3fv", em_Val_from(location), em_Val_from(v)));
}


jb_Undefined WebGLRenderingContext_uniform4fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4fv", em_Val_from(location), em_Val_from(v)));
}


jb_Undefined WebGLRenderingContext_uniform1iv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1iv", em_Val_from(location), em_Val_from(v)));
}


jb_Undefined WebGLRenderingContext_uniform2iv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2iv", em_Val_from(location), em_Val_from(v)));
}


jb_Undefined WebGLRenderingContext_uniform3iv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3iv", em_Val_from(location), em_Val_from(v)));
}


jb_Undefined WebGLRenderingContext_uniform4iv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * v) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4iv", em_Val_from(location), em_Val_from(v)));
}


jb_Undefined WebGLRenderingContext_uniformMatrix2fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(value)));
}


jb_Undefined WebGLRenderingContext_uniformMatrix3fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(value)));
}


jb_Undefined WebGLRenderingContext_uniformMatrix4fv(WebGLRenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(value)));
}

