#include <webbind/HTMLScriptElement.h>
#include <webbind/DOMTokenList.h>


DEFINE_EMLITE_TYPE(HTMLScriptElement, HTMLElement);


HTMLScriptElement HTMLScriptElement_new() : HTMLElement(em_Val_global("HTMLScriptElement").new_()) {
        return HTMLScriptElement(em_Val_new(em_Val_global("HTMLScriptElement", ));
      }


jb_DOMString HTMLScriptElement_type(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLScriptElement_set_type(HTMLScriptElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}


jb_USVString HTMLScriptElement_src(const HTMLScriptElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "src"));
}


void HTMLScriptElement_set_src(HTMLScriptElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "src", value);
}


bool HTMLScriptElement_noModule(const HTMLScriptElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "noModule"));
}


void HTMLScriptElement_set_noModule(HTMLScriptElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "noModule", value);
}


bool HTMLScriptElement_async(const HTMLScriptElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "async"));
}


void HTMLScriptElement_set_async(HTMLScriptElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "async", value);
}


bool HTMLScriptElement_defer(const HTMLScriptElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "defer"));
}


void HTMLScriptElement_set_defer(HTMLScriptElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "defer", value);
}


DOMTokenList HTMLScriptElement_blocking(const HTMLScriptElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), "blocking"));
}


jb_DOMString HTMLScriptElement_crossOrigin(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "crossOrigin"));
}


void HTMLScriptElement_set_crossOrigin(HTMLScriptElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "crossOrigin", value);
}


jb_DOMString HTMLScriptElement_referrerPolicy(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "referrerPolicy"));
}


void HTMLScriptElement_set_referrerPolicy(HTMLScriptElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "referrerPolicy", value);
}


jb_DOMString HTMLScriptElement_integrity(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "integrity"));
}


void HTMLScriptElement_set_integrity(HTMLScriptElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "integrity", value);
}


jb_DOMString HTMLScriptElement_fetchPriority(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "fetchPriority"));
}


void HTMLScriptElement_set_fetchPriority(HTMLScriptElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "fetchPriority", value);
}


jb_DOMString HTMLScriptElement_text(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "text"));
}


void HTMLScriptElement_set_text(HTMLScriptElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "text", value);
}


bool HTMLScriptElement_supports(HTMLScriptElement* self , const jb_DOMString* type) {
    return em_Val_as(bool, em_Val_call(em_Val_global("htmlscriptelement"), "supports", em_Val_from(type)));
}


jb_DOMString HTMLScriptElement_charset(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "charset"));
}


void HTMLScriptElement_set_charset(HTMLScriptElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "charset", value);
}


jb_DOMString HTMLScriptElement_event(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "event"));
}


void HTMLScriptElement_set_event(HTMLScriptElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "event", value);
}


jb_DOMString HTMLScriptElement_htmlFor(const HTMLScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "htmlFor"));
}


void HTMLScriptElement_set_htmlFor(HTMLScriptElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "htmlFor", value);
}


jb_USVString HTMLScriptElement_attributionSrc(const HTMLScriptElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "attributionSrc"));
}


void HTMLScriptElement_set_attributionSrc(HTMLScriptElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "attributionSrc", value);
}

