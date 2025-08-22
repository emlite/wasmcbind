#include <webcbind/RewriterCreateOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(RewriterCreateOptions, RewriterCreateCoreOptions);


AbortSignal RewriterCreateOptions_signal(const RewriterCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(RewriterCreateCoreOptions_as_val(self->inner), em_Val_from("signal")));
}


void RewriterCreateOptions_set_signal(RewriterCreateOptions* self, AbortSignal * value) {
    em_Val_set(RewriterCreateCoreOptions_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


jb_Function RewriterCreateOptions_monitor(const RewriterCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(RewriterCreateCoreOptions_as_val(self->inner), em_Val_from("monitor")));
}


void RewriterCreateOptions_set_monitor(RewriterCreateOptions* self, jb_Function * value) {
    em_Val_set(RewriterCreateCoreOptions_as_val(self->inner), em_Val_from("monitor"), em_Val_from(value));
}


jb_String RewriterCreateOptions_sharedContext(const RewriterCreateOptions *self) {
    return em_Val_as(jb_String, em_Val_get(RewriterCreateCoreOptions_as_val(self->inner), em_Val_from("sharedContext")));
}


void RewriterCreateOptions_set_sharedContext(RewriterCreateOptions* self, jb_String * value) {
    em_Val_set(RewriterCreateCoreOptions_as_val(self->inner), em_Val_from("sharedContext"), em_Val_from(value));
}


RewriterCreateOptions RewriterCreateOptions_new() {
    em_Val obj = em_Val_object();
    return RewriterCreateOptions_from_val(&obj);
}

