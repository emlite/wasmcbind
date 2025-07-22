#include <webbind/HTMLPortalElement.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(PortalActivateOptions, em_Val);


jb_Any PortalActivateOptions_data(const PortalActivateOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "data"));
}


void PortalActivateOptions_set_data(PortalActivateOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "data", value);
}

DEFINE_EMLITE_TYPE(HTMLPortalElement, HTMLElement);


HTMLPortalElement HTMLPortalElement_new() : HTMLElement(em_Val_global("HTMLPortalElement").new_()) {
        return HTMLPortalElement(em_Val_new(em_Val_global("HTMLPortalElement", ));
      }


jb_USVString HTMLPortalElement_src(const HTMLPortalElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "src"));
}


void HTMLPortalElement_set_src(HTMLPortalElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "src", value);
}


jb_DOMString HTMLPortalElement_referrerPolicy(const HTMLPortalElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "referrerPolicy"));
}


void HTMLPortalElement_set_referrerPolicy(HTMLPortalElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "referrerPolicy", value);
}


jb_Promise HTMLPortalElement_activate(HTMLPortalElement* self ) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLElement_as_val(self->inner), "activate"));
}


jb_Promise HTMLPortalElement_activate(HTMLPortalElement* self , const PortalActivateOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLElement_as_val(self->inner), "activate", em_Val_from(options)));
}


jb_Undefined HTMLPortalElement_postMessage(HTMLPortalElement* self , const jb_Any* message) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined HTMLPortalElement_postMessage(HTMLPortalElement* self , const jb_Any* message, const StructuredSerializeOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


jb_Any HTMLPortalElement_onmessage(const HTMLPortalElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), "onmessage"));
}


void HTMLPortalElement_set_onmessage(HTMLPortalElement* self, const jb_Any* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "onmessage", value);
}


jb_Any HTMLPortalElement_onmessageerror(const HTMLPortalElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), "onmessageerror"));
}


void HTMLPortalElement_set_onmessageerror(HTMLPortalElement* self, const jb_Any* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "onmessageerror", value);
}

