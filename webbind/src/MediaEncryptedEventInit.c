#include <webbind/MediaEncryptedEventInit.h>

DEFINE_EMLITE_TYPE(MediaEncryptedEventInit, EventInit);


jb_String MediaEncryptedEventInit_initDataType(const MediaEncryptedEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("initDataType")));
}


void MediaEncryptedEventInit_set_initDataType(MediaEncryptedEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("initDataType"), em_Val_from(value));
}


jb_ArrayBuffer MediaEncryptedEventInit_initData(const MediaEncryptedEventInit *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(EventInit_as_val(self->inner), em_Val_from("initData")));
}


void MediaEncryptedEventInit_set_initData(MediaEncryptedEventInit* self, jb_ArrayBuffer * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("initData"), em_Val_from(value));
}


MediaEncryptedEventInit MediaEncryptedEventInit_new() {
    em_Val obj = em_Val_object();
    return MediaEncryptedEventInit_from_val(&obj);
}

