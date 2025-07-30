#include <webbind/HTMLHtmlElement.h>


DEFINE_EMLITE_TYPE(HTMLHtmlElement, HTMLElement);


HTMLHtmlElement HTMLHtmlElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLHtmlElement") );
        return HTMLHtmlElement_from_val(&vv);
      }


jb_String HTMLHtmlElement_version(const HTMLHtmlElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("version")));
}


void HTMLHtmlElement_set_version(HTMLHtmlElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("version"), em_Val_from(value));
}

