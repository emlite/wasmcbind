#include <webbind/ProfilerTrace.h>

DEFINE_EMLITE_TYPE(ProfilerTrace, em_Val);


jb_Array ProfilerTrace_resources(const ProfilerTrace *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resources")));
}


void ProfilerTrace_set_resources(ProfilerTrace* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resources"), em_Val_from(value));
}


jb_Array ProfilerTrace_frames(const ProfilerTrace *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frames")));
}


void ProfilerTrace_set_frames(ProfilerTrace* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("frames"), em_Val_from(value));
}


jb_Array ProfilerTrace_stacks(const ProfilerTrace *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stacks")));
}


void ProfilerTrace_set_stacks(ProfilerTrace* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stacks"), em_Val_from(value));
}


jb_Array ProfilerTrace_samples(const ProfilerTrace *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("samples")));
}


void ProfilerTrace_set_samples(ProfilerTrace* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("samples"), em_Val_from(value));
}


ProfilerTrace ProfilerTrace_new() {
    em_Val obj = em_Val_object();
    return ProfilerTrace_from_val(&obj);
}

