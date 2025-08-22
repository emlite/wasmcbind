#include <webcbind/WorkerGlobalScope.h>

#include <webcbind/WorkerLocation.h>
#include <webcbind/WorkerNavigator.h>
#include <webcbind/FontFaceSet.h>
#include <webcbind/Crypto.h>

DEFINE_EMLITE_TYPE(WorkerGlobalScope, EventTarget);


WorkerGlobalScope WorkerGlobalScope_self(const WorkerGlobalScope *self) {
    return em_Val_as(WorkerGlobalScope, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("self")));
}


WorkerLocation WorkerGlobalScope_location(const WorkerGlobalScope *self) {
    return em_Val_as(WorkerLocation, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("location")));
}


WorkerNavigator WorkerGlobalScope_navigator(const WorkerGlobalScope *self) {
    return em_Val_as(WorkerNavigator, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("navigator")));
}


jb_Undefined WorkerGlobalScope_importScripts(WorkerGlobalScope* self , jb_Any * urls) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "importScripts", em_Val_from(urls)));
}


jb_Any WorkerGlobalScope_onerror(const WorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void WorkerGlobalScope_set_onerror(WorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


jb_Any WorkerGlobalScope_onlanguagechange(const WorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onlanguagechange")));
}


void WorkerGlobalScope_set_onlanguagechange(WorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onlanguagechange"), em_Val_from(value));
}


jb_Any WorkerGlobalScope_onoffline(const WorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onoffline")));
}


void WorkerGlobalScope_set_onoffline(WorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onoffline"), em_Val_from(value));
}


jb_Any WorkerGlobalScope_ononline(const WorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ononline")));
}


void WorkerGlobalScope_set_ononline(WorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ononline"), em_Val_from(value));
}


jb_Any WorkerGlobalScope_onrejectionhandled(const WorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onrejectionhandled")));
}


void WorkerGlobalScope_set_onrejectionhandled(WorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onrejectionhandled"), em_Val_from(value));
}


jb_Any WorkerGlobalScope_onunhandledrejection(const WorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onunhandledrejection")));
}


void WorkerGlobalScope_set_onunhandledrejection(WorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onunhandledrejection"), em_Val_from(value));
}


FontFaceSet WorkerGlobalScope_fonts(const WorkerGlobalScope *self) {
    return em_Val_as(FontFaceSet, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("fonts")));
}


Crypto WorkerGlobalScope_crypto(const WorkerGlobalScope *self) {
    return em_Val_as(Crypto, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("crypto")));
}

