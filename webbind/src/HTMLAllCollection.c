#include <webbind/HTMLAllCollection.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(HTMLAllCollection, em_Val);


unsigned long HTMLAllCollection_length(const HTMLAllCollection *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


jb_Any HTMLAllCollection_namedItem(HTMLAllCollection* self , jb_String * name) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "namedItem", em_Val_from(name)));
}


jb_Any HTMLAllCollection_item0(HTMLAllCollection* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "item"));
}


jb_Any HTMLAllCollection_item1(HTMLAllCollection* self , jb_String * nameOrIndex) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(nameOrIndex)));
}

