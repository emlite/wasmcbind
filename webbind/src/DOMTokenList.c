#include <webbind/DOMTokenList.h>

DEFINE_EMLITE_TYPE(DOMTokenList, em_Val);


unsigned long DOMTokenList_length(const DOMTokenList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


jb_String DOMTokenList_item(DOMTokenList* self , unsigned long index) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


bool DOMTokenList_contains(DOMTokenList* self , jb_String * token) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "contains", em_Val_from(token)));
}


jb_Undefined DOMTokenList_add(DOMTokenList* self , jb_String * tokens) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(tokens)));
}


jb_Undefined DOMTokenList_remove(DOMTokenList* self , jb_String * tokens) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "remove", em_Val_from(tokens)));
}


bool DOMTokenList_toggle0(DOMTokenList* self , jb_String * token) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "toggle", em_Val_from(token)));
}


bool DOMTokenList_toggle1(DOMTokenList* self , jb_String * token, bool force) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "toggle", em_Val_from(token), em_Val_from(force)));
}


bool DOMTokenList_replace(DOMTokenList* self , jb_String * token, jb_String * newToken) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "replace", em_Val_from(token), em_Val_from(newToken)));
}


bool DOMTokenList_supports(DOMTokenList* self , jb_String * token) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "supports", em_Val_from(token)));
}


jb_String DOMTokenList_value(const DOMTokenList *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void DOMTokenList_set_value(DOMTokenList* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}

