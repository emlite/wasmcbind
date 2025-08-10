#include <webbind/UnderlyingSink.h>

DEFINE_EMLITE_TYPE(UnderlyingSink, em_Val);


jb_Function UnderlyingSink_start(const UnderlyingSink *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("start")));
}


void UnderlyingSink_set_start(UnderlyingSink* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("start"), em_Val_from(value));
}


jb_Function UnderlyingSink_write(const UnderlyingSink *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("write")));
}


void UnderlyingSink_set_write(UnderlyingSink* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("write"), em_Val_from(value));
}


jb_Function UnderlyingSink_close(const UnderlyingSink *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("close")));
}


void UnderlyingSink_set_close(UnderlyingSink* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("close"), em_Val_from(value));
}


jb_Function UnderlyingSink_abort(const UnderlyingSink *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("abort")));
}


void UnderlyingSink_set_abort(UnderlyingSink* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("abort"), em_Val_from(value));
}


jb_Any UnderlyingSink_type(const UnderlyingSink *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void UnderlyingSink_set_type(UnderlyingSink* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


UnderlyingSink UnderlyingSink_new() {
    em_Val obj = em_Val_object();
    return UnderlyingSink_from_val(&obj);
}

