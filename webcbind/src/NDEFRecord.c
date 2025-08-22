#include <webcbind/NDEFRecord.h>

#include <webcbind/NDEFRecordInit.h>

DEFINE_EMLITE_TYPE(NDEFRecord, em_Val);


NDEFRecord NDEFRecord_new(NDEFRecordInit * recordInit) {
        em_Val vv = em_Val_new(em_Val_global("NDEFRecord") , em_Val_from(recordInit));
        return NDEFRecord_from_val(&vv);
      }


jb_String NDEFRecord_recordType(const NDEFRecord *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recordType")));
}


jb_String NDEFRecord_mediaType(const NDEFRecord *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mediaType")));
}


jb_String NDEFRecord_id(const NDEFRecord *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


jb_DataView NDEFRecord_data(const NDEFRecord *self) {
    return em_Val_as(jb_DataView, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


jb_String NDEFRecord_encoding(const NDEFRecord *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("encoding")));
}


jb_String NDEFRecord_lang(const NDEFRecord *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lang")));
}


jb_Array NDEFRecord_toRecords(NDEFRecord* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "toRecords"));
}

