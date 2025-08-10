#include <webbind/MutationObserverInit.h>

DEFINE_EMLITE_TYPE(MutationObserverInit, em_Val);


bool MutationObserverInit_childList(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("childList")));
}


void MutationObserverInit_set_childList(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("childList"), em_Val_from(value));
}


bool MutationObserverInit_attributes(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attributes")));
}


void MutationObserverInit_set_attributes(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attributes"), em_Val_from(value));
}


bool MutationObserverInit_characterData(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("characterData")));
}


void MutationObserverInit_set_characterData(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("characterData"), em_Val_from(value));
}


bool MutationObserverInit_subtree(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("subtree")));
}


void MutationObserverInit_set_subtree(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("subtree"), em_Val_from(value));
}


bool MutationObserverInit_attributeOldValue(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attributeOldValue")));
}


void MutationObserverInit_set_attributeOldValue(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attributeOldValue"), em_Val_from(value));
}


bool MutationObserverInit_characterDataOldValue(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("characterDataOldValue")));
}


void MutationObserverInit_set_characterDataOldValue(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("characterDataOldValue"), em_Val_from(value));
}


jb_Array MutationObserverInit_attributeFilter(const MutationObserverInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attributeFilter")));
}


void MutationObserverInit_set_attributeFilter(MutationObserverInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attributeFilter"), em_Val_from(value));
}


MutationObserverInit MutationObserverInit_new() {
    em_Val obj = em_Val_object();
    return MutationObserverInit_from_val(&obj);
}

