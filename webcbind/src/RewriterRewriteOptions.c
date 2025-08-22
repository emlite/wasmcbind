#include <webcbind/RewriterRewriteOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(RewriterRewriteOptions, em_Val);


jb_String RewriterRewriteOptions_context(const RewriterRewriteOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("context")));
}


void RewriterRewriteOptions_set_context(RewriterRewriteOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("context"), em_Val_from(value));
}


AbortSignal RewriterRewriteOptions_signal(const RewriterRewriteOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void RewriterRewriteOptions_set_signal(RewriterRewriteOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


RewriterRewriteOptions RewriterRewriteOptions_new() {
    em_Val obj = em_Val_object();
    return RewriterRewriteOptions_from_val(&obj);
}

