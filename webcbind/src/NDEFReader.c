#include <webcbind/NDEFReader.h>

#include <webcbind/NDEFScanOptions.h>
#include <webcbind/NDEFWriteOptions.h>
#include <webcbind/NDEFMakeReadOnlyOptions.h>

DEFINE_EMLITE_TYPE(NDEFReader, EventTarget);


NDEFReader NDEFReader_new() {
        em_Val vv = em_Val_new(em_Val_global("NDEFReader") );
        return NDEFReader_from_val(&vv);
      }


jb_Any NDEFReader_onreading(const NDEFReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onreading")));
}


void NDEFReader_set_onreading(NDEFReader* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onreading"), em_Val_from(value));
}


jb_Any NDEFReader_onreadingerror(const NDEFReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onreadingerror")));
}


void NDEFReader_set_onreadingerror(NDEFReader* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onreadingerror"), em_Val_from(value));
}


jb_Promise NDEFReader_scan0(NDEFReader* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "scan"));
}


jb_Promise NDEFReader_scan1(NDEFReader* self , NDEFScanOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "scan", em_Val_from(options)));
}


jb_Promise NDEFReader_write0(NDEFReader* self , jb_Any * message) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "write", em_Val_from(message)));
}


jb_Promise NDEFReader_write1(NDEFReader* self , jb_Any * message, NDEFWriteOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "write", em_Val_from(message), em_Val_from(options)));
}


jb_Promise NDEFReader_makeReadOnly0(NDEFReader* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "makeReadOnly"));
}


jb_Promise NDEFReader_makeReadOnly1(NDEFReader* self , NDEFMakeReadOnlyOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "makeReadOnly", em_Val_from(options)));
}

