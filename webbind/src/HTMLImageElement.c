#include <webbind/HTMLImageElement.h>


DEFINE_EMLITE_TYPE(HTMLImageElement, HTMLElement);


HTMLImageElement HTMLImageElement_new() : HTMLElement(em_Val_global("HTMLImageElement").new_()) {
        return HTMLImageElement(em_Val_new(em_Val_global("HTMLImageElement", ));
      }


jb_DOMString HTMLImageElement_alt(const HTMLImageElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "alt"));
}


void HTMLImageElement_set_alt(HTMLImageElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "alt", value);
}


jb_USVString HTMLImageElement_src(const HTMLImageElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "src"));
}


void HTMLImageElement_set_src(HTMLImageElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "src", value);
}


jb_USVString HTMLImageElement_srcset(const HTMLImageElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "srcset"));
}


void HTMLImageElement_set_srcset(HTMLImageElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "srcset", value);
}


jb_DOMString HTMLImageElement_sizes(const HTMLImageElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "sizes"));
}


void HTMLImageElement_set_sizes(HTMLImageElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "sizes", value);
}


jb_DOMString HTMLImageElement_crossOrigin(const HTMLImageElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "crossOrigin"));
}


void HTMLImageElement_set_crossOrigin(HTMLImageElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "crossOrigin", value);
}


jb_DOMString HTMLImageElement_useMap(const HTMLImageElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "useMap"));
}


void HTMLImageElement_set_useMap(HTMLImageElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "useMap", value);
}


bool HTMLImageElement_isMap(const HTMLImageElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "isMap"));
}


void HTMLImageElement_set_isMap(HTMLImageElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "isMap", value);
}


unsigned long HTMLImageElement_width(const HTMLImageElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLImageElement_set_width(HTMLImageElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}


unsigned long HTMLImageElement_height(const HTMLImageElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "height"));
}


void HTMLImageElement_set_height(HTMLImageElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "height", value);
}


unsigned long HTMLImageElement_naturalWidth(const HTMLImageElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "naturalWidth"));
}


unsigned long HTMLImageElement_naturalHeight(const HTMLImageElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "naturalHeight"));
}


bool HTMLImageElement_complete(const HTMLImageElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "complete"));
}


jb_USVString HTMLImageElement_currentSrc(const HTMLImageElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "currentSrc"));
}


jb_DOMString HTMLImageElement_referrerPolicy(const HTMLImageElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "referrerPolicy"));
}


void HTMLImageElement_set_referrerPolicy(HTMLImageElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "referrerPolicy", value);
}


jb_DOMString HTMLImageElement_decoding(const HTMLImageElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "decoding"));
}


void HTMLImageElement_set_decoding(HTMLImageElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "decoding", value);
}


jb_DOMString HTMLImageElement_loading(const HTMLImageElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "loading"));
}


void HTMLImageElement_set_loading(HTMLImageElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "loading", value);
}


jb_DOMString HTMLImageElement_fetchPriority(const HTMLImageElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "fetchPriority"));
}


void HTMLImageElement_set_fetchPriority(HTMLImageElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "fetchPriority", value);
}


jb_Promise HTMLImageElement_decode(HTMLImageElement* self ) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLElement_as_val(self->inner), "decode"));
}


long HTMLImageElement_x(const HTMLImageElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "x"));
}


long HTMLImageElement_y(const HTMLImageElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "y"));
}


jb_DOMString HTMLImageElement_name(const HTMLImageElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLImageElement_set_name(HTMLImageElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


jb_USVString HTMLImageElement_lowsrc(const HTMLImageElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "lowsrc"));
}


void HTMLImageElement_set_lowsrc(HTMLImageElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "lowsrc", value);
}


jb_DOMString HTMLImageElement_align(const HTMLImageElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLImageElement_set_align(HTMLImageElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}


unsigned long HTMLImageElement_hspace(const HTMLImageElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "hspace"));
}


void HTMLImageElement_set_hspace(HTMLImageElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "hspace", value);
}


unsigned long HTMLImageElement_vspace(const HTMLImageElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "vspace"));
}


void HTMLImageElement_set_vspace(HTMLImageElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "vspace", value);
}


jb_USVString HTMLImageElement_longDesc(const HTMLImageElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "longDesc"));
}


void HTMLImageElement_set_longDesc(HTMLImageElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "longDesc", value);
}


jb_DOMString HTMLImageElement_border(const HTMLImageElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "border"));
}


void HTMLImageElement_set_border(HTMLImageElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "border", value);
}


jb_USVString HTMLImageElement_attributionSrc(const HTMLImageElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "attributionSrc"));
}


void HTMLImageElement_set_attributionSrc(HTMLImageElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "attributionSrc", value);
}


bool HTMLImageElement_sharedStorageWritable(const HTMLImageElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "sharedStorageWritable"));
}


void HTMLImageElement_set_sharedStorageWritable(HTMLImageElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "sharedStorageWritable", value);
}

