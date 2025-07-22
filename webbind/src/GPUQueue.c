#include <webbind/GPUQueue.h>
#include <webbind/GPUCommandBuffer.h>
#include <webbind/GPUBuffer.h>
#include <webbind/GPUCommandEncoder.h>


DEFINE_EMLITE_TYPE(GPUTexelCopyBufferLayout, em_Val);


jb_Any GPUTexelCopyBufferLayout_offset(const GPUTexelCopyBufferLayout *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


void GPUTexelCopyBufferLayout_set_offset(GPUTexelCopyBufferLayout* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offset"), em_Val_from(value));
}


jb_Any GPUTexelCopyBufferLayout_bytesPerRow(const GPUTexelCopyBufferLayout *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesPerRow")));
}


void GPUTexelCopyBufferLayout_set_bytesPerRow(GPUTexelCopyBufferLayout* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesPerRow"), em_Val_from(value));
}


jb_Any GPUTexelCopyBufferLayout_rowsPerImage(const GPUTexelCopyBufferLayout *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rowsPerImage")));
}


void GPUTexelCopyBufferLayout_set_rowsPerImage(GPUTexelCopyBufferLayout* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rowsPerImage"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUCopyExternalImageSourceInfo, em_Val);


jb_Any GPUCopyExternalImageSourceInfo_source(const GPUCopyExternalImageSourceInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("source")));
}


void GPUCopyExternalImageSourceInfo_set_source(GPUCopyExternalImageSourceInfo* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


jb_Any GPUCopyExternalImageSourceInfo_origin(const GPUCopyExternalImageSourceInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("origin")));
}


void GPUCopyExternalImageSourceInfo_set_origin(GPUCopyExternalImageSourceInfo* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("origin"), em_Val_from(value));
}


bool GPUCopyExternalImageSourceInfo_flipY(const GPUCopyExternalImageSourceInfo *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("flipY")));
}


void GPUCopyExternalImageSourceInfo_set_flipY(GPUCopyExternalImageSourceInfo* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("flipY"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUCopyExternalImageDestInfo, em_Val);


PredefinedColorSpace GPUCopyExternalImageDestInfo_colorSpace(const GPUCopyExternalImageDestInfo *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpace")));
}


void GPUCopyExternalImageDestInfo_set_colorSpace(GPUCopyExternalImageDestInfo* self, PredefinedColorSpace * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}


bool GPUCopyExternalImageDestInfo_premultipliedAlpha(const GPUCopyExternalImageDestInfo *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("premultipliedAlpha")));
}


void GPUCopyExternalImageDestInfo_set_premultipliedAlpha(GPUCopyExternalImageDestInfo* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("premultipliedAlpha"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUQueue, em_Val);


jb_Undefined GPUQueue_submit(GPUQueue* self , jb_Sequence * commandBuffers) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "submit", em_Val_from(commandBuffers)));
}


jb_Promise GPUQueue_onSubmittedWorkDone(GPUQueue* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "onSubmittedWorkDone"));
}


jb_Undefined GPUQueue_writeBuffer0(GPUQueue* self , GPUBuffer * buffer, jb_Any * bufferOffset, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "writeBuffer", em_Val_from(buffer), em_Val_from(bufferOffset), em_Val_from(data)));
}


jb_Undefined GPUQueue_writeBuffer1(GPUQueue* self , GPUBuffer * buffer, jb_Any * bufferOffset, jb_Any * data, jb_Any * dataOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "writeBuffer", em_Val_from(buffer), em_Val_from(bufferOffset), em_Val_from(data), em_Val_from(dataOffset)));
}


jb_Undefined GPUQueue_writeBuffer2(GPUQueue* self , GPUBuffer * buffer, jb_Any * bufferOffset, jb_Any * data, jb_Any * dataOffset, jb_Any * size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "writeBuffer", em_Val_from(buffer), em_Val_from(bufferOffset), em_Val_from(data), em_Val_from(dataOffset), em_Val_from(size)));
}


jb_Undefined GPUQueue_writeTexture(GPUQueue* self , GPUTexelCopyTextureInfo * destination, jb_Any * data, GPUTexelCopyBufferLayout * dataLayout, jb_Any * size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "writeTexture", em_Val_from(destination), em_Val_from(data), em_Val_from(dataLayout), em_Val_from(size)));
}


jb_Undefined GPUQueue_copyExternalImageToTexture(GPUQueue* self , GPUCopyExternalImageSourceInfo * source, GPUCopyExternalImageDestInfo * destination, jb_Any * copySize) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyExternalImageToTexture", em_Val_from(source), em_Val_from(destination), em_Val_from(copySize)));
}


jb_USVString GPUQueue_label(const GPUQueue *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUQueue_set_label(GPUQueue* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

