#include <webbind/HTMLBaseElement.h>


DEFINE_EMLITE_TYPE(HTMLBaseElement, HTMLElement);


HTMLBaseElement HTMLBaseElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLBaseElement") );
        return HTMLBaseElement_from_val(&vv);
      }


jb_String HTMLBaseElement_href(const HTMLBaseElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("href")));
}


void HTMLBaseElement_set_href(HTMLBaseElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("href"), em_Val_from(value));
}


jb_String HTMLBaseElement_target(const HTMLBaseElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("target")));
}


void HTMLBaseElement_set_target(HTMLBaseElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("target"), em_Val_from(value));
}

