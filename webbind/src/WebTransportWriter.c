#include <webbind/WebTransportWriter.h>


DEFINE_EMLITE_TYPE(WebTransportWriter, WritableStreamDefaultWriter);


jb_Promise WebTransportWriter_atomicWrite0(WebTransportWriter* self ) {
    return em_Val_as(jb_Promise, em_Val_call(WritableStreamDefaultWriter_as_val(self->inner), "atomicWrite"));
}


jb_Promise WebTransportWriter_atomicWrite1(WebTransportWriter* self , jb_Any * chunk) {
    return em_Val_as(jb_Promise, em_Val_call(WritableStreamDefaultWriter_as_val(self->inner), "atomicWrite", em_Val_from(chunk)));
}


jb_Undefined WebTransportWriter_commit(WebTransportWriter* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(WritableStreamDefaultWriter_as_val(self->inner), "commit"));
}

