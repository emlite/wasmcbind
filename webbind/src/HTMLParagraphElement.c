#include <webbind/HTMLParagraphElement.h>


DEFINE_EMLITE_TYPE(HTMLParagraphElement, HTMLElement);


HTMLParagraphElement HTMLParagraphElement_new() : HTMLElement(em_Val_global("HTMLParagraphElement").new_()) {
        return HTMLParagraphElement(em_Val_new(em_Val_global("HTMLParagraphElement", ));
      }


jb_DOMString HTMLParagraphElement_align(const HTMLParagraphElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLParagraphElement_set_align(HTMLParagraphElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}

