#include <webbind/HTMLTitleElement.h>


DEFINE_EMLITE_TYPE(HTMLTitleElement, HTMLElement);


HTMLTitleElement HTMLTitleElement_new() : HTMLElement(em_Val_global("HTMLTitleElement").new_()) {
        return HTMLTitleElement(em_Val_new(em_Val_global("HTMLTitleElement", ));
      }


jb_DOMString HTMLTitleElement_text(const HTMLTitleElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "text"));
}


void HTMLTitleElement_set_text(HTMLTitleElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "text", value);
}

