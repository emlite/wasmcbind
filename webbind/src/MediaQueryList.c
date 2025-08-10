#include <webbind/MediaQueryList.h>

DEFINE_EMLITE_TYPE(MediaQueryList, EventTarget);


jb_String MediaQueryList_media(const MediaQueryList *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("media")));
}


bool MediaQueryList_matches(const MediaQueryList *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("matches")));
}


jb_Undefined MediaQueryList_addListener(MediaQueryList* self , jb_Function * callback) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "addListener", em_Val_from(callback)));
}


jb_Undefined MediaQueryList_removeListener(MediaQueryList* self , jb_Function * callback) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "removeListener", em_Val_from(callback)));
}


jb_Any MediaQueryList_onchange(const MediaQueryList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchange")));
}


void MediaQueryList_set_onchange(MediaQueryList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchange"), em_Val_from(value));
}

