#include <webbind/ShadowRoot.h>
#include <webbind/Element.h>
#include <webbind/Animation.h>


DEFINE_EMLITE_TYPE(ShadowRoot, DocumentFragment);


ShadowRootMode ShadowRoot_mode(const ShadowRoot *self) {
    return em_Val_as(ShadowRootMode, em_Val_get(DocumentFragment_as_val(self->inner), "mode"));
}


bool ShadowRoot_delegatesFocus(const ShadowRoot *self) {
    return em_Val_as(bool, em_Val_get(DocumentFragment_as_val(self->inner), "delegatesFocus"));
}


SlotAssignmentMode ShadowRoot_slotAssignment(const ShadowRoot *self) {
    return em_Val_as(SlotAssignmentMode, em_Val_get(DocumentFragment_as_val(self->inner), "slotAssignment"));
}


bool ShadowRoot_clonable(const ShadowRoot *self) {
    return em_Val_as(bool, em_Val_get(DocumentFragment_as_val(self->inner), "clonable"));
}


bool ShadowRoot_serializable(const ShadowRoot *self) {
    return em_Val_as(bool, em_Val_get(DocumentFragment_as_val(self->inner), "serializable"));
}


Element ShadowRoot_host(const ShadowRoot *self) {
    return em_Val_as(Element, em_Val_get(DocumentFragment_as_val(self->inner), "host"));
}


jb_Any ShadowRoot_onslotchange(const ShadowRoot *self) {
    return em_Val_as(jb_Any, em_Val_get(DocumentFragment_as_val(self->inner), "onslotchange"));
}


void ShadowRoot_set_onslotchange(ShadowRoot* self, const jb_Any* value) {
    em_Val_set(DocumentFragment_as_val(self->inner), "onslotchange", value);
}


jb_Undefined ShadowRoot_setHTMLUnsafe(ShadowRoot* self , const jb_Any* html) {
    return em_Val_as(jb_Undefined, em_Val_call(DocumentFragment_as_val(self->inner), "setHTMLUnsafe", em_Val_from(html)));
}


jb_DOMString ShadowRoot_getHTML(ShadowRoot* self ) {
    return em_Val_as(jb_DOMString, em_Val_call(DocumentFragment_as_val(self->inner), "getHTML"));
}


jb_DOMString ShadowRoot_getHTML(ShadowRoot* self , const GetHTMLOptions* options) {
    return em_Val_as(jb_DOMString, em_Val_call(DocumentFragment_as_val(self->inner), "getHTML", em_Val_from(options)));
}


jb_Any ShadowRoot_innerHTML(const ShadowRoot *self) {
    return em_Val_as(jb_Any, em_Val_get(DocumentFragment_as_val(self->inner), "innerHTML"));
}


void ShadowRoot_set_innerHTML(ShadowRoot* self, const jb_Any* value) {
    em_Val_set(DocumentFragment_as_val(self->inner), "innerHTML", value);
}


jb_Sequence ShadowRoot_getAnimations(ShadowRoot* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(DocumentFragment_as_val(self->inner), "getAnimations"));
}

