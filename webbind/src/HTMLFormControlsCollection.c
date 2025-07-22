#include <webbind/HTMLFormControlsCollection.h>


DEFINE_EMLITE_TYPE(HTMLFormControlsCollection, HTMLCollection);


jb_Any HTMLFormControlsCollection_namedItem(HTMLFormControlsCollection* self , jb_DOMString * name) {
    return em_Val_as(jb_Any, em_Val_call(HTMLCollection_as_val(self->inner), "namedItem", em_Val_from(name)));
}

