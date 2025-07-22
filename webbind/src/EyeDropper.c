#include <webbind/EyeDropper.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(ColorSelectionResult, em_Val);


jb_DOMString ColorSelectionResult_sRGBHex(const ColorSelectionResult *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sRGBHex"));
}


void ColorSelectionResult_set_sRGBHex(ColorSelectionResult* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "sRGBHex", value);
}

DEFINE_EMLITE_TYPE(ColorSelectionOptions, em_Val);


AbortSignal ColorSelectionOptions_signal(const ColorSelectionOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void ColorSelectionOptions_set_signal(ColorSelectionOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(EyeDropper, em_Val);


EyeDropper EyeDropper_new() : em_Val(em_Val_global("EyeDropper").new_()) {
        return EyeDropper(em_Val_new(em_Val_global("EyeDropper", ));
      }


jb_Promise EyeDropper_open(EyeDropper* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "open"));
}


jb_Promise EyeDropper_open(EyeDropper* self , const ColorSelectionOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "open", em_Val_from(options)));
}

