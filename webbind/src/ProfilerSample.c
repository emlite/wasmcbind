#include <webbind/ProfilerSample.h>

DEFINE_EMLITE_TYPE(ProfilerSample, em_Val);


jb_Any ProfilerSample_timestamp(const ProfilerSample *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


void ProfilerSample_set_timestamp(ProfilerSample* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}


long long ProfilerSample_stackId(const ProfilerSample *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stackId")));
}


void ProfilerSample_set_stackId(ProfilerSample* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stackId"), em_Val_from(value));
}


ProfilerSample ProfilerSample_new() {
    em_Val obj = em_Val_object();
    return ProfilerSample_from_val(&obj);
}

