#include <webbind/HTMLBaseElement.h>


DEFINE_EMLITE_TYPE(HTMLBaseElement, HTMLElement);


HTMLBaseElement HTMLBaseElement_new() : HTMLElement(em_Val_global("HTMLBaseElement").new_()) {
        return HTMLBaseElement(em_Val_new(em_Val_global("HTMLBaseElement", ));
      }


jb_USVString HTMLBaseElement_href(const HTMLBaseElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "href"));
}


void HTMLBaseElement_set_href(HTMLBaseElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "href", value);
}


jb_DOMString HTMLBaseElement_target(const HTMLBaseElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "target"));
}


void HTMLBaseElement_set_target(HTMLBaseElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "target", value);
}

