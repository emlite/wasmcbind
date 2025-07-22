#include <webbind/WorkerGlobalScope.h>
#include <webbind/WorkerLocation.h>
#include <webbind/WorkerNavigator.h>
#include <webbind/FontFaceSet.h>
#include <webbind/Crypto.h>


DEFINE_EMLITE_TYPE(WorkerGlobalScope, EventTarget);


WorkerGlobalScope WorkerGlobalScope_self(const WorkerGlobalScope *self) {
    return em_Val_as(WorkerGlobalScope, em_Val_get(EventTarget_as_val(self->inner), "self"));
}


WorkerLocation WorkerGlobalScope_location(const WorkerGlobalScope *self) {
    return em_Val_as(WorkerLocation, em_Val_get(EventTarget_as_val(self->inner), "location"));
}


WorkerNavigator WorkerGlobalScope_navigator(const WorkerGlobalScope *self) {
    return em_Val_as(WorkerNavigator, em_Val_get(EventTarget_as_val(self->inner), "navigator"));
}


jb_Undefined WorkerGlobalScope_importScripts(WorkerGlobalScope* self , const jb_Any* urls) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "importScripts", em_Val_from(urls)));
}


jb_Any WorkerGlobalScope_onerror(const WorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void WorkerGlobalScope_set_onerror(WorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Any WorkerGlobalScope_onlanguagechange(const WorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onlanguagechange"));
}


void WorkerGlobalScope_set_onlanguagechange(WorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onlanguagechange", value);
}


jb_Any WorkerGlobalScope_onoffline(const WorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onoffline"));
}


void WorkerGlobalScope_set_onoffline(WorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onoffline", value);
}


jb_Any WorkerGlobalScope_ononline(const WorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ononline"));
}


void WorkerGlobalScope_set_ononline(WorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ononline", value);
}


jb_Any WorkerGlobalScope_onrejectionhandled(const WorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onrejectionhandled"));
}


void WorkerGlobalScope_set_onrejectionhandled(WorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onrejectionhandled", value);
}


jb_Any WorkerGlobalScope_onunhandledrejection(const WorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onunhandledrejection"));
}


void WorkerGlobalScope_set_onunhandledrejection(WorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onunhandledrejection", value);
}


FontFaceSet WorkerGlobalScope_fonts(const WorkerGlobalScope *self) {
    return em_Val_as(FontFaceSet, em_Val_get(EventTarget_as_val(self->inner), "fonts"));
}


Crypto WorkerGlobalScope_crypto(const WorkerGlobalScope *self) {
    return em_Val_as(Crypto, em_Val_get(EventTarget_as_val(self->inner), "crypto"));
}

