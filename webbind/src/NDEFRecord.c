#include <webbind/NDEFRecord.h>


DEFINE_EMLITE_TYPE(NDEFRecord, em_Val);


NDEFRecord NDEFRecord_new(jb_Any * recordInit) {
        em_Val vv = em_Val_new(em_Val_global("NDEFRecord") , em_Val_from(recordInit));
        return NDEFRecord_from_val(&vv);
      }


jb_USVString NDEFRecord_recordType(const NDEFRecord *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recordType")));
}


jb_USVString NDEFRecord_mediaType(const NDEFRecord *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mediaType")));
}


jb_USVString NDEFRecord_id(const NDEFRecord *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


jb_DataView NDEFRecord_data(const NDEFRecord *self) {
    return em_Val_as(jb_DataView, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


jb_USVString NDEFRecord_encoding(const NDEFRecord *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("encoding")));
}


jb_USVString NDEFRecord_lang(const NDEFRecord *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lang")));
}


jb_Sequence NDEFRecord_toRecords(NDEFRecord* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "toRecords"));
}

