#include <webbind/HTMLBRElement.h>


DEFINE_EMLITE_TYPE(HTMLBRElement, HTMLElement);


HTMLBRElement HTMLBRElement_new() : HTMLElement(em_Val_global("HTMLBRElement").new_()) {
        return HTMLBRElement(em_Val_new(em_Val_global("HTMLBRElement", ));
      }


jb_DOMString HTMLBRElement_clear(const HTMLBRElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "clear"));
}


void HTMLBRElement_set_clear(HTMLBRElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "clear", value);
}

