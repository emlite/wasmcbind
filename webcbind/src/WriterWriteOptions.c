#include <webcbind/WriterWriteOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(WriterWriteOptions, em_Val);


jb_String WriterWriteOptions_context(const WriterWriteOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("context")));
}


void WriterWriteOptions_set_context(WriterWriteOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("context"), em_Val_from(value));
}


AbortSignal WriterWriteOptions_signal(const WriterWriteOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void WriterWriteOptions_set_signal(WriterWriteOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


WriterWriteOptions WriterWriteOptions_new() {
    em_Val obj = em_Val_object();
    return WriterWriteOptions_from_val(&obj);
}

