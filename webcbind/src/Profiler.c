#include <webcbind/Profiler.h>

#include <webcbind/ProfilerInitOptions.h>
#include <webcbind/ProfilerTrace.h>

DEFINE_EMLITE_TYPE(Profiler, EventTarget);


jb_Any Profiler_sampleInterval(const Profiler *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("sampleInterval")));
}


bool Profiler_stopped(const Profiler *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("stopped")));
}


Profiler Profiler_new(ProfilerInitOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("Profiler") , em_Val_from(options));
        return Profiler_from_val(&vv);
      }


jb_Promise Profiler_stop(Profiler* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "stop"));
}

