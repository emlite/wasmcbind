#include <webbind/HTMLTimeElement.h>


DEFINE_EMLITE_TYPE(HTMLTimeElement, HTMLElement);


HTMLTimeElement HTMLTimeElement_new() : HTMLElement(em_Val_global("HTMLTimeElement").new_()) {
        return HTMLTimeElement(em_Val_new(em_Val_global("HTMLTimeElement", ));
      }


jb_DOMString HTMLTimeElement_dateTime(const HTMLTimeElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "dateTime"));
}


void HTMLTimeElement_set_dateTime(HTMLTimeElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "dateTime", value);
}

