#include <webcbind/ScreenDetails.h>

#include <webcbind/ScreenDetailed.h>

DEFINE_EMLITE_TYPE(ScreenDetails, EventTarget);


jb_Array ScreenDetails_screens(const ScreenDetails *self) {
    return em_Val_as(jb_Array, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("screens")));
}


ScreenDetailed ScreenDetails_currentScreen(const ScreenDetails *self) {
    return em_Val_as(ScreenDetailed, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("currentScreen")));
}


jb_Any ScreenDetails_onscreenschange(const ScreenDetails *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onscreenschange")));
}


void ScreenDetails_set_onscreenschange(ScreenDetails* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onscreenschange"), em_Val_from(value));
}


jb_Any ScreenDetails_oncurrentscreenchange(const ScreenDetails *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncurrentscreenchange")));
}


void ScreenDetails_set_oncurrentscreenchange(ScreenDetails* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncurrentscreenchange"), em_Val_from(value));
}

