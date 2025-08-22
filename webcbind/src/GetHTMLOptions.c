#include <webcbind/GetHTMLOptions.h>

#include <webcbind/ShadowRoot.h>

DEFINE_EMLITE_TYPE(GetHTMLOptions, em_Val);


bool GetHTMLOptions_serializableShadowRoots(const GetHTMLOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serializableShadowRoots")));
}


void GetHTMLOptions_set_serializableShadowRoots(GetHTMLOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("serializableShadowRoots"), em_Val_from(value));
}


jb_Array GetHTMLOptions_shadowRoots(const GetHTMLOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowRoots")));
}


void GetHTMLOptions_set_shadowRoots(GetHTMLOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowRoots"), em_Val_from(value));
}


GetHTMLOptions GetHTMLOptions_new() {
    em_Val obj = em_Val_object();
    return GetHTMLOptions_from_val(&obj);
}

