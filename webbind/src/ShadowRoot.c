#include <webbind/ShadowRoot.h>
#include <webbind/Element.h>
#include <webbind/Animation.h>


DEFINE_EMLITE_TYPE(ShadowRoot, DocumentFragment);


ShadowRootMode ShadowRoot_mode(const ShadowRoot *self) {
    return em_Val_as(ShadowRootMode, em_Val_get(DocumentFragment_as_val(self->inner), em_Val_from("mode")));
}


bool ShadowRoot_delegatesFocus(const ShadowRoot *self) {
    return em_Val_as(bool, em_Val_get(DocumentFragment_as_val(self->inner), em_Val_from("delegatesFocus")));
}


SlotAssignmentMode ShadowRoot_slotAssignment(const ShadowRoot *self) {
    return em_Val_as(SlotAssignmentMode, em_Val_get(DocumentFragment_as_val(self->inner), em_Val_from("slotAssignment")));
}


bool ShadowRoot_clonable(const ShadowRoot *self) {
    return em_Val_as(bool, em_Val_get(DocumentFragment_as_val(self->inner), em_Val_from("clonable")));
}


bool ShadowRoot_serializable(const ShadowRoot *self) {
    return em_Val_as(bool, em_Val_get(DocumentFragment_as_val(self->inner), em_Val_from("serializable")));
}


Element ShadowRoot_host(const ShadowRoot *self) {
    return em_Val_as(Element, em_Val_get(DocumentFragment_as_val(self->inner), em_Val_from("host")));
}


jb_Any ShadowRoot_onslotchange(const ShadowRoot *self) {
    return em_Val_as(jb_Any, em_Val_get(DocumentFragment_as_val(self->inner), em_Val_from("onslotchange")));
}


void ShadowRoot_set_onslotchange(ShadowRoot* self, jb_Any * value) {
    em_Val_set(DocumentFragment_as_val(self->inner), em_Val_from("onslotchange"), em_Val_from(value));
}


jb_Undefined ShadowRoot_setHTMLUnsafe(ShadowRoot* self , jb_Any * html) {
    return em_Val_as(jb_Undefined, em_Val_call(DocumentFragment_as_val(self->inner), "setHTMLUnsafe", em_Val_from(html)));
}


jb_String ShadowRoot_getHTML0(ShadowRoot* self ) {
    return em_Val_as(jb_String, em_Val_call(DocumentFragment_as_val(self->inner), "getHTML"));
}


jb_String ShadowRoot_getHTML1(ShadowRoot* self , GetHTMLOptions * options) {
    return em_Val_as(jb_String, em_Val_call(DocumentFragment_as_val(self->inner), "getHTML", em_Val_from(options)));
}


jb_Any ShadowRoot_innerHTML(const ShadowRoot *self) {
    return em_Val_as(jb_Any, em_Val_get(DocumentFragment_as_val(self->inner), em_Val_from("innerHTML")));
}


void ShadowRoot_set_innerHTML(ShadowRoot* self, jb_Any * value) {
    em_Val_set(DocumentFragment_as_val(self->inner), em_Val_from("innerHTML"), em_Val_from(value));
}


jb_Array ShadowRoot_getAnimations(ShadowRoot* self ) {
    return em_Val_as(jb_Array, em_Val_call(DocumentFragment_as_val(self->inner), "getAnimations"));
}

