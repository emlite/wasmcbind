#include <webbind/GPUComputePassTimestampWrites.h>

#include <webbind/GPUQuerySet.h>

DEFINE_EMLITE_TYPE(GPUComputePassTimestampWrites, em_Val);


GPUQuerySet GPUComputePassTimestampWrites_querySet(const GPUComputePassTimestampWrites *self) {
    return em_Val_as(GPUQuerySet, em_Val_get(em_Val_as_val(self->inner), em_Val_from("querySet")));
}


void GPUComputePassTimestampWrites_set_querySet(GPUComputePassTimestampWrites* self, GPUQuerySet * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("querySet"), em_Val_from(value));
}


jb_Any GPUComputePassTimestampWrites_beginningOfPassWriteIndex(const GPUComputePassTimestampWrites *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("beginningOfPassWriteIndex")));
}


void GPUComputePassTimestampWrites_set_beginningOfPassWriteIndex(GPUComputePassTimestampWrites* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("beginningOfPassWriteIndex"), em_Val_from(value));
}


jb_Any GPUComputePassTimestampWrites_endOfPassWriteIndex(const GPUComputePassTimestampWrites *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endOfPassWriteIndex")));
}


void GPUComputePassTimestampWrites_set_endOfPassWriteIndex(GPUComputePassTimestampWrites* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("endOfPassWriteIndex"), em_Val_from(value));
}


GPUComputePassTimestampWrites GPUComputePassTimestampWrites_new() {
    em_Val obj = em_Val_object();
    return GPUComputePassTimestampWrites_from_val(&obj);
}

