#include <webbind/NDEFReader.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(NDEFScanOptions, em_Val);


AbortSignal NDEFScanOptions_signal(const NDEFScanOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void NDEFScanOptions_set_signal(NDEFScanOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(NDEFWriteOptions, em_Val);


bool NDEFWriteOptions_overwrite(const NDEFWriteOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("overwrite")));
}


void NDEFWriteOptions_set_overwrite(NDEFWriteOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("overwrite"), em_Val_from(value));
}


AbortSignal NDEFWriteOptions_signal(const NDEFWriteOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void NDEFWriteOptions_set_signal(NDEFWriteOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(NDEFMakeReadOnlyOptions, em_Val);


AbortSignal NDEFMakeReadOnlyOptions_signal(const NDEFMakeReadOnlyOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void NDEFMakeReadOnlyOptions_set_signal(NDEFMakeReadOnlyOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}

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

