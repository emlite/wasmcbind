#include <webbind/HTMLPortalElement.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(PortalActivateOptions, em_Val);


jb_Any PortalActivateOptions_data(const PortalActivateOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void PortalActivateOptions_set_data(PortalActivateOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(HTMLPortalElement, HTMLElement);


HTMLPortalElement HTMLPortalElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLPortalElement") );
        return HTMLPortalElement_from_val(&vv);
      }


jb_String HTMLPortalElement_src(const HTMLPortalElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("src")));
}


void HTMLPortalElement_set_src(HTMLPortalElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_String HTMLPortalElement_referrerPolicy(const HTMLPortalElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy")));
}


void HTMLPortalElement_set_referrerPolicy(HTMLPortalElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy"), em_Val_from(value));
}


jb_Promise HTMLPortalElement_activate0(HTMLPortalElement* self ) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLElement_as_val(self->inner), "activate"));
}


jb_Promise HTMLPortalElement_activate1(HTMLPortalElement* self , PortalActivateOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLElement_as_val(self->inner), "activate", em_Val_from(options)));
}


jb_Undefined HTMLPortalElement_postMessage0(HTMLPortalElement* self , jb_Any * message) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined HTMLPortalElement_postMessage1(HTMLPortalElement* self , jb_Any * message, StructuredSerializeOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


jb_Any HTMLPortalElement_onmessage(const HTMLPortalElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("onmessage")));
}


void HTMLPortalElement_set_onmessage(HTMLPortalElement* self, jb_Any * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


jb_Any HTMLPortalElement_onmessageerror(const HTMLPortalElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("onmessageerror")));
}


void HTMLPortalElement_set_onmessageerror(HTMLPortalElement* self, jb_Any * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("onmessageerror"), em_Val_from(value));
}

