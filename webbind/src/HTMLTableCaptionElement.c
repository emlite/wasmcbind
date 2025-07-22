#include <webbind/HTMLTableCaptionElement.h>


DEFINE_EMLITE_TYPE(HTMLTableCaptionElement, HTMLElement);


HTMLTableCaptionElement HTMLTableCaptionElement_new() : HTMLElement(em_Val_global("HTMLTableCaptionElement").new_()) {
        return HTMLTableCaptionElement(em_Val_new(em_Val_global("HTMLTableCaptionElement", ));
      }


jb_DOMString HTMLTableCaptionElement_align(const HTMLTableCaptionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLTableCaptionElement_set_align(HTMLTableCaptionElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}

