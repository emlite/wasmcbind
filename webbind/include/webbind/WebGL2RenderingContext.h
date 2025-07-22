#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WebGLTexture WebGLTexture;
typedef struct WebGLProgram WebGLProgram;
typedef struct WebGLUniformLocation WebGLUniformLocation;
typedef struct WebGLQuery WebGLQuery;
typedef struct WebGLSampler WebGLSampler;
typedef struct WebGLSync WebGLSync;
typedef struct WebGLTransformFeedback WebGLTransformFeedback;
typedef struct WebGLActiveInfo WebGLActiveInfo;
typedef struct WebGLBuffer WebGLBuffer;
typedef struct WebGLVertexArrayObject WebGLVertexArrayObject;


typedef struct {
  em_Val inner;
} WebGL2RenderingContext;


DECLARE_EMLITE_TYPE(WebGL2RenderingContext, em_Val);

jb_Promise WebGL2RenderingContext_makeXRCompatible(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_copyBufferSubData(WebGL2RenderingContext* self , const jb_Any* readTarget, const jb_Any* writeTarget, const jb_Any* readOffset, const jb_Any* writeOffset, const jb_Any* size);

jb_Undefined WebGL2RenderingContext_getBufferSubData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* srcByteOffset, const jb_Any* dstBuffer);

jb_Undefined WebGL2RenderingContext_getBufferSubData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* srcByteOffset, const jb_Any* dstBuffer, long long dstOffset);

jb_Undefined WebGL2RenderingContext_getBufferSubData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* srcByteOffset, const jb_Any* dstBuffer, long long dstOffset, const jb_Any* length);

jb_Undefined WebGL2RenderingContext_blitFramebuffer(WebGL2RenderingContext* self , const jb_Any* srcX0, const jb_Any* srcY0, const jb_Any* srcX1, const jb_Any* srcY1, const jb_Any* dstX0, const jb_Any* dstY0, const jb_Any* dstX1, const jb_Any* dstY1, const jb_Any* mask, const jb_Any* filter);

jb_Undefined WebGL2RenderingContext_framebufferTextureLayer(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* attachment, const WebGLTexture* texture, const jb_Any* level, const jb_Any* layer);

jb_Undefined WebGL2RenderingContext_invalidateFramebuffer(WebGL2RenderingContext* self , const jb_Any* target, const jb_Sequence* attachments);

jb_Undefined WebGL2RenderingContext_invalidateSubFramebuffer(WebGL2RenderingContext* self , const jb_Any* target, const jb_Sequence* attachments, const jb_Any* x, const jb_Any* y, const jb_Any* width, const jb_Any* height);

jb_Undefined WebGL2RenderingContext_readBuffer(WebGL2RenderingContext* self , const jb_Any* src);

jb_Any WebGL2RenderingContext_getInternalformatParameter(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* internalformat, const jb_Any* pname);

jb_Undefined WebGL2RenderingContext_renderbufferStorageMultisample(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* samples, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height);

jb_Undefined WebGL2RenderingContext_texStorage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* levels, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height);

jb_Undefined WebGL2RenderingContext_texStorage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* levels, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* depth);

jb_Undefined WebGL2RenderingContext_texImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* border, const jb_Any* format, const jb_Any* type, const jb_Any* srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_texSubImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* zoffset, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* format, const jb_Any* type, const jb_Any* srcData);

jb_Undefined WebGL2RenderingContext_texSubImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* zoffset, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* format, const jb_Any* type, const jb_Any* srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_copyTexSubImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* zoffset, const jb_Any* x, const jb_Any* y, const jb_Any* width, const jb_Any* height);

jb_Undefined WebGL2RenderingContext_compressedTexImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* border, const jb_Any* srcData);

jb_Undefined WebGL2RenderingContext_compressedTexImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* border, const jb_Any* srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_compressedTexImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* border, const jb_Any* srcData, long long srcOffset, const jb_Any* srcLengthOverride);

jb_Undefined WebGL2RenderingContext_compressedTexSubImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* zoffset, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* format, const jb_Any* srcData);

jb_Undefined WebGL2RenderingContext_compressedTexSubImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* zoffset, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* format, const jb_Any* srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_compressedTexSubImage3D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* zoffset, const jb_Any* width, const jb_Any* height, const jb_Any* depth, const jb_Any* format, const jb_Any* srcData, long long srcOffset, const jb_Any* srcLengthOverride);

jb_Any WebGL2RenderingContext_getFragDataLocation(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_DOMString* name);

jb_Undefined WebGL2RenderingContext_uniform1ui(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v0);

jb_Undefined WebGL2RenderingContext_uniform2ui(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v0, const jb_Any* v1);

jb_Undefined WebGL2RenderingContext_uniform3ui(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v0, const jb_Any* v1, const jb_Any* v2);

jb_Undefined WebGL2RenderingContext_uniform4ui(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* v0, const jb_Any* v1, const jb_Any* v2, const jb_Any* v3);

jb_Undefined WebGL2RenderingContext_uniform1uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniform1uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform1uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniform2uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniform2uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform2uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniform3uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniform3uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform3uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniform4uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniform4uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform4uiv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix3x2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniformMatrix3x2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix3x2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix4x2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniformMatrix4x2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix4x2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix2x3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniformMatrix2x3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix2x3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix4x3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniformMatrix4x3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix4x3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix2x4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniformMatrix2x4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix2x4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix3x4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniformMatrix3x4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix3x4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_vertexAttribI4i(WebGL2RenderingContext* self , const jb_Any* index, const jb_Any* x, const jb_Any* y, const jb_Any* z, const jb_Any* w);

jb_Undefined WebGL2RenderingContext_vertexAttribI4iv(WebGL2RenderingContext* self , const jb_Any* index, const jb_Any* values);

jb_Undefined WebGL2RenderingContext_vertexAttribI4ui(WebGL2RenderingContext* self , const jb_Any* index, const jb_Any* x, const jb_Any* y, const jb_Any* z, const jb_Any* w);

jb_Undefined WebGL2RenderingContext_vertexAttribI4uiv(WebGL2RenderingContext* self , const jb_Any* index, const jb_Any* values);

jb_Undefined WebGL2RenderingContext_vertexAttribIPointer(WebGL2RenderingContext* self , const jb_Any* index, const jb_Any* size, const jb_Any* type, const jb_Any* stride, const jb_Any* offset);

jb_Undefined WebGL2RenderingContext_vertexAttribDivisor(WebGL2RenderingContext* self , const jb_Any* index, const jb_Any* divisor);

jb_Undefined WebGL2RenderingContext_drawArraysInstanced(WebGL2RenderingContext* self , const jb_Any* mode, const jb_Any* first, const jb_Any* count, const jb_Any* instanceCount);

jb_Undefined WebGL2RenderingContext_drawElementsInstanced(WebGL2RenderingContext* self , const jb_Any* mode, const jb_Any* count, const jb_Any* type, const jb_Any* offset, const jb_Any* instanceCount);

jb_Undefined WebGL2RenderingContext_drawRangeElements(WebGL2RenderingContext* self , const jb_Any* mode, const jb_Any* start, const jb_Any* end, const jb_Any* count, const jb_Any* type, const jb_Any* offset);

jb_Undefined WebGL2RenderingContext_drawBuffers(WebGL2RenderingContext* self , const jb_Sequence* buffers);

jb_Undefined WebGL2RenderingContext_clearBufferfv(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* values);

jb_Undefined WebGL2RenderingContext_clearBufferfv(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* values, long long srcOffset);

jb_Undefined WebGL2RenderingContext_clearBufferiv(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* values);

jb_Undefined WebGL2RenderingContext_clearBufferiv(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* values, long long srcOffset);

jb_Undefined WebGL2RenderingContext_clearBufferuiv(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* values);

jb_Undefined WebGL2RenderingContext_clearBufferuiv(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* values, long long srcOffset);

jb_Undefined WebGL2RenderingContext_clearBufferfi(WebGL2RenderingContext* self , const jb_Any* buffer, const jb_Any* drawbuffer, const jb_Any* depth, const jb_Any* stencil);

WebGLQuery WebGL2RenderingContext_createQuery(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_deleteQuery(WebGL2RenderingContext* self , const WebGLQuery* query);

jb_Any WebGL2RenderingContext_isQuery(WebGL2RenderingContext* self , const WebGLQuery* query);

jb_Undefined WebGL2RenderingContext_beginQuery(WebGL2RenderingContext* self , const jb_Any* target, const WebGLQuery* query);

jb_Undefined WebGL2RenderingContext_endQuery(WebGL2RenderingContext* self , const jb_Any* target);

WebGLQuery WebGL2RenderingContext_getQuery(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* pname);

jb_Any WebGL2RenderingContext_getQueryParameter(WebGL2RenderingContext* self , const WebGLQuery* query, const jb_Any* pname);

WebGLSampler WebGL2RenderingContext_createSampler(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_deleteSampler(WebGL2RenderingContext* self , const WebGLSampler* sampler);

jb_Any WebGL2RenderingContext_isSampler(WebGL2RenderingContext* self , const WebGLSampler* sampler);

jb_Undefined WebGL2RenderingContext_bindSampler(WebGL2RenderingContext* self , const jb_Any* unit, const WebGLSampler* sampler);

jb_Undefined WebGL2RenderingContext_samplerParameteri(WebGL2RenderingContext* self , const WebGLSampler* sampler, const jb_Any* pname, const jb_Any* param);

jb_Undefined WebGL2RenderingContext_samplerParameterf(WebGL2RenderingContext* self , const WebGLSampler* sampler, const jb_Any* pname, const jb_Any* param);

jb_Any WebGL2RenderingContext_getSamplerParameter(WebGL2RenderingContext* self , const WebGLSampler* sampler, const jb_Any* pname);

WebGLSync WebGL2RenderingContext_fenceSync(WebGL2RenderingContext* self , const jb_Any* condition, const jb_Any* flags);

jb_Any WebGL2RenderingContext_isSync(WebGL2RenderingContext* self , const WebGLSync* sync);

jb_Undefined WebGL2RenderingContext_deleteSync(WebGL2RenderingContext* self , const WebGLSync* sync);

jb_Any WebGL2RenderingContext_clientWaitSync(WebGL2RenderingContext* self , const WebGLSync* sync, const jb_Any* flags, const jb_Any* timeout);

jb_Undefined WebGL2RenderingContext_waitSync(WebGL2RenderingContext* self , const WebGLSync* sync, const jb_Any* flags, const jb_Any* timeout);

jb_Any WebGL2RenderingContext_getSyncParameter(WebGL2RenderingContext* self , const WebGLSync* sync, const jb_Any* pname);

WebGLTransformFeedback WebGL2RenderingContext_createTransformFeedback(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_deleteTransformFeedback(WebGL2RenderingContext* self , const WebGLTransformFeedback* tf);

jb_Any WebGL2RenderingContext_isTransformFeedback(WebGL2RenderingContext* self , const WebGLTransformFeedback* tf);

jb_Undefined WebGL2RenderingContext_bindTransformFeedback(WebGL2RenderingContext* self , const jb_Any* target, const WebGLTransformFeedback* tf);

jb_Undefined WebGL2RenderingContext_beginTransformFeedback(WebGL2RenderingContext* self , const jb_Any* primitiveMode);

jb_Undefined WebGL2RenderingContext_endTransformFeedback(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_transformFeedbackVaryings(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Sequence* varyings, const jb_Any* bufferMode);

WebGLActiveInfo WebGL2RenderingContext_getTransformFeedbackVarying(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Any* index);

jb_Undefined WebGL2RenderingContext_pauseTransformFeedback(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_resumeTransformFeedback(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_bindBufferBase(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* index, const WebGLBuffer* buffer);

jb_Undefined WebGL2RenderingContext_bindBufferRange(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* index, const WebGLBuffer* buffer, const jb_Any* offset, const jb_Any* size);

jb_Any WebGL2RenderingContext_getIndexedParameter(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* index);

jb_Sequence WebGL2RenderingContext_getUniformIndices(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Sequence* uniformNames);

jb_Any WebGL2RenderingContext_getActiveUniforms(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Sequence* uniformIndices, const jb_Any* pname);

jb_Any WebGL2RenderingContext_getUniformBlockIndex(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_DOMString* uniformBlockName);

jb_Any WebGL2RenderingContext_getActiveUniformBlockParameter(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Any* uniformBlockIndex, const jb_Any* pname);

jb_DOMString WebGL2RenderingContext_getActiveUniformBlockName(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Any* uniformBlockIndex);

jb_Undefined WebGL2RenderingContext_uniformBlockBinding(WebGL2RenderingContext* self , const WebGLProgram* program, const jb_Any* uniformBlockIndex, const jb_Any* uniformBlockBinding);

WebGLVertexArrayObject WebGL2RenderingContext_createVertexArray(WebGL2RenderingContext* self );

jb_Undefined WebGL2RenderingContext_deleteVertexArray(WebGL2RenderingContext* self , const WebGLVertexArrayObject* vertexArray);

jb_Any WebGL2RenderingContext_isVertexArray(WebGL2RenderingContext* self , const WebGLVertexArrayObject* vertexArray);

jb_Undefined WebGL2RenderingContext_bindVertexArray(WebGL2RenderingContext* self , const WebGLVertexArrayObject* array);

jb_Undefined WebGL2RenderingContext_bufferData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* srcData, const jb_Any* usage, long long srcOffset);

jb_Undefined WebGL2RenderingContext_bufferData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* srcData, const jb_Any* usage, long long srcOffset, const jb_Any* length);

jb_Undefined WebGL2RenderingContext_bufferSubData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* dstByteOffset, const jb_Any* srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_bufferSubData(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* dstByteOffset, const jb_Any* srcData, long long srcOffset, const jb_Any* length);

jb_Undefined WebGL2RenderingContext_texImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* border, const jb_Any* format, const jb_Any* type, const jb_Any* srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_texSubImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* width, const jb_Any* height, const jb_Any* format, const jb_Any* type, const jb_Any* srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_compressedTexImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* border, const jb_Any* srcData);

jb_Undefined WebGL2RenderingContext_compressedTexImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* border, const jb_Any* srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_compressedTexImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* internalformat, const jb_Any* width, const jb_Any* height, const jb_Any* border, const jb_Any* srcData, long long srcOffset, const jb_Any* srcLengthOverride);

jb_Undefined WebGL2RenderingContext_compressedTexSubImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* width, const jb_Any* height, const jb_Any* format, const jb_Any* srcData);

jb_Undefined WebGL2RenderingContext_compressedTexSubImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* width, const jb_Any* height, const jb_Any* format, const jb_Any* srcData, long long srcOffset);

jb_Undefined WebGL2RenderingContext_compressedTexSubImage2D(WebGL2RenderingContext* self , const jb_Any* target, const jb_Any* level, const jb_Any* xoffset, const jb_Any* yoffset, const jb_Any* width, const jb_Any* height, const jb_Any* format, const jb_Any* srcData, long long srcOffset, const jb_Any* srcLengthOverride);

jb_Undefined WebGL2RenderingContext_uniform1fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniform1fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform1fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniform2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniform2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniform3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniform3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniform4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniform4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniform1iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniform1iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform1iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniform2iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniform2iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform2iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniform3iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniform3iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform3iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniform4iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniform4iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniform4iv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniformMatrix2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix2fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniformMatrix3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix3fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_uniformMatrix4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data);

jb_Undefined WebGL2RenderingContext_uniformMatrix4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset);

jb_Undefined WebGL2RenderingContext_uniformMatrix4fv(WebGL2RenderingContext* self , const WebGLUniformLocation* location, const jb_Any* transpose, const jb_Any* data, long long srcOffset, const jb_Any* srcLength);

jb_Undefined WebGL2RenderingContext_readPixels(WebGL2RenderingContext* self , const jb_Any* x, const jb_Any* y, const jb_Any* width, const jb_Any* height, const jb_Any* format, const jb_Any* type, const jb_Any* dstData, long long dstOffset);
