#include <webbind/Profiler.h>


DEFINE_EMLITE_TYPE(ProfilerTrace, em_Val);


jb_Sequence ProfilerTrace_resources(const ProfilerTrace *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resources")));
}


void ProfilerTrace_set_resources(ProfilerTrace* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resources"), em_Val_from(value));
}


jb_Sequence ProfilerTrace_frames(const ProfilerTrace *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frames")));
}


void ProfilerTrace_set_frames(ProfilerTrace* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("frames"), em_Val_from(value));
}


jb_Sequence ProfilerTrace_stacks(const ProfilerTrace *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stacks")));
}


void ProfilerTrace_set_stacks(ProfilerTrace* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stacks"), em_Val_from(value));
}


jb_Sequence ProfilerTrace_samples(const ProfilerTrace *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("samples")));
}


void ProfilerTrace_set_samples(ProfilerTrace* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("samples"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Profiler, EventTarget);


jb_Any Profiler_sampleInterval(const Profiler *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("sampleInterval")));
}


bool Profiler_stopped(const Profiler *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("stopped")));
}


Profiler Profiler_new(jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("Profiler") , em_Val_from(options));
        return Profiler_from_val(&vv);
      }


jb_Promise Profiler_stop(Profiler* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "stop"));
}

