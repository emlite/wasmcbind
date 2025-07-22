#include <webbind/NDEFRecord.h>


DEFINE_EMLITE_TYPE(NDEFRecord, em_Val);


NDEFRecord NDEFRecord_new(const jb_Any* recordInit) : em_Val(em_Val_global("NDEFRecord").new_(em_Val_from(recordInit))) {
        return NDEFRecord(em_Val_new(em_Val_global("NDEFRecord", em_Val_from(recordInit)));
      }


jb_USVString NDEFRecord_recordType(const NDEFRecord *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "recordType"));
}


jb_USVString NDEFRecord_mediaType(const NDEFRecord *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "mediaType"));
}


jb_USVString NDEFRecord_id(const NDEFRecord *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


jb_DataView NDEFRecord_data(const NDEFRecord *self) {
    return em_Val_as(jb_DataView, em_Val_get(em_Val_as_val(self->inner), "data"));
}


jb_USVString NDEFRecord_encoding(const NDEFRecord *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "encoding"));
}


jb_USVString NDEFRecord_lang(const NDEFRecord *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "lang"));
}


jb_Sequence NDEFRecord_toRecords(NDEFRecord* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "toRecords"));
}

