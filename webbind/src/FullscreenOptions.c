#include <webbind/FullscreenOptions.h>

#include <webbind/ScreenDetailed.h>

DEFINE_EMLITE_TYPE(FullscreenOptions, em_Val);


ScreenDetailed FullscreenOptions_screen(const FullscreenOptions *self) {
    return em_Val_as(ScreenDetailed, em_Val_get(em_Val_as_val(self->inner), em_Val_from("screen")));
}


void FullscreenOptions_set_screen(FullscreenOptions* self, ScreenDetailed * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("screen"), em_Val_from(value));
}


FullscreenOptions FullscreenOptions_new() {
    em_Val obj = em_Val_object();
    return FullscreenOptions_from_val(&obj);
}

