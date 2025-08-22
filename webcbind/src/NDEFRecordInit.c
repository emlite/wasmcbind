#include <webcbind/NDEFRecordInit.h>

DEFINE_EMLITE_TYPE(NDEFRecordInit, em_Val);


jb_String NDEFRecordInit_recordType(const NDEFRecordInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recordType")));
}


void NDEFRecordInit_set_recordType(NDEFRecordInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recordType"), em_Val_from(value));
}


jb_String NDEFRecordInit_mediaType(const NDEFRecordInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mediaType")));
}


void NDEFRecordInit_set_mediaType(NDEFRecordInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mediaType"), em_Val_from(value));
}


jb_String NDEFRecordInit_id(const NDEFRecordInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void NDEFRecordInit_set_id(NDEFRecordInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_String NDEFRecordInit_encoding(const NDEFRecordInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("encoding")));
}


void NDEFRecordInit_set_encoding(NDEFRecordInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("encoding"), em_Val_from(value));
}


jb_String NDEFRecordInit_lang(const NDEFRecordInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lang")));
}


void NDEFRecordInit_set_lang(NDEFRecordInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lang"), em_Val_from(value));
}


jb_Any NDEFRecordInit_data(const NDEFRecordInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void NDEFRecordInit_set_data(NDEFRecordInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


NDEFRecordInit NDEFRecordInit_new() {
    em_Val obj = em_Val_object();
    return NDEFRecordInit_from_val(&obj);
}

