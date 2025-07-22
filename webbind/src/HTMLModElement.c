#include <webbind/HTMLModElement.h>


DEFINE_EMLITE_TYPE(HTMLModElement, HTMLElement);


HTMLModElement HTMLModElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLModElement") );
        return HTMLModElement_from_val(&vv);
      }


jb_USVString HTMLModElement_cite(const HTMLModElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("cite")));
}


void HTMLModElement_set_cite(HTMLModElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("cite"), em_Val_from(value));
}


jb_DOMString HTMLModElement_dateTime(const HTMLModElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("dateTime")));
}


void HTMLModElement_set_dateTime(HTMLModElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("dateTime"), em_Val_from(value));
}

