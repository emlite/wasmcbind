#include <webbind/HTMLStyleElement.h>
#include <webbind/DOMTokenList.h>
#include <webbind/CSSStyleSheet.h>


DEFINE_EMLITE_TYPE(HTMLStyleElement, HTMLElement);


HTMLStyleElement HTMLStyleElement_new() : HTMLElement(em_Val_global("HTMLStyleElement").new_()) {
        return HTMLStyleElement(em_Val_new(em_Val_global("HTMLStyleElement", ));
      }


bool HTMLStyleElement_disabled(const HTMLStyleElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "disabled"));
}


void HTMLStyleElement_set_disabled(HTMLStyleElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "disabled", value);
}


jb_DOMString HTMLStyleElement_media(const HTMLStyleElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "media"));
}


void HTMLStyleElement_set_media(HTMLStyleElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "media", value);
}


DOMTokenList HTMLStyleElement_blocking(const HTMLStyleElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), "blocking"));
}


jb_DOMString HTMLStyleElement_type(const HTMLStyleElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLStyleElement_set_type(HTMLStyleElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}


CSSStyleSheet HTMLStyleElement_sheet(const HTMLStyleElement *self) {
    return em_Val_as(CSSStyleSheet, em_Val_get(HTMLElement_as_val(self->inner), "sheet"));
}

