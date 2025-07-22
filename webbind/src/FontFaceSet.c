#include <webbind/FontFaceSet.h>
#include <webbind/FontFace.h>


DEFINE_EMLITE_TYPE(FontFaceSet, EventTarget);


FontFaceSet FontFaceSet_add(FontFaceSet* self , FontFace * font) {
    return em_Val_as(FontFaceSet, em_Val_call(EventTarget_as_val(self->inner), "add", em_Val_from(font)));
}


bool FontFaceSet_delete_(FontFaceSet* self , FontFace * font) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "delete", em_Val_from(font)));
}


jb_Undefined FontFaceSet_clear(FontFaceSet* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clear"));
}


jb_Any FontFaceSet_onloading(const FontFaceSet *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onloading")));
}


void FontFaceSet_set_onloading(FontFaceSet* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onloading"), em_Val_from(value));
}


jb_Any FontFaceSet_onloadingdone(const FontFaceSet *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onloadingdone")));
}


void FontFaceSet_set_onloadingdone(FontFaceSet* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onloadingdone"), em_Val_from(value));
}


jb_Any FontFaceSet_onloadingerror(const FontFaceSet *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onloadingerror")));
}


void FontFaceSet_set_onloadingerror(FontFaceSet* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onloadingerror"), em_Val_from(value));
}


jb_Promise FontFaceSet_load0(FontFaceSet* self , jb_CSSOMString * font) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "load", em_Val_from(font)));
}


jb_Promise FontFaceSet_load1(FontFaceSet* self , jb_CSSOMString * font, jb_CSSOMString * text) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "load", em_Val_from(font), em_Val_from(text)));
}


bool FontFaceSet_check0(FontFaceSet* self , jb_CSSOMString * font) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "check", em_Val_from(font)));
}


bool FontFaceSet_check1(FontFaceSet* self , jb_CSSOMString * font, jb_CSSOMString * text) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "check", em_Val_from(font), em_Val_from(text)));
}


jb_Promise FontFaceSet_ready(const FontFaceSet *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ready")));
}


FontFaceSetLoadStatus FontFaceSet_status(const FontFaceSet *self) {
    return em_Val_as(FontFaceSetLoadStatus, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("status")));
}

