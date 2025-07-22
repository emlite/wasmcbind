#include <webbind/SourceBufferList.h>
#include <webbind/SourceBuffer.h>


DEFINE_EMLITE_TYPE(SourceBufferList, EventTarget);


unsigned long SourceBufferList_length(const SourceBufferList *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "length"));
}


jb_Any SourceBufferList_onaddsourcebuffer(const SourceBufferList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onaddsourcebuffer"));
}


void SourceBufferList_set_onaddsourcebuffer(SourceBufferList* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onaddsourcebuffer", value);
}


jb_Any SourceBufferList_onremovesourcebuffer(const SourceBufferList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onremovesourcebuffer"));
}


void SourceBufferList_set_onremovesourcebuffer(SourceBufferList* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onremovesourcebuffer", value);
}

