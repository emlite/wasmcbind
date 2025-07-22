#include <webbind/HTMLQuoteElement.h>


DEFINE_EMLITE_TYPE(HTMLQuoteElement, HTMLElement);


HTMLQuoteElement HTMLQuoteElement_new() : HTMLElement(em_Val_global("HTMLQuoteElement").new_()) {
        return HTMLQuoteElement(em_Val_new(em_Val_global("HTMLQuoteElement", ));
      }


jb_USVString HTMLQuoteElement_cite(const HTMLQuoteElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "cite"));
}


void HTMLQuoteElement_set_cite(HTMLQuoteElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "cite", value);
}

