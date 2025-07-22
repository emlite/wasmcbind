#include <webbind/DOMTokenList.h>


DEFINE_EMLITE_TYPE(DOMTokenList, em_Val);


unsigned long DOMTokenList_length(const DOMTokenList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "length"));
}


jb_DOMString DOMTokenList_item(DOMTokenList* self , unsigned long index) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


bool DOMTokenList_contains(DOMTokenList* self , const jb_DOMString* token) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "contains", em_Val_from(token)));
}


jb_Undefined DOMTokenList_add(DOMTokenList* self , const jb_DOMString* tokens) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(tokens)));
}


jb_Undefined DOMTokenList_remove(DOMTokenList* self , const jb_DOMString* tokens) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "remove", em_Val_from(tokens)));
}


bool DOMTokenList_toggle(DOMTokenList* self , const jb_DOMString* token) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "toggle", em_Val_from(token)));
}


bool DOMTokenList_toggle(DOMTokenList* self , const jb_DOMString* token, bool force) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "toggle", em_Val_from(token), em_Val_from(force)));
}


bool DOMTokenList_replace(DOMTokenList* self , const jb_DOMString* token, const jb_DOMString* newToken) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "replace", em_Val_from(token), em_Val_from(newToken)));
}


bool DOMTokenList_supports(DOMTokenList* self , const jb_DOMString* token) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "supports", em_Val_from(token)));
}


jb_DOMString DOMTokenList_value(const DOMTokenList *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "value"));
}


void DOMTokenList_set_value(DOMTokenList* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "value", value);
}

