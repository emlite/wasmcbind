#include <webbind/HTMLLinkElement.h>
#include <webbind/DOMTokenList.h>
#include <webbind/CSSStyleSheet.h>


DEFINE_EMLITE_TYPE(HTMLLinkElement, HTMLElement);


HTMLLinkElement HTMLLinkElement_new() : HTMLElement(em_Val_global("HTMLLinkElement").new_()) {
        return HTMLLinkElement(em_Val_new(em_Val_global("HTMLLinkElement", ));
      }


jb_USVString HTMLLinkElement_href(const HTMLLinkElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "href"));
}


void HTMLLinkElement_set_href(HTMLLinkElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "href", value);
}


jb_DOMString HTMLLinkElement_crossOrigin(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "crossOrigin"));
}


void HTMLLinkElement_set_crossOrigin(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "crossOrigin", value);
}


jb_DOMString HTMLLinkElement_rel(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "rel"));
}


void HTMLLinkElement_set_rel(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "rel", value);
}


jb_DOMString HTMLLinkElement_as(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "as"));
}


void HTMLLinkElement_set_as(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "as", value);
}


DOMTokenList HTMLLinkElement_relList(const HTMLLinkElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), "relList"));
}


jb_DOMString HTMLLinkElement_media(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "media"));
}


void HTMLLinkElement_set_media(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "media", value);
}


jb_DOMString HTMLLinkElement_integrity(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "integrity"));
}


void HTMLLinkElement_set_integrity(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "integrity", value);
}


jb_DOMString HTMLLinkElement_hreflang(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "hreflang"));
}


void HTMLLinkElement_set_hreflang(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "hreflang", value);
}


jb_DOMString HTMLLinkElement_type(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLLinkElement_set_type(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}


DOMTokenList HTMLLinkElement_sizes(const HTMLLinkElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), "sizes"));
}


jb_USVString HTMLLinkElement_imageSrcset(const HTMLLinkElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "imageSrcset"));
}


void HTMLLinkElement_set_imageSrcset(HTMLLinkElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "imageSrcset", value);
}


jb_DOMString HTMLLinkElement_imageSizes(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "imageSizes"));
}


void HTMLLinkElement_set_imageSizes(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "imageSizes", value);
}


jb_DOMString HTMLLinkElement_referrerPolicy(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "referrerPolicy"));
}


void HTMLLinkElement_set_referrerPolicy(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "referrerPolicy", value);
}


DOMTokenList HTMLLinkElement_blocking(const HTMLLinkElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), "blocking"));
}


bool HTMLLinkElement_disabled(const HTMLLinkElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "disabled"));
}


void HTMLLinkElement_set_disabled(HTMLLinkElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "disabled", value);
}


jb_DOMString HTMLLinkElement_fetchPriority(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "fetchPriority"));
}


void HTMLLinkElement_set_fetchPriority(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "fetchPriority", value);
}


jb_DOMString HTMLLinkElement_charset(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "charset"));
}


void HTMLLinkElement_set_charset(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "charset", value);
}


jb_DOMString HTMLLinkElement_rev(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "rev"));
}


void HTMLLinkElement_set_rev(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "rev", value);
}


jb_DOMString HTMLLinkElement_target(const HTMLLinkElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "target"));
}


void HTMLLinkElement_set_target(HTMLLinkElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "target", value);
}


CSSStyleSheet HTMLLinkElement_sheet(const HTMLLinkElement *self) {
    return em_Val_as(CSSStyleSheet, em_Val_get(HTMLElement_as_val(self->inner), "sheet"));
}

