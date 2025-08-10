#include <webbind/ErrorEventInit.h>

DEFINE_EMLITE_TYPE(ErrorEventInit, EventInit);


jb_String ErrorEventInit_message(const ErrorEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("message")));
}


void ErrorEventInit_set_message(ErrorEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("message"), em_Val_from(value));
}


jb_String ErrorEventInit_filename(const ErrorEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("filename")));
}


void ErrorEventInit_set_filename(ErrorEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("filename"), em_Val_from(value));
}


unsigned long ErrorEventInit_lineno(const ErrorEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("lineno")));
}


void ErrorEventInit_set_lineno(ErrorEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("lineno"), em_Val_from(value));
}


unsigned long ErrorEventInit_colno(const ErrorEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("colno")));
}


void ErrorEventInit_set_colno(ErrorEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("colno"), em_Val_from(value));
}


jb_Any ErrorEventInit_error(const ErrorEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("error")));
}


void ErrorEventInit_set_error(ErrorEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


ErrorEventInit ErrorEventInit_new() {
    em_Val obj = em_Val_object();
    return ErrorEventInit_from_val(&obj);
}

