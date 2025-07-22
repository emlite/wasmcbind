#include <webbind/ScreenDetails.h>
#include <webbind/ScreenDetailed.h>


DEFINE_EMLITE_TYPE(ScreenDetails, EventTarget);


jb_FrozenArray ScreenDetails_screens(const ScreenDetails *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(EventTarget_as_val(self->inner), "screens"));
}


ScreenDetailed ScreenDetails_currentScreen(const ScreenDetails *self) {
    return em_Val_as(ScreenDetailed, em_Val_get(EventTarget_as_val(self->inner), "currentScreen"));
}


jb_Any ScreenDetails_onscreenschange(const ScreenDetails *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onscreenschange"));
}


void ScreenDetails_set_onscreenschange(ScreenDetails* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onscreenschange", value);
}


jb_Any ScreenDetails_oncurrentscreenchange(const ScreenDetails *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oncurrentscreenchange"));
}


void ScreenDetails_set_oncurrentscreenchange(ScreenDetails* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oncurrentscreenchange", value);
}

