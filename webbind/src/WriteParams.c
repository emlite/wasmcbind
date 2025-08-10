#include <webbind/WriteParams.h>

DEFINE_EMLITE_TYPE(WriteParams, em_Val);


WriteCommandType WriteParams_type(const WriteParams *self) {
    return em_Val_as(WriteCommandType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void WriteParams_set_type(WriteParams* self, WriteCommandType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


long long WriteParams_size(const WriteParams *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}


void WriteParams_set_size(WriteParams* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


long long WriteParams_position(const WriteParams *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("position")));
}


void WriteParams_set_position(WriteParams* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("position"), em_Val_from(value));
}


jb_Any WriteParams_data(const WriteParams *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void WriteParams_set_data(WriteParams* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


WriteParams WriteParams_new() {
    em_Val obj = em_Val_object();
    return WriteParams_from_val(&obj);
}

