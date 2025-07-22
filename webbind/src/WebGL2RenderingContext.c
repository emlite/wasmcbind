#include <webbind/WebGL2RenderingContext.h>
#include <webbind/WebGLTexture.h>
#include <webbind/WebGLProgram.h>
#include <webbind/WebGLUniformLocation.h>
#include <webbind/WebGLQuery.h>
#include <webbind/WebGLSampler.h>
#include <webbind/WebGLSync.h>
#include <webbind/WebGLTransformFeedback.h>
#include <webbind/WebGLActiveInfo.h>
#include <webbind/WebGLBuffer.h>
#include <webbind/WebGLVertexArrayObject.h>


DEFINE_EMLITE_TYPE(WebGL2RenderingContext, em_Val);


jb_Promise WebGL2RenderingContext_makeXRCompatible(WebGL2RenderingContext* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "makeXRCompatible"));
}


jb_Undefined WebGL2RenderingContext_copyBufferSubData(WebGL2RenderingContext* self , const jb_Any* readTarget, const jb_Any* writeTarget, const jb_Any* readOffset, const jb_Any* writeOffset, const jb_Any* size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyBufferSubData", em_Val_from(readTarget), em_Val_from(writeTarget), em_Val_from(readOffset), em_Val_from(writeOffset), em_Val_from(size)));
}


jb_Undefined WebGL2RenderingContext_getBufferSubData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* srcByteOffset, const jb_Any* dstBuffer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getBufferSubData", em_Val_from(target), em_Val_from(srcByteOffset), em_Val_from(dstBuffer)));
}


jb_Undefined WebGL2RenderingContext_getBufferSubData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* srcByteOffset, const jb_Any* dstBuffer, long long dstOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getBufferSubData", em_Val_from(target), em_Val_from(srcByteOffset), em_Val_from(dstBuffer), em_Val_from(dstOffset)));
}


jb_Undefined WebGL2RenderingContext_getBufferSubData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* srcByteOffset, const jb_Any* dstBuffer, long long dstOffset, const jb_Any* length) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getBufferSubData", em_Val_from(target), em_Val_from(srcByteOffset), em_Val_from(dstBuffer), em_Val_from(dstOffset), em_Val_from(length)));
}


jb_Undefined WebGL2RenderingContext_blitFramebuffer(WebGL2RenderingContext* self , const jb_Any* srcX0, const jb_Any* srcY0, const jb_Any* srcX1, const jb_Any* srcY1, const jb_Any* dstX0, const jb_Any* dstY0, const jb_Any* dstX1, const jb_Any* dstY1, const jb_Any* mask, const jb_Any* filter) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "blitFramebuffer", em_Val_from(srcX0), em_Val_from(srcY0), em_Val_from(srcX1), em_Val_from(srcY1), em_Val_from(dstX0), em_Val_from(dstY0), em_Val_from(dstX1), em_Val_from(dstY1), em_Val_from(mask), em_Val_from(filter)));
}


jb_Undefined WebGL2RenderingContext_framebufferTextureLayer(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* attachment, const WebGLTexture* texture, const jb_Any* level, const jb_Any* layer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "framebufferTextureLayer", em_Val_from(target), em_Val_from(attachment), em_Val_from(texture), em_Val_from(level), em_Val_from(layer)));
}


jb_Undefined WebGL2RenderingContext_invalidateFramebuffer(WebGL2RenderingContext* self , const jb_Any* target, const jb_Sequence* attachments) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "invalidateFramebuffer", em_Val_from(target), em_Val_from(attachments)));
}


jb_Undefined WebGL2RenderingContext_invalidateSubFramebuffer(WebGL2RenderingContext* self , const jb_Any* target, const jb_Sequence* attachments, const jb_Any* x, const jb_Any* y, const jb_Any* width, const jb_Any* height) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "invalidateSubFramebuffer", em_Val_from(target), em_Val_from(attachments), em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height)));
}


jb_Undefined WebGL2RenderingContext_readBuffer(WebGL2RenderingContext* self , const jb_Any* src) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "readBuffer", em_Val_from(src)));
}


jb_Any WebGL2RenderingContext_getInternalformatParameter(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* internalformat, const jb_Any* pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getInternalformatParameter", em_Val_from(target), em_Val_from(internalformat), em_Val_from(pname)));
}


jb_Undefined WebGL2RenderingContext_renderbufferStorageMultisample(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* samples, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "renderbufferStorageMultisample", em_Val_from(target), em_Val_from(samples), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height)));
}


jb_Undefined WebGL2RenderingContext_texStorage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* levels, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texStorage2D", em_Val_from(target), em_Val_from(levels), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height)));
}


jb_Undefined WebGL2RenderingContext_texStorage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* levels, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* depth) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texStorage3D", em_Val_from(target), em_Val_from(levels), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(depth)));
}


jb_Undefined WebGL2RenderingContext_texImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* border, const jb_Any* format, const jb_Any* type, const jb_Any* srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(border), em_Val_from(format), em_Val_from(type), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_texSubImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* zoffset, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* format, const jb_Any* type, const jb_Any* srcData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texSubImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(zoffset), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(format), em_Val_from(type), em_Val_from(srcData)));
}


jb_Undefined WebGL2RenderingContext_texSubImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* zoffset, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* format, const jb_Any* type, const jb_Any* srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texSubImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(zoffset), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(format), em_Val_from(type), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_copyTexSubImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* zoffset, const jb_Any* x, const jb_Any* y, const jb_Any* width, const jb_Any* height) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyTexSubImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(zoffset), em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height)));
}


jb_Undefined WebGL2RenderingContext_compressedTexImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* border, const jb_Any* srcData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(border), em_Val_from(srcData)));
}


jb_Undefined WebGL2RenderingContext_compressedTexImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* border, const jb_Any* srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(border), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_compressedTexImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* border, const jb_Any* srcData, long long srcOffset, const jb_Any* srcLengthOverride) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(border), em_Val_from(srcData), em_Val_from(srcOffset), em_Val_from(srcLengthOverride)));
}


jb_Undefined WebGL2RenderingContext_compressedTexSubImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* zoffset, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* format, const jb_Any* srcData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(zoffset), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(format), em_Val_from(srcData)));
}


jb_Undefined WebGL2RenderingContext_compressedTexSubImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* zoffset, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* format, const jb_Any* srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(zoffset), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(format), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_compressedTexSubImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* zoffset, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* format, const jb_Any* srcData, long long srcOffset, const jb_Any* srcLengthOverride) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(zoffset), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(format), em_Val_from(srcData), em_Val_from(srcOffset), em_Val_from(srcLengthOverride)));
}


jb_Any WebGL2RenderingContext_getFragDataLocation(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_DOMString* name) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getFragDataLocation", em_Val_from(program), em_Val_from(name)));
}


jb_Undefined WebGL2RenderingContext_uniform1ui(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v0) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1ui", em_Val_from(location), em_Val_from(v0)));
}


jb_Undefined WebGL2RenderingContext_uniform2ui(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v0, const jb_Any* v1) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2ui", em_Val_from(location), em_Val_from(v0), em_Val_from(v1)));
}


jb_Undefined WebGL2RenderingContext_uniform3ui(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v0, const jb_Any* v1, const jb_Any* v2) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3ui", em_Val_from(location), em_Val_from(v0), em_Val_from(v1), em_Val_from(v2)));
}


jb_Undefined WebGL2RenderingContext_uniform4ui(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v0, const jb_Any* v1, const jb_Any* v2, const jb_Any* v3) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4ui", em_Val_from(location), em_Val_from(v0), em_Val_from(v1), em_Val_from(v2), em_Val_from(v3)));
}


jb_Undefined WebGL2RenderingContext_uniform1uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1uiv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform1uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform1uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform2uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2uiv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform2uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform2uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform3uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3uiv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform3uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform3uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform4uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4uiv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform4uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform4uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3x2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3x2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3x2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3x2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3x2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3x2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4x2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4x2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4x2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4x2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4x2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4x2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2x3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2x3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2x3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2x3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2x3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2x3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4x3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4x3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4x3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4x3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4x3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4x3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2x4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2x4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2x4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2x4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2x4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2x4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3x4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3x4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3x4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3x4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3x4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3x4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_vertexAttribI4i(WebGL2RenderingContext* self , const jb_Any* index, const jb_Any* x, const jb_Any* y, const jb_Any* z, const jb_Any* w) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribI4i", em_Val_from(index), em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(w)));
}


jb_Undefined WebGL2RenderingContext_vertexAttribI4iv(WebGL2RenderingContext* self , const jb_Any* index, const jb_Any* values) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribI4iv", em_Val_from(index), em_Val_from(values)));
}


jb_Undefined WebGL2RenderingContext_vertexAttribI4ui(WebGL2RenderingContext* self , const jb_Any* index, const jb_Any* x, const jb_Any* y, const jb_Any* z, const jb_Any* w) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribI4ui", em_Val_from(index), em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(w)));
}


jb_Undefined WebGL2RenderingContext_vertexAttribI4uiv(WebGL2RenderingContext* self , const jb_Any* index, const jb_Any* values) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribI4uiv", em_Val_from(index), em_Val_from(values)));
}


jb_Undefined WebGL2RenderingContext_vertexAttribIPointer(WebGL2RenderingContext* self , const jb_Any* index, const jb_Any* size, const jb_Any* type, const jb_Any* stride, const jb_Any* offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribIPointer", em_Val_from(index), em_Val_from(size), em_Val_from(type), em_Val_from(stride), em_Val_from(offset)));
}


jb_Undefined WebGL2RenderingContext_vertexAttribDivisor(WebGL2RenderingContext* self , const jb_Any* index, const jb_Any* divisor) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribDivisor", em_Val_from(index), em_Val_from(divisor)));
}


jb_Undefined WebGL2RenderingContext_drawArraysInstanced(WebGL2RenderingContext* self , const jb_Any* mode, const jb_Any* first, const jb_Any* count, const jb_Any* instanceCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawArraysInstanced", em_Val_from(mode), em_Val_from(first), em_Val_from(count), em_Val_from(instanceCount)));
}


jb_Undefined WebGL2RenderingContext_drawElementsInstanced(WebGL2RenderingContext* self , const jb_Any* mode, const jb_Any* count, const jb_Any* type, const jb_Any* offset, const jb_Any* instanceCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawElementsInstanced", em_Val_from(mode), em_Val_from(count), em_Val_from(type), em_Val_from(offset), em_Val_from(instanceCount)));
}


jb_Undefined WebGL2RenderingContext_drawRangeElements(WebGL2RenderingContext* self , const jb_Any* mode, const jb_Any* start, const jb_Any* end, const jb_Any* count, const jb_Any* type, const jb_Any* offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawRangeElements", em_Val_from(mode), em_Val_from(start), em_Val_from(end), em_Val_from(count), em_Val_from(type), em_Val_from(offset)));
}


jb_Undefined WebGL2RenderingContext_drawBuffers(WebGL2RenderingContext* self , const jb_Sequence* buffers) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawBuffers", em_Val_from(buffers)));
}


jb_Undefined WebGL2RenderingContext_clearBufferfv(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* values) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferfv", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(values)));
}


jb_Undefined WebGL2RenderingContext_clearBufferfv(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* values, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferfv", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(values), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_clearBufferiv(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* values) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferiv", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(values)));
}


jb_Undefined WebGL2RenderingContext_clearBufferiv(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* values, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferiv", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(values), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_clearBufferuiv(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* values) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferuiv", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(values)));
}


jb_Undefined WebGL2RenderingContext_clearBufferuiv(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* values, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferuiv", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(values), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_clearBufferfi(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* depth, const jb_Any* stencil) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferfi", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(depth), em_Val_from(stencil)));
}


WebGLQuery WebGL2RenderingContext_createQuery(WebGL2RenderingContext* self ) {
    return em_Val_as(WebGLQuery, em_Val_call(em_Val_as_val(self->inner), "createQuery"));
}


jb_Undefined WebGL2RenderingContext_deleteQuery(WebGL2RenderingContext* self , const WebGLQuery* query) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteQuery", em_Val_from(query)));
}


jb_Any WebGL2RenderingContext_isQuery(WebGL2RenderingContext* self , const WebGLQuery* query) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "isQuery", em_Val_from(query)));
}


jb_Undefined WebGL2RenderingContext_beginQuery(WebGL2RenderingContext* self , const jb_Any* target, const WebGLQuery* query) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "beginQuery", em_Val_from(target), em_Val_from(query)));
}


jb_Undefined WebGL2RenderingContext_endQuery(WebGL2RenderingContext* self , const jb_Any* target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "endQuery", em_Val_from(target)));
}


WebGLQuery WebGL2RenderingContext_getQuery(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* pname) {
    return em_Val_as(WebGLQuery, em_Val_call(em_Val_as_val(self->inner), "getQuery", em_Val_from(target), em_Val_from(pname)));
}


jb_Any WebGL2RenderingContext_getQueryParameter(WebGL2RenderingContext* self , const WebGLQuery* query, const jb_Any* pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getQueryParameter", em_Val_from(query), em_Val_from(pname)));
}


WebGLSampler WebGL2RenderingContext_createSampler(WebGL2RenderingContext* self ) {
    return em_Val_as(WebGLSampler, em_Val_call(em_Val_as_val(self->inner), "createSampler"));
}


jb_Undefined WebGL2RenderingContext_deleteSampler(WebGL2RenderingContext* self , const WebGLSampler* sampler) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteSampler", em_Val_from(sampler)));
}


jb_Any WebGL2RenderingContext_isSampler(WebGL2RenderingContext* self , const WebGLSampler* sampler) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "isSampler", em_Val_from(sampler)));
}


jb_Undefined WebGL2RenderingContext_bindSampler(WebGL2RenderingContext* self , const jb_Any* unit, const WebGLSampler* sampler) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bindSampler", em_Val_from(unit), em_Val_from(sampler)));
}


jb_Undefined WebGL2RenderingContext_samplerParameteri(WebGL2RenderingContext* self , const WebGLSampler* sampler, const jb_Any* pname, const jb_Any* param) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "samplerParameteri", em_Val_from(sampler), em_Val_from(pname), em_Val_from(param)));
}


jb_Undefined WebGL2RenderingContext_samplerParameterf(WebGL2RenderingContext* self , const WebGLSampler* sampler, const jb_Any* pname, const jb_Any* param) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "samplerParameterf", em_Val_from(sampler), em_Val_from(pname), em_Val_from(param)));
}


jb_Any WebGL2RenderingContext_getSamplerParameter(WebGL2RenderingContext* self , const WebGLSampler* sampler, const jb_Any* pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getSamplerParameter", em_Val_from(sampler), em_Val_from(pname)));
}


WebGLSync WebGL2RenderingContext_fenceSync(WebGL2RenderingContext* self , const jb_Any* condition, const jb_Any* flags) {
    return em_Val_as(WebGLSync, em_Val_call(em_Val_as_val(self->inner), "fenceSync", em_Val_from(condition), em_Val_from(flags)));
}


jb_Any WebGL2RenderingContext_isSync(WebGL2RenderingContext* self , const WebGLSync* sync) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "isSync", em_Val_from(sync)));
}


jb_Undefined WebGL2RenderingContext_deleteSync(WebGL2RenderingContext* self , const WebGLSync* sync) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteSync", em_Val_from(sync)));
}


jb_Any WebGL2RenderingContext_clientWaitSync(WebGL2RenderingContext* self , const WebGLSync* sync, const jb_Any* flags, const jb_Any* timeout) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "clientWaitSync", em_Val_from(sync), em_Val_from(flags), em_Val_from(timeout)));
}


jb_Undefined WebGL2RenderingContext_waitSync(WebGL2RenderingContext* self , const WebGLSync* sync, const jb_Any* flags, const jb_Any* timeout) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "waitSync", em_Val_from(sync), em_Val_from(flags), em_Val_from(timeout)));
}


jb_Any WebGL2RenderingContext_getSyncParameter(WebGL2RenderingContext* self , const WebGLSync* sync, const jb_Any* pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getSyncParameter", em_Val_from(sync), em_Val_from(pname)));
}


WebGLTransformFeedback WebGL2RenderingContext_createTransformFeedback(WebGL2RenderingContext* self ) {
    return em_Val_as(WebGLTransformFeedback, em_Val_call(em_Val_as_val(self->inner), "createTransformFeedback"));
}


jb_Undefined WebGL2RenderingContext_deleteTransformFeedback(WebGL2RenderingContext* self , const WebGLTransformFeedback* tf) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteTransformFeedback", em_Val_from(tf)));
}


jb_Any WebGL2RenderingContext_isTransformFeedback(WebGL2RenderingContext* self , const WebGLTransformFeedback* tf) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "isTransformFeedback", em_Val_from(tf)));
}


jb_Undefined WebGL2RenderingContext_bindTransformFeedback(WebGL2RenderingContext* self , const jb_Any* target, const WebGLTransformFeedback* tf) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bindTransformFeedback", em_Val_from(target), em_Val_from(tf)));
}


jb_Undefined WebGL2RenderingContext_beginTransformFeedback(WebGL2RenderingContext* self , const jb_Any* primitiveMode) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "beginTransformFeedback", em_Val_from(primitiveMode)));
}


jb_Undefined WebGL2RenderingContext_endTransformFeedback(WebGL2RenderingContext* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "endTransformFeedback"));
}


jb_Undefined WebGL2RenderingContext_transformFeedbackVaryings(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Sequence* varyings, const jb_Any* bufferMode) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "transformFeedbackVaryings", em_Val_from(program), em_Val_from(varyings), em_Val_from(bufferMode)));
}


WebGLActiveInfo WebGL2RenderingContext_getTransformFeedbackVarying(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Any* index) {
    return em_Val_as(WebGLActiveInfo, em_Val_call(em_Val_as_val(self->inner), "getTransformFeedbackVarying", em_Val_from(program), em_Val_from(index)));
}


jb_Undefined WebGL2RenderingContext_pauseTransformFeedback(WebGL2RenderingContext* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pauseTransformFeedback"));
}


jb_Undefined WebGL2RenderingContext_resumeTransformFeedback(WebGL2RenderingContext* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "resumeTransformFeedback"));
}


jb_Undefined WebGL2RenderingContext_bindBufferBase(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* index, const WebGLBuffer* buffer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bindBufferBase", em_Val_from(target), em_Val_from(index), em_Val_from(buffer)));
}


jb_Undefined WebGL2RenderingContext_bindBufferRange(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* index, const WebGLBuffer* buffer, const jb_Any* offset, const jb_Any* size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bindBufferRange", em_Val_from(target), em_Val_from(index), em_Val_from(buffer), em_Val_from(offset), em_Val_from(size)));
}


jb_Any WebGL2RenderingContext_getIndexedParameter(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* index) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getIndexedParameter", em_Val_from(target), em_Val_from(index)));
}


jb_Sequence WebGL2RenderingContext_getUniformIndices(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Sequence* uniformNames) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getUniformIndices", em_Val_from(program), em_Val_from(uniformNames)));
}


jb_Any WebGL2RenderingContext_getActiveUniforms(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Sequence* uniformIndices, const jb_Any* pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getActiveUniforms", em_Val_from(program), em_Val_from(uniformIndices), em_Val_from(pname)));
}


jb_Any WebGL2RenderingContext_getUniformBlockIndex(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_DOMString* uniformBlockName) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getUniformBlockIndex", em_Val_from(program), em_Val_from(uniformBlockName)));
}


jb_Any WebGL2RenderingContext_getActiveUniformBlockParameter(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Any* uniformBlockIndex, const jb_Any* pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getActiveUniformBlockParameter", em_Val_from(program), em_Val_from(uniformBlockIndex), em_Val_from(pname)));
}


jb_DOMString WebGL2RenderingContext_getActiveUniformBlockName(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Any* uniformBlockIndex) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getActiveUniformBlockName", em_Val_from(program), em_Val_from(uniformBlockIndex)));
}


jb_Undefined WebGL2RenderingContext_uniformBlockBinding(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Any* uniformBlockIndex, const jb_Any* uniformBlockBinding) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformBlockBinding", em_Val_from(program), em_Val_from(uniformBlockIndex), em_Val_from(uniformBlockBinding)));
}


WebGLVertexArrayObject WebGL2RenderingContext_createVertexArray(WebGL2RenderingContext* self ) {
    return em_Val_as(WebGLVertexArrayObject, em_Val_call(em_Val_as_val(self->inner), "createVertexArray"));
}


jb_Undefined WebGL2RenderingContext_deleteVertexArray(WebGL2RenderingContext* self , const WebGLVertexArrayObject* vertexArray) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteVertexArray", em_Val_from(vertexArray)));
}


jb_Any WebGL2RenderingContext_isVertexArray(WebGL2RenderingContext* self , const WebGLVertexArrayObject* vertexArray) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "isVertexArray", em_Val_from(vertexArray)));
}


jb_Undefined WebGL2RenderingContext_bindVertexArray(WebGL2RenderingContext* self , const WebGLVertexArrayObject* array) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bindVertexArray", em_Val_from(array)));
}


jb_Undefined WebGL2RenderingContext_bufferData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* srcData, const jb_Any* usage, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bufferData", em_Val_from(target), em_Val_from(srcData), em_Val_from(usage), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_bufferData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* srcData, const jb_Any* usage, long long srcOffset, const jb_Any* length) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bufferData", em_Val_from(target), em_Val_from(srcData), em_Val_from(usage), em_Val_from(srcOffset), em_Val_from(length)));
}


jb_Undefined WebGL2RenderingContext_bufferSubData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* dstByteOffset, const jb_Any* srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bufferSubData", em_Val_from(target), em_Val_from(dstByteOffset), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_bufferSubData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* dstByteOffset, const jb_Any* srcData, long long srcOffset, const jb_Any* length) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bufferSubData", em_Val_from(target), em_Val_from(dstByteOffset), em_Val_from(srcData), em_Val_from(srcOffset), em_Val_from(length)));
}


jb_Undefined WebGL2RenderingContext_texImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* border, const jb_Any* format, const jb_Any* type, const jb_Any* srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(border), em_Val_from(format), em_Val_from(type), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_texSubImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* width, const jb_Any* height, const jb_Any* format, const jb_Any* type, const jb_Any* srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texSubImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(width), em_Val_from(height), em_Val_from(format), em_Val_from(type), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_compressedTexImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* border, const jb_Any* srcData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(border), em_Val_from(srcData)));
}


jb_Undefined WebGL2RenderingContext_compressedTexImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* border, const jb_Any* srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(border), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_compressedTexImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* border, const jb_Any* srcData, long long srcOffset, const jb_Any* srcLengthOverride) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(border), em_Val_from(srcData), em_Val_from(srcOffset), em_Val_from(srcLengthOverride)));
}


jb_Undefined WebGL2RenderingContext_compressedTexSubImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* width, const jb_Any* height, const jb_Any* format, const jb_Any* srcData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(width), em_Val_from(height), em_Val_from(format), em_Val_from(srcData)));
}


jb_Undefined WebGL2RenderingContext_compressedTexSubImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* width, const jb_Any* height, const jb_Any* format, const jb_Any* srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(width), em_Val_from(height), em_Val_from(format), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_compressedTexSubImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* width, const jb_Any* height, const jb_Any* format, const jb_Any* srcData, long long srcOffset, const jb_Any* srcLengthOverride) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(width), em_Val_from(height), em_Val_from(format), em_Val_from(srcData), em_Val_from(srcOffset), em_Val_from(srcLengthOverride)));
}


jb_Undefined WebGL2RenderingContext_uniform1fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1fv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform1fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform1fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2fv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3fv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4fv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform1iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1iv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform1iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform1iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform2iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2iv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform2iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform2iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform3iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3iv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform3iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform3iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform4iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4iv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform4iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform4iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_readPixels(WebGL2RenderingContext* self , const jb_Any* x, const jb_Any* y, const jb_Any* width, const jb_Any* height, const jb_Any* format, const jb_Any* type, const jb_Any* dstData, long long dstOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "readPixels", em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height), em_Val_from(format), em_Val_from(type), em_Val_from(dstData), em_Val_from(dstOffset)));
}

