#include <webcbind/HTMLHeadingElement.h>

DEFINE_EMLITE_TYPE(HTMLHeadingElement, HTMLElement);


HTMLHeadingElement HTMLHeadingElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLHeadingElement") );
        return HTMLHeadingElement_from_val(&vv);
      }


jb_String HTMLHeadingElement_align(const HTMLHeadingElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLHeadingElement_set_align(HTMLHeadingElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}

