#include <webbind/HTMLMapElement.h>
#include <webbind/HTMLCollection.h>


DEFINE_EMLITE_TYPE(HTMLMapElement, HTMLElement);


HTMLMapElement HTMLMapElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLMapElement") );
        return HTMLMapElement_from_val(&vv);
      }


jb_DOMString HTMLMapElement_name(const HTMLMapElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLMapElement_set_name(HTMLMapElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


HTMLCollection HTMLMapElement_areas(const HTMLMapElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("areas")));
}

