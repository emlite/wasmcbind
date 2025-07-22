#include <webbind/SourceBufferList.h>
#include <webbind/SourceBuffer.h>


DEFINE_EMLITE_TYPE(SourceBufferList, EventTarget);


unsigned long SourceBufferList_length(const SourceBufferList *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("length")));
}


jb_Any SourceBufferList_onaddsourcebuffer(const SourceBufferList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onaddsourcebuffer")));
}


void SourceBufferList_set_onaddsourcebuffer(SourceBufferList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onaddsourcebuffer"), em_Val_from(value));
}


jb_Any SourceBufferList_onremovesourcebuffer(const SourceBufferList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onremovesourcebuffer")));
}


void SourceBufferList_set_onremovesourcebuffer(SourceBufferList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onremovesourcebuffer"), em_Val_from(value));
}

