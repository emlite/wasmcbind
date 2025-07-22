#include <webbind/MediaQueryList.h>


DEFINE_EMLITE_TYPE(MediaQueryList, EventTarget);


jb_CSSOMString MediaQueryList_media(const MediaQueryList *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(EventTarget_as_val(self->inner), "media"));
}


bool MediaQueryList_matches(const MediaQueryList *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "matches"));
}


jb_Undefined MediaQueryList_addListener(MediaQueryList* self , const jb_Function* callback) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "addListener", em_Val_from(callback)));
}


jb_Undefined MediaQueryList_removeListener(MediaQueryList* self , const jb_Function* callback) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "removeListener", em_Val_from(callback)));
}


jb_Any MediaQueryList_onchange(const MediaQueryList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onchange"));
}


void MediaQueryList_set_onchange(MediaQueryList* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onchange", value);
}

