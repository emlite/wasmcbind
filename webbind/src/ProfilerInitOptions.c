#include <webbind/ProfilerInitOptions.h>

DEFINE_EMLITE_TYPE(ProfilerInitOptions, em_Val);


jb_Any ProfilerInitOptions_sampleInterval(const ProfilerInitOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleInterval")));
}


void ProfilerInitOptions_set_sampleInterval(ProfilerInitOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampleInterval"), em_Val_from(value));
}


unsigned long ProfilerInitOptions_maxBufferSize(const ProfilerInitOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxBufferSize")));
}


void ProfilerInitOptions_set_maxBufferSize(ProfilerInitOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxBufferSize"), em_Val_from(value));
}


ProfilerInitOptions ProfilerInitOptions_new() {
    em_Val obj = em_Val_object();
    return ProfilerInitOptions_from_val(&obj);
}

