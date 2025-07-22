#include <webbind/History.h>


DEFINE_EMLITE_TYPE(History, em_Val);


unsigned long History_length(const History *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "length"));
}


ScrollRestoration History_scrollRestoration(const History *self) {
    return em_Val_as(ScrollRestoration, em_Val_get(em_Val_as_val(self->inner), "scrollRestoration"));
}


void History_set_scrollRestoration(History* self, const ScrollRestoration* value) {
    em_Val_set(em_Val_as_val(self->inner), "scrollRestoration", value);
}


jb_Any History_state(const History *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "state"));
}


jb_Undefined History_go(History* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "go"));
}


jb_Undefined History_go(History* self , long delta) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "go", em_Val_from(delta)));
}


jb_Undefined History_back(History* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "back"));
}


jb_Undefined History_forward(History* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "forward"));
}


jb_Undefined History_pushState(History* self , const jb_Any* data, const jb_DOMString* unused) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pushState", em_Val_from(data), em_Val_from(unused)));
}


jb_Undefined History_pushState(History* self , const jb_Any* data, const jb_DOMString* unused, const jb_USVString* url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pushState", em_Val_from(data), em_Val_from(unused), em_Val_from(url)));
}


jb_Undefined History_replaceState(History* self , const jb_Any* data, const jb_DOMString* unused) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "replaceState", em_Val_from(data), em_Val_from(unused)));
}


jb_Undefined History_replaceState(History* self , const jb_Any* data, const jb_DOMString* unused, const jb_USVString* url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "replaceState", em_Val_from(data), em_Val_from(unused), em_Val_from(url)));
}

