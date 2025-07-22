#include <webbind/HTMLHeadingElement.h>


DEFINE_EMLITE_TYPE(HTMLHeadingElement, HTMLElement);


HTMLHeadingElement HTMLHeadingElement_new() : HTMLElement(em_Val_global("HTMLHeadingElement").new_()) {
        return HTMLHeadingElement(em_Val_new(em_Val_global("HTMLHeadingElement", ));
      }


jb_DOMString HTMLHeadingElement_align(const HTMLHeadingElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLHeadingElement_set_align(HTMLHeadingElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}

