#include <webbind/HTMLMapElement.h>
#include <webbind/HTMLCollection.h>


DEFINE_EMLITE_TYPE(HTMLMapElement, HTMLElement);


HTMLMapElement HTMLMapElement_new() : HTMLElement(em_Val_global("HTMLMapElement").new_()) {
        return HTMLMapElement(em_Val_new(em_Val_global("HTMLMapElement", ));
      }


jb_DOMString HTMLMapElement_name(const HTMLMapElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLMapElement_set_name(HTMLMapElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


HTMLCollection HTMLMapElement_areas(const HTMLMapElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), "areas"));
}

