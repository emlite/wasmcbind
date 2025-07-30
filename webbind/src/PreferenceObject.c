#include <webbind/PreferenceObject.h>


DEFINE_EMLITE_TYPE(PreferenceObject, EventTarget);


jb_String PreferenceObject_override(const PreferenceObject *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("override")));
}


jb_String PreferenceObject_value(const PreferenceObject *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("value")));
}


jb_Array PreferenceObject_validValues(const PreferenceObject *self) {
    return em_Val_as(jb_Array, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("validValues")));
}


jb_Undefined PreferenceObject_clearOverride(PreferenceObject* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearOverride"));
}


jb_Promise PreferenceObject_requestOverride(PreferenceObject* self , jb_String * value) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestOverride", em_Val_from(value)));
}


jb_Any PreferenceObject_onchange(const PreferenceObject *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchange")));
}


void PreferenceObject_set_onchange(PreferenceObject* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchange"), em_Val_from(value));
}

