#include <webbind/HTMLModElement.h>


DEFINE_EMLITE_TYPE(HTMLModElement, HTMLElement);


HTMLModElement HTMLModElement_new() : HTMLElement(em_Val_global("HTMLModElement").new_()) {
        return HTMLModElement(em_Val_new(em_Val_global("HTMLModElement", ));
      }


jb_USVString HTMLModElement_cite(const HTMLModElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "cite"));
}


void HTMLModElement_set_cite(HTMLModElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "cite", value);
}


jb_DOMString HTMLModElement_dateTime(const HTMLModElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "dateTime"));
}


void HTMLModElement_set_dateTime(HTMLModElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "dateTime", value);
}

