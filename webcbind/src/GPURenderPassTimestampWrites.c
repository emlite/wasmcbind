#include <webcbind/GPURenderPassTimestampWrites.h>

#include <webcbind/GPUQuerySet.h>

DEFINE_EMLITE_TYPE(GPURenderPassTimestampWrites, em_Val);


GPUQuerySet GPURenderPassTimestampWrites_querySet(const GPURenderPassTimestampWrites *self) {
    return em_Val_as(GPUQuerySet, em_Val_get(em_Val_as_val(self->inner), em_Val_from("querySet")));
}


void GPURenderPassTimestampWrites_set_querySet(GPURenderPassTimestampWrites* self, GPUQuerySet * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("querySet"), em_Val_from(value));
}


jb_Any GPURenderPassTimestampWrites_beginningOfPassWriteIndex(const GPURenderPassTimestampWrites *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("beginningOfPassWriteIndex")));
}


void GPURenderPassTimestampWrites_set_beginningOfPassWriteIndex(GPURenderPassTimestampWrites* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("beginningOfPassWriteIndex"), em_Val_from(value));
}


jb_Any GPURenderPassTimestampWrites_endOfPassWriteIndex(const GPURenderPassTimestampWrites *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endOfPassWriteIndex")));
}


void GPURenderPassTimestampWrites_set_endOfPassWriteIndex(GPURenderPassTimestampWrites* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("endOfPassWriteIndex"), em_Val_from(value));
}


GPURenderPassTimestampWrites GPURenderPassTimestampWrites_new() {
    em_Val obj = em_Val_object();
    return GPURenderPassTimestampWrites_from_val(&obj);
}

