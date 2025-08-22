#include <webcbind/HTMLOptionsCollection.h>

#include <webcbind/HTMLOptionElement.h>

DEFINE_EMLITE_TYPE(HTMLOptionsCollection, HTMLCollection);


unsigned long HTMLOptionsCollection_length(const HTMLOptionsCollection *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLCollection_as_val(self->inner), em_Val_from("length")));
}


void HTMLOptionsCollection_set_length(HTMLOptionsCollection* self, unsigned long value) {
    em_Val_set(HTMLCollection_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


jb_Undefined HTMLOptionsCollection_add0(HTMLOptionsCollection* self , jb_Any * element) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLCollection_as_val(self->inner), "add", em_Val_from(element)));
}


jb_Undefined HTMLOptionsCollection_add1(HTMLOptionsCollection* self , jb_Any * element, jb_Any * before) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLCollection_as_val(self->inner), "add", em_Val_from(element), em_Val_from(before)));
}


jb_Undefined HTMLOptionsCollection_remove(HTMLOptionsCollection* self , long index) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLCollection_as_val(self->inner), "remove", em_Val_from(index)));
}


long HTMLOptionsCollection_selectedIndex(const HTMLOptionsCollection *self) {
    return em_Val_as(long, em_Val_get(HTMLCollection_as_val(self->inner), em_Val_from("selectedIndex")));
}


void HTMLOptionsCollection_set_selectedIndex(HTMLOptionsCollection* self, long value) {
    em_Val_set(HTMLCollection_as_val(self->inner), em_Val_from("selectedIndex"), em_Val_from(value));
}

