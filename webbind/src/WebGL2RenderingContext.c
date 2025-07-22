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


jb_Undefined WebGL2RenderingContext_copyBufferSubData(WebGL2RenderingContext* self , jb_Any * readTarget, jb_Any * writeTarget, jb_Any * readOffset, jb_Any * writeOffset, jb_Any * size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyBufferSubData", em_Val_from(readTarget), em_Val_from(writeTarget), em_Val_from(readOffset), em_Val_from(writeOffset), em_Val_from(size)));
}


jb_Undefined WebGL2RenderingContext_getBufferSubData0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * srcByteOffset, jb_Any * dstBuffer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getBufferSubData", em_Val_from(target), em_Val_from(srcByteOffset), em_Val_from(dstBuffer)));
}


jb_Undefined WebGL2RenderingContext_getBufferSubData1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * srcByteOffset, jb_Any * dstBuffer, long long dstOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getBufferSubData", em_Val_from(target), em_Val_from(srcByteOffset), em_Val_from(dstBuffer), em_Val_from(dstOffset)));
}


jb_Undefined WebGL2RenderingContext_getBufferSubData2(WebGL2RenderingContext* self , jb_Any * target, jb_Any * srcByteOffset, jb_Any * dstBuffer, long long dstOffset, jb_Any * length) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getBufferSubData", em_Val_from(target), em_Val_from(srcByteOffset), em_Val_from(dstBuffer), em_Val_from(dstOffset), em_Val_from(length)));
}


jb_Undefined WebGL2RenderingContext_blitFramebuffer(WebGL2RenderingContext* self , jb_Any * srcX0, jb_Any * srcY0, jb_Any * srcX1, jb_Any * srcY1, jb_Any * dstX0, jb_Any * dstY0, jb_Any * dstX1, jb_Any * dstY1, jb_Any * mask, jb_Any * filter) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "blitFramebuffer", em_Val_from(srcX0), em_Val_from(srcY0), em_Val_from(srcX1), em_Val_from(srcY1), em_Val_from(dstX0), em_Val_from(dstY0), em_Val_from(dstX1), em_Val_from(dstY1), em_Val_from(mask), em_Val_from(filter)));
}


jb_Undefined WebGL2RenderingContext_framebufferTextureLayer(WebGL2RenderingContext* self , jb_Any * target, jb_Any * attachment, WebGLTexture * texture, jb_Any * level, jb_Any * layer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "framebufferTextureLayer", em_Val_from(target), em_Val_from(attachment), em_Val_from(texture), em_Val_from(level), em_Val_from(layer)));
}


jb_Undefined WebGL2RenderingContext_invalidateFramebuffer(WebGL2RenderingContext* self , jb_Any * target, jb_Sequence * attachments) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "invalidateFramebuffer", em_Val_from(target), em_Val_from(attachments)));
}


jb_Undefined WebGL2RenderingContext_invalidateSubFramebuffer(WebGL2RenderingContext* self , jb_Any * target, jb_Sequence * attachments, jb_Any * x, jb_Any * y, jb_Any * width, jb_Any * height) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "invalidateSubFramebuffer", em_Val_from(target), em_Val_from(attachments), em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height)));
}


jb_Undefined WebGL2RenderingContext_readBuffer(WebGL2RenderingContext* self , jb_Any * src) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "readBuffer", em_Val_from(src)));
}


jb_Any WebGL2RenderingContext_getInternalformatParameter(WebGL2RenderingContext* self , jb_Any * target, jb_Any * internalformat, jb_Any * pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getInternalformatParameter", em_Val_from(target), em_Val_from(internalformat), em_Val_from(pname)));
}


jb_Undefined WebGL2RenderingContext_renderbufferStorageMultisample(WebGL2RenderingContext* self , jb_Any * target, jb_Any * samples, jb_Any * internalformat, jb_Any * width, jb_Any * height) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "renderbufferStorageMultisample", em_Val_from(target), em_Val_from(samples), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height)));
}


jb_Undefined WebGL2RenderingContext_texStorage2D(WebGL2RenderingContext* self , jb_Any * target, jb_Any * levels, jb_Any * internalformat, jb_Any * width, jb_Any * height) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texStorage2D", em_Val_from(target), em_Val_from(levels), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height)));
}


jb_Undefined WebGL2RenderingContext_texStorage3D(WebGL2RenderingContext* self , jb_Any * target, jb_Any * levels, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * depth) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texStorage3D", em_Val_from(target), em_Val_from(levels), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(depth)));
}


jb_Undefined WebGL2RenderingContext_texImage3D(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * border, jb_Any * format, jb_Any * type, jb_Any * srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(border), em_Val_from(format), em_Val_from(type), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_texSubImage3D0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * zoffset, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * format, jb_Any * type, jb_Any * srcData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texSubImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(zoffset), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(format), em_Val_from(type), em_Val_from(srcData)));
}


jb_Undefined WebGL2RenderingContext_texSubImage3D1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * zoffset, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * format, jb_Any * type, jb_Any * srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texSubImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(zoffset), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(format), em_Val_from(type), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_copyTexSubImage3D(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * zoffset, jb_Any * x, jb_Any * y, jb_Any * width, jb_Any * height) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyTexSubImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(zoffset), em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height)));
}


jb_Undefined WebGL2RenderingContext_compressedTexImage3D0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * border, jb_Any * srcData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(border), em_Val_from(srcData)));
}


jb_Undefined WebGL2RenderingContext_compressedTexImage3D1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * border, jb_Any * srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(border), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_compressedTexImage3D2(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * border, jb_Any * srcData, long long srcOffset, jb_Any * srcLengthOverride) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(border), em_Val_from(srcData), em_Val_from(srcOffset), em_Val_from(srcLengthOverride)));
}


jb_Undefined WebGL2RenderingContext_compressedTexSubImage3D0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * zoffset, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * format, jb_Any * srcData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(zoffset), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(format), em_Val_from(srcData)));
}


jb_Undefined WebGL2RenderingContext_compressedTexSubImage3D1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * zoffset, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * format, jb_Any * srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(zoffset), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(format), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_compressedTexSubImage3D2(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * zoffset, jb_Any * width, jb_Any * height, jb_Any * depth, jb_Any * format, jb_Any * srcData, long long srcOffset, jb_Any * srcLengthOverride) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage3D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(zoffset), em_Val_from(width), em_Val_from(height), em_Val_from(depth), em_Val_from(format), em_Val_from(srcData), em_Val_from(srcOffset), em_Val_from(srcLengthOverride)));
}


jb_Any WebGL2RenderingContext_getFragDataLocation(WebGL2RenderingContext* self , WebGLProgram * program, jb_DOMString * name) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getFragDataLocation", em_Val_from(program), em_Val_from(name)));
}


jb_Undefined WebGL2RenderingContext_uniform1ui(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * v0) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1ui", em_Val_from(location), em_Val_from(v0)));
}


jb_Undefined WebGL2RenderingContext_uniform2ui(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * v0, jb_Any * v1) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2ui", em_Val_from(location), em_Val_from(v0), em_Val_from(v1)));
}


jb_Undefined WebGL2RenderingContext_uniform3ui(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * v0, jb_Any * v1, jb_Any * v2) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3ui", em_Val_from(location), em_Val_from(v0), em_Val_from(v1), em_Val_from(v2)));
}


jb_Undefined WebGL2RenderingContext_uniform4ui(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * v0, jb_Any * v1, jb_Any * v2, jb_Any * v3) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4ui", em_Val_from(location), em_Val_from(v0), em_Val_from(v1), em_Val_from(v2), em_Val_from(v3)));
}


jb_Undefined WebGL2RenderingContext_uniform1uiv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1uiv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform1uiv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform1uiv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform2uiv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2uiv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform2uiv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform2uiv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform3uiv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3uiv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform3uiv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform3uiv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform4uiv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4uiv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform4uiv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform4uiv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4uiv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3x2fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3x2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3x2fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3x2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3x2fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3x2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4x2fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4x2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4x2fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4x2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4x2fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4x2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2x3fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2x3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2x3fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2x3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2x3fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2x3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4x3fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4x3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4x3fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4x3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4x3fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4x3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2x4fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2x4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2x4fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2x4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2x4fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2x4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3x4fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3x4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3x4fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3x4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3x4fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3x4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_vertexAttribI4i(WebGL2RenderingContext* self , jb_Any * index, jb_Any * x, jb_Any * y, jb_Any * z, jb_Any * w) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribI4i", em_Val_from(index), em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(w)));
}


jb_Undefined WebGL2RenderingContext_vertexAttribI4iv(WebGL2RenderingContext* self , jb_Any * index, jb_Any * values) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribI4iv", em_Val_from(index), em_Val_from(values)));
}


jb_Undefined WebGL2RenderingContext_vertexAttribI4ui(WebGL2RenderingContext* self , jb_Any * index, jb_Any * x, jb_Any * y, jb_Any * z, jb_Any * w) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribI4ui", em_Val_from(index), em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(w)));
}


jb_Undefined WebGL2RenderingContext_vertexAttribI4uiv(WebGL2RenderingContext* self , jb_Any * index, jb_Any * values) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribI4uiv", em_Val_from(index), em_Val_from(values)));
}


jb_Undefined WebGL2RenderingContext_vertexAttribIPointer(WebGL2RenderingContext* self , jb_Any * index, jb_Any * size, jb_Any * type, jb_Any * stride, jb_Any * offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribIPointer", em_Val_from(index), em_Val_from(size), em_Val_from(type), em_Val_from(stride), em_Val_from(offset)));
}


jb_Undefined WebGL2RenderingContext_vertexAttribDivisor(WebGL2RenderingContext* self , jb_Any * index, jb_Any * divisor) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribDivisor", em_Val_from(index), em_Val_from(divisor)));
}


jb_Undefined WebGL2RenderingContext_drawArraysInstanced(WebGL2RenderingContext* self , jb_Any * mode, jb_Any * first, jb_Any * count, jb_Any * instanceCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawArraysInstanced", em_Val_from(mode), em_Val_from(first), em_Val_from(count), em_Val_from(instanceCount)));
}


jb_Undefined WebGL2RenderingContext_drawElementsInstanced(WebGL2RenderingContext* self , jb_Any * mode, jb_Any * count, jb_Any * type, jb_Any * offset, jb_Any * instanceCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawElementsInstanced", em_Val_from(mode), em_Val_from(count), em_Val_from(type), em_Val_from(offset), em_Val_from(instanceCount)));
}


jb_Undefined WebGL2RenderingContext_drawRangeElements(WebGL2RenderingContext* self , jb_Any * mode, jb_Any * start, jb_Any * end, jb_Any * count, jb_Any * type, jb_Any * offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawRangeElements", em_Val_from(mode), em_Val_from(start), em_Val_from(end), em_Val_from(count), em_Val_from(type), em_Val_from(offset)));
}


jb_Undefined WebGL2RenderingContext_drawBuffers(WebGL2RenderingContext* self , jb_Sequence * buffers) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawBuffers", em_Val_from(buffers)));
}


jb_Undefined WebGL2RenderingContext_clearBufferfv0(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * values) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferfv", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(values)));
}


jb_Undefined WebGL2RenderingContext_clearBufferfv1(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * values, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferfv", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(values), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_clearBufferiv0(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * values) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferiv", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(values)));
}


jb_Undefined WebGL2RenderingContext_clearBufferiv1(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * values, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferiv", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(values), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_clearBufferuiv0(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * values) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferuiv", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(values)));
}


jb_Undefined WebGL2RenderingContext_clearBufferuiv1(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * values, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferuiv", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(values), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_clearBufferfi(WebGL2RenderingContext* self , jb_Any * buffer, jb_Any * drawbuffer, jb_Any * depth, jb_Any * stencil) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBufferfi", em_Val_from(buffer), em_Val_from(drawbuffer), em_Val_from(depth), em_Val_from(stencil)));
}


WebGLQuery WebGL2RenderingContext_createQuery(WebGL2RenderingContext* self ) {
    return em_Val_as(WebGLQuery, em_Val_call(em_Val_as_val(self->inner), "createQuery"));
}


jb_Undefined WebGL2RenderingContext_deleteQuery(WebGL2RenderingContext* self , WebGLQuery * query) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteQuery", em_Val_from(query)));
}


jb_Any WebGL2RenderingContext_isQuery(WebGL2RenderingContext* self , WebGLQuery * query) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "isQuery", em_Val_from(query)));
}


jb_Undefined WebGL2RenderingContext_beginQuery(WebGL2RenderingContext* self , jb_Any * target, WebGLQuery * query) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "beginQuery", em_Val_from(target), em_Val_from(query)));
}


jb_Undefined WebGL2RenderingContext_endQuery(WebGL2RenderingContext* self , jb_Any * target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "endQuery", em_Val_from(target)));
}


WebGLQuery WebGL2RenderingContext_getQuery(WebGL2RenderingContext* self , jb_Any * target, jb_Any * pname) {
    return em_Val_as(WebGLQuery, em_Val_call(em_Val_as_val(self->inner), "getQuery", em_Val_from(target), em_Val_from(pname)));
}


jb_Any WebGL2RenderingContext_getQueryParameter(WebGL2RenderingContext* self , WebGLQuery * query, jb_Any * pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getQueryParameter", em_Val_from(query), em_Val_from(pname)));
}


WebGLSampler WebGL2RenderingContext_createSampler(WebGL2RenderingContext* self ) {
    return em_Val_as(WebGLSampler, em_Val_call(em_Val_as_val(self->inner), "createSampler"));
}


jb_Undefined WebGL2RenderingContext_deleteSampler(WebGL2RenderingContext* self , WebGLSampler * sampler) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteSampler", em_Val_from(sampler)));
}


jb_Any WebGL2RenderingContext_isSampler(WebGL2RenderingContext* self , WebGLSampler * sampler) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "isSampler", em_Val_from(sampler)));
}


jb_Undefined WebGL2RenderingContext_bindSampler(WebGL2RenderingContext* self , jb_Any * unit, WebGLSampler * sampler) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bindSampler", em_Val_from(unit), em_Val_from(sampler)));
}


jb_Undefined WebGL2RenderingContext_samplerParameteri(WebGL2RenderingContext* self , WebGLSampler * sampler, jb_Any * pname, jb_Any * param) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "samplerParameteri", em_Val_from(sampler), em_Val_from(pname), em_Val_from(param)));
}


jb_Undefined WebGL2RenderingContext_samplerParameterf(WebGL2RenderingContext* self , WebGLSampler * sampler, jb_Any * pname, jb_Any * param) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "samplerParameterf", em_Val_from(sampler), em_Val_from(pname), em_Val_from(param)));
}


jb_Any WebGL2RenderingContext_getSamplerParameter(WebGL2RenderingContext* self , WebGLSampler * sampler, jb_Any * pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getSamplerParameter", em_Val_from(sampler), em_Val_from(pname)));
}


WebGLSync WebGL2RenderingContext_fenceSync(WebGL2RenderingContext* self , jb_Any * condition, jb_Any * flags) {
    return em_Val_as(WebGLSync, em_Val_call(em_Val_as_val(self->inner), "fenceSync", em_Val_from(condition), em_Val_from(flags)));
}


jb_Any WebGL2RenderingContext_isSync(WebGL2RenderingContext* self , WebGLSync * sync) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "isSync", em_Val_from(sync)));
}


jb_Undefined WebGL2RenderingContext_deleteSync(WebGL2RenderingContext* self , WebGLSync * sync) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteSync", em_Val_from(sync)));
}


jb_Any WebGL2RenderingContext_clientWaitSync(WebGL2RenderingContext* self , WebGLSync * sync, jb_Any * flags, jb_Any * timeout) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "clientWaitSync", em_Val_from(sync), em_Val_from(flags), em_Val_from(timeout)));
}


jb_Undefined WebGL2RenderingContext_waitSync(WebGL2RenderingContext* self , WebGLSync * sync, jb_Any * flags, jb_Any * timeout) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "waitSync", em_Val_from(sync), em_Val_from(flags), em_Val_from(timeout)));
}


jb_Any WebGL2RenderingContext_getSyncParameter(WebGL2RenderingContext* self , WebGLSync * sync, jb_Any * pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getSyncParameter", em_Val_from(sync), em_Val_from(pname)));
}


WebGLTransformFeedback WebGL2RenderingContext_createTransformFeedback(WebGL2RenderingContext* self ) {
    return em_Val_as(WebGLTransformFeedback, em_Val_call(em_Val_as_val(self->inner), "createTransformFeedback"));
}


jb_Undefined WebGL2RenderingContext_deleteTransformFeedback(WebGL2RenderingContext* self , WebGLTransformFeedback * tf) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteTransformFeedback", em_Val_from(tf)));
}


jb_Any WebGL2RenderingContext_isTransformFeedback(WebGL2RenderingContext* self , WebGLTransformFeedback * tf) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "isTransformFeedback", em_Val_from(tf)));
}


jb_Undefined WebGL2RenderingContext_bindTransformFeedback(WebGL2RenderingContext* self , jb_Any * target, WebGLTransformFeedback * tf) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bindTransformFeedback", em_Val_from(target), em_Val_from(tf)));
}


jb_Undefined WebGL2RenderingContext_beginTransformFeedback(WebGL2RenderingContext* self , jb_Any * primitiveMode) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "beginTransformFeedback", em_Val_from(primitiveMode)));
}


jb_Undefined WebGL2RenderingContext_endTransformFeedback(WebGL2RenderingContext* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "endTransformFeedback"));
}


jb_Undefined WebGL2RenderingContext_transformFeedbackVaryings(WebGL2RenderingContext* self , WebGLProgram * program, jb_Sequence * varyings, jb_Any * bufferMode) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "transformFeedbackVaryings", em_Val_from(program), em_Val_from(varyings), em_Val_from(bufferMode)));
}


WebGLActiveInfo WebGL2RenderingContext_getTransformFeedbackVarying(WebGL2RenderingContext* self , WebGLProgram * program, jb_Any * index) {
    return em_Val_as(WebGLActiveInfo, em_Val_call(em_Val_as_val(self->inner), "getTransformFeedbackVarying", em_Val_from(program), em_Val_from(index)));
}


jb_Undefined WebGL2RenderingContext_pauseTransformFeedback(WebGL2RenderingContext* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pauseTransformFeedback"));
}


jb_Undefined WebGL2RenderingContext_resumeTransformFeedback(WebGL2RenderingContext* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "resumeTransformFeedback"));
}


jb_Undefined WebGL2RenderingContext_bindBufferBase(WebGL2RenderingContext* self , jb_Any * target, jb_Any * index, WebGLBuffer * buffer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bindBufferBase", em_Val_from(target), em_Val_from(index), em_Val_from(buffer)));
}


jb_Undefined WebGL2RenderingContext_bindBufferRange(WebGL2RenderingContext* self , jb_Any * target, jb_Any * index, WebGLBuffer * buffer, jb_Any * offset, jb_Any * size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bindBufferRange", em_Val_from(target), em_Val_from(index), em_Val_from(buffer), em_Val_from(offset), em_Val_from(size)));
}


jb_Any WebGL2RenderingContext_getIndexedParameter(WebGL2RenderingContext* self , jb_Any * target, jb_Any * index) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getIndexedParameter", em_Val_from(target), em_Val_from(index)));
}


jb_Sequence WebGL2RenderingContext_getUniformIndices(WebGL2RenderingContext* self , WebGLProgram * program, jb_Sequence * uniformNames) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getUniformIndices", em_Val_from(program), em_Val_from(uniformNames)));
}


jb_Any WebGL2RenderingContext_getActiveUniforms(WebGL2RenderingContext* self , WebGLProgram * program, jb_Sequence * uniformIndices, jb_Any * pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getActiveUniforms", em_Val_from(program), em_Val_from(uniformIndices), em_Val_from(pname)));
}


jb_Any WebGL2RenderingContext_getUniformBlockIndex(WebGL2RenderingContext* self , WebGLProgram * program, jb_DOMString * uniformBlockName) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getUniformBlockIndex", em_Val_from(program), em_Val_from(uniformBlockName)));
}


jb_Any WebGL2RenderingContext_getActiveUniformBlockParameter(WebGL2RenderingContext* self , WebGLProgram * program, jb_Any * uniformBlockIndex, jb_Any * pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getActiveUniformBlockParameter", em_Val_from(program), em_Val_from(uniformBlockIndex), em_Val_from(pname)));
}


jb_DOMString WebGL2RenderingContext_getActiveUniformBlockName(WebGL2RenderingContext* self , WebGLProgram * program, jb_Any * uniformBlockIndex) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getActiveUniformBlockName", em_Val_from(program), em_Val_from(uniformBlockIndex)));
}


jb_Undefined WebGL2RenderingContext_uniformBlockBinding(WebGL2RenderingContext* self , WebGLProgram * program, jb_Any * uniformBlockIndex, jb_Any * uniformBlockBinding) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformBlockBinding", em_Val_from(program), em_Val_from(uniformBlockIndex), em_Val_from(uniformBlockBinding)));
}


WebGLVertexArrayObject WebGL2RenderingContext_createVertexArray(WebGL2RenderingContext* self ) {
    return em_Val_as(WebGLVertexArrayObject, em_Val_call(em_Val_as_val(self->inner), "createVertexArray"));
}


jb_Undefined WebGL2RenderingContext_deleteVertexArray(WebGL2RenderingContext* self , WebGLVertexArrayObject * vertexArray) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteVertexArray", em_Val_from(vertexArray)));
}


jb_Any WebGL2RenderingContext_isVertexArray(WebGL2RenderingContext* self , WebGLVertexArrayObject * vertexArray) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "isVertexArray", em_Val_from(vertexArray)));
}


jb_Undefined WebGL2RenderingContext_bindVertexArray(WebGL2RenderingContext* self , WebGLVertexArrayObject * array) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bindVertexArray", em_Val_from(array)));
}


jb_Undefined WebGL2RenderingContext_bufferData0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * srcData, jb_Any * usage, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bufferData", em_Val_from(target), em_Val_from(srcData), em_Val_from(usage), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_bufferData1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * srcData, jb_Any * usage, long long srcOffset, jb_Any * length) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bufferData", em_Val_from(target), em_Val_from(srcData), em_Val_from(usage), em_Val_from(srcOffset), em_Val_from(length)));
}


jb_Undefined WebGL2RenderingContext_bufferSubData0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * dstByteOffset, jb_Any * srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bufferSubData", em_Val_from(target), em_Val_from(dstByteOffset), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_bufferSubData1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * dstByteOffset, jb_Any * srcData, long long srcOffset, jb_Any * length) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bufferSubData", em_Val_from(target), em_Val_from(dstByteOffset), em_Val_from(srcData), em_Val_from(srcOffset), em_Val_from(length)));
}


jb_Undefined WebGL2RenderingContext_texImage2D(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * border, jb_Any * format, jb_Any * type, jb_Any * srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(border), em_Val_from(format), em_Val_from(type), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_texSubImage2D(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * type, jb_Any * srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "texSubImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(width), em_Val_from(height), em_Val_from(format), em_Val_from(type), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_compressedTexImage2D0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * border, jb_Any * srcData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(border), em_Val_from(srcData)));
}


jb_Undefined WebGL2RenderingContext_compressedTexImage2D1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * border, jb_Any * srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(border), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_compressedTexImage2D2(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * internalformat, jb_Any * width, jb_Any * height, jb_Any * border, jb_Any * srcData, long long srcOffset, jb_Any * srcLengthOverride) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(internalformat), em_Val_from(width), em_Val_from(height), em_Val_from(border), em_Val_from(srcData), em_Val_from(srcOffset), em_Val_from(srcLengthOverride)));
}


jb_Undefined WebGL2RenderingContext_compressedTexSubImage2D0(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * srcData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(width), em_Val_from(height), em_Val_from(format), em_Val_from(srcData)));
}


jb_Undefined WebGL2RenderingContext_compressedTexSubImage2D1(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * srcData, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(width), em_Val_from(height), em_Val_from(format), em_Val_from(srcData), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_compressedTexSubImage2D2(WebGL2RenderingContext* self , jb_Any * target, jb_Any * level, jb_Any * xoffset, jb_Any * yoffset, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * srcData, long long srcOffset, jb_Any * srcLengthOverride) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "compressedTexSubImage2D", em_Val_from(target), em_Val_from(level), em_Val_from(xoffset), em_Val_from(yoffset), em_Val_from(width), em_Val_from(height), em_Val_from(format), em_Val_from(srcData), em_Val_from(srcOffset), em_Val_from(srcLengthOverride)));
}


jb_Undefined WebGL2RenderingContext_uniform1fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1fv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform1fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform1fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform2fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2fv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform2fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform2fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform3fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3fv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform3fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform3fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform4fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4fv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform4fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform4fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4fv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform1iv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1iv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform1iv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform1iv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform1iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform2iv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2iv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform2iv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform2iv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform2iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform3iv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3iv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform3iv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform3iv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform3iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniform4iv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4iv", em_Val_from(location), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniform4iv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniform4iv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniform4iv", em_Val_from(location), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix2fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix2fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix3fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix3fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4fv0(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4fv1(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset)));
}


jb_Undefined WebGL2RenderingContext_uniformMatrix4fv2(WebGL2RenderingContext* self , WebGLUniformLocation * location, jb_Any * transpose, jb_Any * data, long long srcOffset, jb_Any * srcLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "uniformMatrix4fv", em_Val_from(location), em_Val_from(transpose), em_Val_from(data), em_Val_from(srcOffset), em_Val_from(srcLength)));
}


jb_Undefined WebGL2RenderingContext_readPixels(WebGL2RenderingContext* self , jb_Any * x, jb_Any * y, jb_Any * width, jb_Any * height, jb_Any * format, jb_Any * type, jb_Any * dstData, long long dstOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "readPixels", em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height), em_Val_from(format), em_Val_from(type), em_Val_from(dstData), em_Val_from(dstOffset)));
}

