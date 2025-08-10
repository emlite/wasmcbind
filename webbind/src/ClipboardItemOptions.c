#include <webbind/ClipboardItemOptions.h>

DEFINE_EMLITE_TYPE(ClipboardItemOptions, em_Val);


PresentationStyle ClipboardItemOptions_presentationStyle(const ClipboardItemOptions *self) {
    return em_Val_as(PresentationStyle, em_Val_get(em_Val_as_val(self->inner), em_Val_from("presentationStyle")));
}


void ClipboardItemOptions_set_presentationStyle(ClipboardItemOptions* self, PresentationStyle * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("presentationStyle"), em_Val_from(value));
}


ClipboardItemOptions ClipboardItemOptions_new() {
    em_Val obj = em_Val_object();
    return ClipboardItemOptions_from_val(&obj);
}

