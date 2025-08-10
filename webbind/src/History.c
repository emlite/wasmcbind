#include <webbind/History.h>

DEFINE_EMLITE_TYPE(History, em_Val);


unsigned long History_length(const History *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


ScrollRestoration History_scrollRestoration(const History *self) {
    return em_Val_as(ScrollRestoration, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scrollRestoration")));
}


void History_set_scrollRestoration(History* self, ScrollRestoration * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scrollRestoration"), em_Val_from(value));
}


jb_Any History_state(const History *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("state")));
}


jb_Undefined History_go0(History* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "go"));
}


jb_Undefined History_go1(History* self , long delta) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "go", em_Val_from(delta)));
}


jb_Undefined History_back(History* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "back"));
}


jb_Undefined History_forward(History* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "forward"));
}


jb_Undefined History_pushState0(History* self , jb_Any * data, jb_String * unused) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pushState", em_Val_from(data), em_Val_from(unused)));
}


jb_Undefined History_pushState1(History* self , jb_Any * data, jb_String * unused, jb_String * url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pushState", em_Val_from(data), em_Val_from(unused), em_Val_from(url)));
}


jb_Undefined History_replaceState0(History* self , jb_Any * data, jb_String * unused) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "replaceState", em_Val_from(data), em_Val_from(unused)));
}


jb_Undefined History_replaceState1(History* self , jb_Any * data, jb_String * unused, jb_String * url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "replaceState", em_Val_from(data), em_Val_from(unused), em_Val_from(url)));
}

