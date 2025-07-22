#include <webbind/HTMLHtmlElement.h>


DEFINE_EMLITE_TYPE(HTMLHtmlElement, HTMLElement);


HTMLHtmlElement HTMLHtmlElement_new() : HTMLElement(em_Val_global("HTMLHtmlElement").new_()) {
        return HTMLHtmlElement(em_Val_new(em_Val_global("HTMLHtmlElement", ));
      }


jb_DOMString HTMLHtmlElement_version(const HTMLHtmlElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "version"));
}


void HTMLHtmlElement_set_version(HTMLHtmlElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "version", value);
}

