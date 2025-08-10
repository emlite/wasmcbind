#include <webbind/ClipboardUnsanitizedFormats.h>

DEFINE_EMLITE_TYPE(ClipboardUnsanitizedFormats, em_Val);


jb_Array ClipboardUnsanitizedFormats_unsanitized(const ClipboardUnsanitizedFormats *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unsanitized")));
}


void ClipboardUnsanitizedFormats_set_unsanitized(ClipboardUnsanitizedFormats* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unsanitized"), em_Val_from(value));
}


ClipboardUnsanitizedFormats ClipboardUnsanitizedFormats_new() {
    em_Val obj = em_Val_object();
    return ClipboardUnsanitizedFormats_from_val(&obj);
}

