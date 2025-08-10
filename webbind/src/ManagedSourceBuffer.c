#include <webbind/ManagedSourceBuffer.h>

DEFINE_EMLITE_TYPE(ManagedSourceBuffer, SourceBuffer);


jb_Any ManagedSourceBuffer_onbufferedchange(const ManagedSourceBuffer *self) {
    return em_Val_as(jb_Any, em_Val_get(SourceBuffer_as_val(self->inner), em_Val_from("onbufferedchange")));
}


void ManagedSourceBuffer_set_onbufferedchange(ManagedSourceBuffer* self, jb_Any * value) {
    em_Val_set(SourceBuffer_as_val(self->inner), em_Val_from("onbufferedchange"), em_Val_from(value));
}

