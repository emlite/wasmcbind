#include <webcbind/NDEFReadingEventInit.h>

DEFINE_EMLITE_TYPE(NDEFReadingEventInit, EventInit);


jb_String NDEFReadingEventInit_serialNumber(const NDEFReadingEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("serialNumber")));
}


void NDEFReadingEventInit_set_serialNumber(NDEFReadingEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("serialNumber"), em_Val_from(value));
}


NDEFMessageInit NDEFReadingEventInit_message(const NDEFReadingEventInit *self) {
    return em_Val_as(NDEFMessageInit, em_Val_get(EventInit_as_val(self->inner), em_Val_from("message")));
}


void NDEFReadingEventInit_set_message(NDEFReadingEventInit* self, NDEFMessageInit * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("message"), em_Val_from(value));
}


NDEFReadingEventInit NDEFReadingEventInit_new() {
    em_Val obj = em_Val_object();
    return NDEFReadingEventInit_from_val(&obj);
}

