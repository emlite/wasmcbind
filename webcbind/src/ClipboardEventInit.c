#include <webcbind/ClipboardEventInit.h>

#include <webcbind/DataTransfer.h>

DEFINE_EMLITE_TYPE(ClipboardEventInit, EventInit);


DataTransfer ClipboardEventInit_clipboardData(const ClipboardEventInit *self) {
    return em_Val_as(DataTransfer, em_Val_get(EventInit_as_val(self->inner), em_Val_from("clipboardData")));
}


void ClipboardEventInit_set_clipboardData(ClipboardEventInit* self, DataTransfer * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("clipboardData"), em_Val_from(value));
}


ClipboardEventInit ClipboardEventInit_new() {
    em_Val obj = em_Val_object();
    return ClipboardEventInit_from_val(&obj);
}

