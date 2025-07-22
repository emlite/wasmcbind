#include <webbind/Clipboard.h>


DEFINE_EMLITE_TYPE(ClipboardUnsanitizedFormats, em_Val);


jb_Sequence ClipboardUnsanitizedFormats_unsanitized(const ClipboardUnsanitizedFormats *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "unsanitized"));
}


void ClipboardUnsanitizedFormats_set_unsanitized(ClipboardUnsanitizedFormats* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "unsanitized", value);
}

DEFINE_EMLITE_TYPE(Clipboard, EventTarget);


jb_Promise Clipboard_read(Clipboard* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "read"));
}


jb_Promise Clipboard_read(Clipboard* self , const ClipboardUnsanitizedFormats* formats) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "read", em_Val_from(formats)));
}


jb_Promise Clipboard_readText(Clipboard* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "readText"));
}


jb_Promise Clipboard_write(Clipboard* self , const jb_Any* data) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "write", em_Val_from(data)));
}


jb_Promise Clipboard_writeText(Clipboard* self , const jb_DOMString* data) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "writeText", em_Val_from(data)));
}

