#include <webbind/AdRender.h>

DEFINE_EMLITE_TYPE(AdRender, em_Val);


jb_String AdRender_url(const AdRender *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void AdRender_set_url(AdRender* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


jb_String AdRender_width(const AdRender *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


void AdRender_set_width(AdRender* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


jb_String AdRender_height(const AdRender *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


void AdRender_set_height(AdRender* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


AdRender AdRender_new() {
    em_Val obj = em_Val_object();
    return AdRender_from_val(&obj);
}

