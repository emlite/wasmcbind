#include <webcbind/GPUQueue.h>

#include <webcbind/GPUCommandBuffer.h>
#include <webcbind/GPUBuffer.h>
#include <webcbind/GPUTexelCopyTextureInfo.h>
#include <webcbind/GPUTexelCopyBufferLayout.h>
#include <webcbind/GPUCopyExternalImageSourceInfo.h>
#include <webcbind/GPUCopyExternalImageDestInfo.h>

DEFINE_EMLITE_TYPE(GPUQueue, em_Val);


jb_Undefined GPUQueue_submit(GPUQueue* self , jb_Array * commandBuffers) {
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


jb_String GPUQueue_label(const GPUQueue *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUQueue_set_label(GPUQueue* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

