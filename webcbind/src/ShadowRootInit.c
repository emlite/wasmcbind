#include <webcbind/ShadowRootInit.h>

#include <webcbind/CustomElementRegistry.h>

DEFINE_EMLITE_TYPE(ShadowRootInit, em_Val);


ShadowRootMode ShadowRootInit_mode(const ShadowRootInit *self) {
    return em_Val_as(ShadowRootMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void ShadowRootInit_set_mode(ShadowRootInit* self, ShadowRootMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


bool ShadowRootInit_delegatesFocus(const ShadowRootInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("delegatesFocus")));
}


void ShadowRootInit_set_delegatesFocus(ShadowRootInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("delegatesFocus"), em_Val_from(value));
}


SlotAssignmentMode ShadowRootInit_slotAssignment(const ShadowRootInit *self) {
    return em_Val_as(SlotAssignmentMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("slotAssignment")));
}


void ShadowRootInit_set_slotAssignment(ShadowRootInit* self, SlotAssignmentMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("slotAssignment"), em_Val_from(value));
}


bool ShadowRootInit_clonable(const ShadowRootInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clonable")));
}


void ShadowRootInit_set_clonable(ShadowRootInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clonable"), em_Val_from(value));
}


bool ShadowRootInit_serializable(const ShadowRootInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serializable")));
}


void ShadowRootInit_set_serializable(ShadowRootInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("serializable"), em_Val_from(value));
}


CustomElementRegistry ShadowRootInit_customElementRegistry(const ShadowRootInit *self) {
    return em_Val_as(CustomElementRegistry, em_Val_get(em_Val_as_val(self->inner), em_Val_from("customElementRegistry")));
}


void ShadowRootInit_set_customElementRegistry(ShadowRootInit* self, CustomElementRegistry * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("customElementRegistry"), em_Val_from(value));
}


ShadowRootInit ShadowRootInit_new() {
    em_Val obj = em_Val_object();
    return ShadowRootInit_from_val(&obj);
}

