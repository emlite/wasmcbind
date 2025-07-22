#include <webbind/Profiler.h>


DEFINE_EMLITE_TYPE(ProfilerTrace, em_Val);


jb_Sequence ProfilerTrace_resources(const ProfilerTrace *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "resources"));
}


void ProfilerTrace_set_resources(ProfilerTrace* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "resources", value);
}


jb_Sequence ProfilerTrace_frames(const ProfilerTrace *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "frames"));
}


void ProfilerTrace_set_frames(ProfilerTrace* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "frames", value);
}


jb_Sequence ProfilerTrace_stacks(const ProfilerTrace *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "stacks"));
}


void ProfilerTrace_set_stacks(ProfilerTrace* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "stacks", value);
}


jb_Sequence ProfilerTrace_samples(const ProfilerTrace *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "samples"));
}


void ProfilerTrace_set_samples(ProfilerTrace* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "samples", value);
}

DEFINE_EMLITE_TYPE(Profiler, EventTarget);


jb_Any Profiler_sampleInterval(const Profiler *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "sampleInterval"));
}


bool Profiler_stopped(const Profiler *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "stopped"));
}


Profiler Profiler_new(const jb_Any* options) : EventTarget(em_Val_global("Profiler").new_(em_Val_from(options))) {
        return Profiler(em_Val_new(em_Val_global("Profiler", em_Val_from(options)));
      }


jb_Promise Profiler_stop(Profiler* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "stop"));
}

