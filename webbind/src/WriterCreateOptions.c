#include <webbind/WriterCreateOptions.h>

#include <webbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(WriterCreateOptions, WriterCreateCoreOptions);


AbortSignal WriterCreateOptions_signal(const WriterCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(WriterCreateCoreOptions_as_val(self->inner), em_Val_from("signal")));
}


void WriterCreateOptions_set_signal(WriterCreateOptions* self, AbortSignal * value) {
    em_Val_set(WriterCreateCoreOptions_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


jb_Function WriterCreateOptions_monitor(const WriterCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(WriterCreateCoreOptions_as_val(self->inner), em_Val_from("monitor")));
}


void WriterCreateOptions_set_monitor(WriterCreateOptions* self, jb_Function * value) {
    em_Val_set(WriterCreateCoreOptions_as_val(self->inner), em_Val_from("monitor"), em_Val_from(value));
}


jb_String WriterCreateOptions_sharedContext(const WriterCreateOptions *self) {
    return em_Val_as(jb_String, em_Val_get(WriterCreateCoreOptions_as_val(self->inner), em_Val_from("sharedContext")));
}


void WriterCreateOptions_set_sharedContext(WriterCreateOptions* self, jb_String * value) {
    em_Val_set(WriterCreateCoreOptions_as_val(self->inner), em_Val_from("sharedContext"), em_Val_from(value));
}


WriterCreateOptions WriterCreateOptions_new() {
    em_Val obj = em_Val_object();
    return WriterCreateOptions_from_val(&obj);
}

