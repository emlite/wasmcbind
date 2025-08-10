#include <webbind/Transformer.h>

DEFINE_EMLITE_TYPE(Transformer, em_Val);


jb_Function Transformer_start(const Transformer *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("start")));
}


void Transformer_set_start(Transformer* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("start"), em_Val_from(value));
}


jb_Function Transformer_transform(const Transformer *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transform")));
}


void Transformer_set_transform(Transformer* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


jb_Function Transformer_flush(const Transformer *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("flush")));
}


void Transformer_set_flush(Transformer* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("flush"), em_Val_from(value));
}


jb_Function Transformer_cancel(const Transformer *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cancel")));
}


void Transformer_set_cancel(Transformer* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cancel"), em_Val_from(value));
}


jb_Any Transformer_readableType(const Transformer *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("readableType")));
}


void Transformer_set_readableType(Transformer* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("readableType"), em_Val_from(value));
}


jb_Any Transformer_writableType(const Transformer *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writableType")));
}


void Transformer_set_writableType(Transformer* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("writableType"), em_Val_from(value));
}


Transformer Transformer_new() {
    em_Val obj = em_Val_object();
    return Transformer_from_val(&obj);
}

