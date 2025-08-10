#include <webbind/StreamPipeOptions.h>

#include <webbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(StreamPipeOptions, em_Val);


bool StreamPipeOptions_preventClose(const StreamPipeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("preventClose")));
}


void StreamPipeOptions_set_preventClose(StreamPipeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("preventClose"), em_Val_from(value));
}


bool StreamPipeOptions_preventAbort(const StreamPipeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("preventAbort")));
}


void StreamPipeOptions_set_preventAbort(StreamPipeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("preventAbort"), em_Val_from(value));
}


bool StreamPipeOptions_preventCancel(const StreamPipeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("preventCancel")));
}


void StreamPipeOptions_set_preventCancel(StreamPipeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("preventCancel"), em_Val_from(value));
}


AbortSignal StreamPipeOptions_signal(const StreamPipeOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void StreamPipeOptions_set_signal(StreamPipeOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


StreamPipeOptions StreamPipeOptions_new() {
    em_Val obj = em_Val_object();
    return StreamPipeOptions_from_val(&obj);
}

