#include <webbind/ColorSelectionOptions.h>

#include <webbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(ColorSelectionOptions, em_Val);


AbortSignal ColorSelectionOptions_signal(const ColorSelectionOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void ColorSelectionOptions_set_signal(ColorSelectionOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


ColorSelectionOptions ColorSelectionOptions_new() {
    em_Val obj = em_Val_object();
    return ColorSelectionOptions_from_val(&obj);
}

