#include <webbind/HTMLCollection.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(HTMLCollection, em_Val);


unsigned long HTMLCollection_length(const HTMLCollection *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


Element HTMLCollection_item(HTMLCollection* self , unsigned long index) {
    return em_Val_as(Element, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


Element HTMLCollection_namedItem(HTMLCollection* self , jb_DOMString * name) {
    return em_Val_as(Element, em_Val_call(em_Val_as_val(self->inner), "namedItem", em_Val_from(name)));
}

