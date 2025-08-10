#include <webbind/ResponseInit.h>

DEFINE_EMLITE_TYPE(ResponseInit, em_Val);


unsigned short ResponseInit_status(const ResponseInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("status")));
}


void ResponseInit_set_status(ResponseInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("status"), em_Val_from(value));
}


jb_String ResponseInit_statusText(const ResponseInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("statusText")));
}


void ResponseInit_set_statusText(ResponseInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("statusText"), em_Val_from(value));
}


jb_Any ResponseInit_headers(const ResponseInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("headers")));
}


void ResponseInit_set_headers(ResponseInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("headers"), em_Val_from(value));
}


ResponseInit ResponseInit_new() {
    em_Val obj = em_Val_object();
    return ResponseInit_from_val(&obj);
}

