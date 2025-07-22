#include <webbind/NDEFReader.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(NDEFScanOptions, em_Val);


AbortSignal NDEFScanOptions_signal(const NDEFScanOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void NDEFScanOptions_set_signal(NDEFScanOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(NDEFWriteOptions, em_Val);


bool NDEFWriteOptions_overwrite(const NDEFWriteOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "overwrite"));
}


void NDEFWriteOptions_set_overwrite(NDEFWriteOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "overwrite", value);
}


AbortSignal NDEFWriteOptions_signal(const NDEFWriteOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void NDEFWriteOptions_set_signal(NDEFWriteOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(NDEFMakeReadOnlyOptions, em_Val);


AbortSignal NDEFMakeReadOnlyOptions_signal(const NDEFMakeReadOnlyOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void NDEFMakeReadOnlyOptions_set_signal(NDEFMakeReadOnlyOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(NDEFReader, EventTarget);


NDEFReader NDEFReader_new() : EventTarget(em_Val_global("NDEFReader").new_()) {
        return NDEFReader(em_Val_new(em_Val_global("NDEFReader", ));
      }


jb_Any NDEFReader_onreading(const NDEFReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onreading"));
}


void NDEFReader_set_onreading(NDEFReader* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onreading", value);
}


jb_Any NDEFReader_onreadingerror(const NDEFReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onreadingerror"));
}


void NDEFReader_set_onreadingerror(NDEFReader* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onreadingerror", value);
}


jb_Promise NDEFReader_scan(NDEFReader* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "scan"));
}


jb_Promise NDEFReader_scan(NDEFReader* self , const NDEFScanOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "scan", em_Val_from(options)));
}


jb_Promise NDEFReader_write(NDEFReader* self , const jb_Any* message) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "write", em_Val_from(message)));
}


jb_Promise NDEFReader_write(NDEFReader* self , const jb_Any* message, const NDEFWriteOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "write", em_Val_from(message), em_Val_from(options)));
}


jb_Promise NDEFReader_makeReadOnly(NDEFReader* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "makeReadOnly"));
}


jb_Promise NDEFReader_makeReadOnly(NDEFReader* self , const NDEFMakeReadOnlyOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "makeReadOnly", em_Val_from(options)));
}

