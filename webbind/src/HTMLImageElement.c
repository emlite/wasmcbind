#include <webbind/HTMLImageElement.h>


DEFINE_EMLITE_TYPE(HTMLImageElement, HTMLElement);


HTMLImageElement HTMLImageElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLImageElement") );
        return HTMLImageElement_from_val(&vv);
      }


jb_String HTMLImageElement_alt(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("alt")));
}


void HTMLImageElement_set_alt(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("alt"), em_Val_from(value));
}


jb_String HTMLImageElement_src(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("src")));
}


void HTMLImageElement_set_src(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_String HTMLImageElement_srcset(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("srcset")));
}


void HTMLImageElement_set_srcset(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("srcset"), em_Val_from(value));
}


jb_String HTMLImageElement_sizes(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("sizes")));
}


void HTMLImageElement_set_sizes(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("sizes"), em_Val_from(value));
}


jb_String HTMLImageElement_crossOrigin(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("crossOrigin")));
}


void HTMLImageElement_set_crossOrigin(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("crossOrigin"), em_Val_from(value));
}


jb_String HTMLImageElement_useMap(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("useMap")));
}


void HTMLImageElement_set_useMap(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("useMap"), em_Val_from(value));
}


bool HTMLImageElement_isMap(const HTMLImageElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("isMap")));
}


void HTMLImageElement_set_isMap(HTMLImageElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("isMap"), em_Val_from(value));
}


unsigned long HTMLImageElement_width(const HTMLImageElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLImageElement_set_width(HTMLImageElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


unsigned long HTMLImageElement_height(const HTMLImageElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("height")));
}


void HTMLImageElement_set_height(HTMLImageElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


unsigned long HTMLImageElement_naturalWidth(const HTMLImageElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("naturalWidth")));
}


unsigned long HTMLImageElement_naturalHeight(const HTMLImageElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("naturalHeight")));
}


bool HTMLImageElement_complete(const HTMLImageElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("complete")));
}


jb_String HTMLImageElement_currentSrc(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("currentSrc")));
}


jb_String HTMLImageElement_referrerPolicy(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy")));
}


void HTMLImageElement_set_referrerPolicy(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy"), em_Val_from(value));
}


jb_String HTMLImageElement_decoding(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("decoding")));
}


void HTMLImageElement_set_decoding(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("decoding"), em_Val_from(value));
}


jb_String HTMLImageElement_loading(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("loading")));
}


void HTMLImageElement_set_loading(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("loading"), em_Val_from(value));
}


jb_String HTMLImageElement_fetchPriority(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("fetchPriority")));
}


void HTMLImageElement_set_fetchPriority(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("fetchPriority"), em_Val_from(value));
}


jb_Promise HTMLImageElement_decode(HTMLImageElement* self ) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLElement_as_val(self->inner), "decode"));
}


long HTMLImageElement_x(const HTMLImageElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("x")));
}


long HTMLImageElement_y(const HTMLImageElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("y")));
}


jb_String HTMLImageElement_name(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLImageElement_set_name(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String HTMLImageElement_lowsrc(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("lowsrc")));
}


void HTMLImageElement_set_lowsrc(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("lowsrc"), em_Val_from(value));
}


jb_String HTMLImageElement_align(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLImageElement_set_align(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


unsigned long HTMLImageElement_hspace(const HTMLImageElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("hspace")));
}


void HTMLImageElement_set_hspace(HTMLImageElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("hspace"), em_Val_from(value));
}


unsigned long HTMLImageElement_vspace(const HTMLImageElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("vspace")));
}


void HTMLImageElement_set_vspace(HTMLImageElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("vspace"), em_Val_from(value));
}


jb_String HTMLImageElement_longDesc(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("longDesc")));
}


void HTMLImageElement_set_longDesc(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("longDesc"), em_Val_from(value));
}


jb_String HTMLImageElement_border(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("border")));
}


void HTMLImageElement_set_border(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("border"), em_Val_from(value));
}


jb_String HTMLImageElement_attributionSrc(const HTMLImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("attributionSrc")));
}


void HTMLImageElement_set_attributionSrc(HTMLImageElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("attributionSrc"), em_Val_from(value));
}


bool HTMLImageElement_sharedStorageWritable(const HTMLImageElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("sharedStorageWritable")));
}


void HTMLImageElement_set_sharedStorageWritable(HTMLImageElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("sharedStorageWritable"), em_Val_from(value));
}

