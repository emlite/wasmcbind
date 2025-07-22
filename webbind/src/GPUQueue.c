#include <webbind/GPUQueue.h>
#include <webbind/GPUCommandBuffer.h>
#include <webbind/GPUBuffer.h>
#include <webbind/GPUCommandEncoder.h>


DEFINE_EMLITE_TYPE(GPUTexelCopyBufferLayout, em_Val);


jb_Any GPUTexelCopyBufferLayout_offset(const GPUTexelCopyBufferLayout *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "offset"));
}


void GPUTexelCopyBufferLayout_set_offset(GPUTexelCopyBufferLayout* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "offset", value);
}


jb_Any GPUTexelCopyBufferLayout_bytesPerRow(const GPUTexelCopyBufferLayout *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "bytesPerRow"));
}


void GPUTexelCopyBufferLayout_set_bytesPerRow(GPUTexelCopyBufferLayout* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "bytesPerRow", value);
}


jb_Any GPUTexelCopyBufferLayout_rowsPerImage(const GPUTexelCopyBufferLayout *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "rowsPerImage"));
}


void GPUTexelCopyBufferLayout_set_rowsPerImage(GPUTexelCopyBufferLayout* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "rowsPerImage", value);
}

DEFINE_EMLITE_TYPE(GPUCopyExternalImageSourceInfo, em_Val);


jb_Any GPUCopyExternalImageSourceInfo_source(const GPUCopyExternalImageSourceInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "source"));
}


void GPUCopyExternalImageSourceInfo_set_source(GPUCopyExternalImageSourceInfo* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "source", value);
}


jb_Any GPUCopyExternalImageSourceInfo_origin(const GPUCopyExternalImageSourceInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "origin"));
}


void GPUCopyExternalImageSourceInfo_set_origin(GPUCopyExternalImageSourceInfo* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "origin", value);
}


bool GPUCopyExternalImageSourceInfo_flipY(const GPUCopyExternalImageSourceInfo *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "flipY"));
}


void GPUCopyExternalImageSourceInfo_set_flipY(GPUCopyExternalImageSourceInfo* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "flipY", value);
}

DEFINE_EMLITE_TYPE(GPUCopyExternalImageDestInfo, em_Val);


PredefinedColorSpace GPUCopyExternalImageDestInfo_colorSpace(const GPUCopyExternalImageDestInfo *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), "colorSpace"));
}


void GPUCopyExternalImageDestInfo_set_colorSpace(GPUCopyExternalImageDestInfo* self, const PredefinedColorSpace* value) {
    em_Val_set(em_Val_as_val(self->inner), "colorSpace", value);
}


bool GPUCopyExternalImageDestInfo_premultipliedAlpha(const GPUCopyExternalImageDestInfo *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "premultipliedAlpha"));
}


void GPUCopyExternalImageDestInfo_set_premultipliedAlpha(GPUCopyExternalImageDestInfo* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "premultipliedAlpha", value);
}

DEFINE_EMLITE_TYPE(GPUQueue, em_Val);


jb_Undefined GPUQueue_submit(GPUQueue* self , const jb_Sequence* commandBuffers) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "submit", em_Val_from(commandBuffers)));
}


jb_Promise GPUQueue_onSubmittedWorkDone(GPUQueue* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "onSubmittedWorkDone"));
}


jb_Undefined GPUQueue_writeBuffer(GPUQueue* self , const GPUBuffer* buffer, const jb_Any* bufferOffset, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "writeBuffer", em_Val_from(buffer), em_Val_from(bufferOffset), em_Val_from(data)));
}


jb_Undefined GPUQueue_writeBuffer(GPUQueue* self , const GPUBuffer* buffer, const jb_Any* bufferOffset, const jb_Any* data, const jb_Any* dataOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "writeBuffer", em_Val_from(buffer), em_Val_from(bufferOffset), em_Val_from(data), em_Val_from(dataOffset)));
}


jb_Undefined GPUQueue_writeBuffer(GPUQueue* self , const GPUBuffer* buffer, const jb_Any* bufferOffset, const jb_Any* data, const jb_Any* dataOffset, const jb_Any* size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "writeBuffer", em_Val_from(buffer), em_Val_from(bufferOffset), em_Val_from(data), em_Val_from(dataOffset), em_Val_from(size)));
}


jb_Undefined GPUQueue_writeTexture(GPUQueue* self , const GPUTexelCopyTextureInfo* destination, const jb_Any* data, const GPUTexelCopyBufferLayout* dataLayout, const jb_Any* size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "writeTexture", em_Val_from(destination), em_Val_from(data), em_Val_from(dataLayout), em_Val_from(size)));
}


jb_Undefined GPUQueue_copyExternalImageToTexture(GPUQueue* self , const GPUCopyExternalImageSourceInfo* source, const GPUCopyExternalImageDestInfo* destination, const jb_Any* copySize) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyExternalImageToTexture", em_Val_from(source), em_Val_from(destination), em_Val_from(copySize)));
}


jb_USVString GPUQueue_label(const GPUQueue *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPUQueue_set_label(GPUQueue* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}

