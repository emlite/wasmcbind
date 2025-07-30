#include <webbind/EyeDropper.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(ColorSelectionResult, em_Val);


jb_String ColorSelectionResult_sRGBHex(const ColorSelectionResult *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sRGBHex")));
}


void ColorSelectionResult_set_sRGBHex(ColorSelectionResult* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sRGBHex"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ColorSelectionOptions, em_Val);


AbortSignal ColorSelectionOptions_signal(const ColorSelectionOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void ColorSelectionOptions_set_signal(ColorSelectionOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(EyeDropper, em_Val);


EyeDropper EyeDropper_new() {
        em_Val vv = em_Val_new(em_Val_global("EyeDropper") );
        return EyeDropper_from_val(&vv);
      }


jb_Promise EyeDropper_open0(EyeDropper* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "open"));
}


jb_Promise EyeDropper_open1(EyeDropper* self , ColorSelectionOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "open", em_Val_from(options)));
}

