#include <webbind/HTMLDataListElement.h>
#include <webbind/HTMLCollection.h>


DEFINE_EMLITE_TYPE(HTMLDataListElement, HTMLElement);


HTMLDataListElement HTMLDataListElement_new() : HTMLElement(em_Val_global("HTMLDataListElement").new_()) {
        return HTMLDataListElement(em_Val_new(em_Val_global("HTMLDataListElement", ));
      }


HTMLCollection HTMLDataListElement_options(const HTMLDataListElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), "options"));
}

