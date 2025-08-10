#include <webbind/HTMLDataListElement.h>

#include <webbind/HTMLCollection.h>

DEFINE_EMLITE_TYPE(HTMLDataListElement, HTMLElement);


HTMLDataListElement HTMLDataListElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLDataListElement") );
        return HTMLDataListElement_from_val(&vv);
      }


HTMLCollection HTMLDataListElement_options(const HTMLDataListElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("options")));
}

