#include <webbind/FontFaceSet.h>
#include <webbind/FontFace.h>


DEFINE_EMLITE_TYPE(FontFaceSet, EventTarget);


FontFaceSet FontFaceSet_add(FontFaceSet* self , const FontFace* font) {
    return em_Val_as(FontFaceSet, em_Val_call(EventTarget_as_val(self->inner), "add", em_Val_from(font)));
}


bool FontFaceSet_delete_(FontFaceSet* self , const FontFace* font) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "delete", em_Val_from(font)));
}


jb_Undefined FontFaceSet_clear(FontFaceSet* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clear"));
}


jb_Any FontFaceSet_onloading(const FontFaceSet *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onloading"));
}


void FontFaceSet_set_onloading(FontFaceSet* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onloading", value);
}


jb_Any FontFaceSet_onloadingdone(const FontFaceSet *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onloadingdone"));
}


void FontFaceSet_set_onloadingdone(FontFaceSet* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onloadingdone", value);
}


jb_Any FontFaceSet_onloadingerror(const FontFaceSet *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onloadingerror"));
}


void FontFaceSet_set_onloadingerror(FontFaceSet* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onloadingerror", value);
}


jb_Promise FontFaceSet_load(FontFaceSet* self , const jb_CSSOMString* font) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "load", em_Val_from(font)));
}


jb_Promise FontFaceSet_load(FontFaceSet* self , const jb_CSSOMString* font, const jb_CSSOMString* text) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "load", em_Val_from(font), em_Val_from(text)));
}


bool FontFaceSet_check(FontFaceSet* self , const jb_CSSOMString* font) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "check", em_Val_from(font)));
}


bool FontFaceSet_check(FontFaceSet* self , const jb_CSSOMString* font, const jb_CSSOMString* text) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "check", em_Val_from(font), em_Val_from(text)));
}


jb_Promise FontFaceSet_ready(const FontFaceSet *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), "ready"));
}


FontFaceSetLoadStatus FontFaceSet_status(const FontFaceSet *self) {
    return em_Val_as(FontFaceSetLoadStatus, em_Val_get(EventTarget_as_val(self->inner), "status"));
}

