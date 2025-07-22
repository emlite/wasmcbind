#include <webbind/IdleDetector.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(IdleOptions, em_Val);


long long IdleOptions_threshold(const IdleOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "threshold"));
}


void IdleOptions_set_threshold(IdleOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "threshold", value);
}


AbortSignal IdleOptions_signal(const IdleOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void IdleOptions_set_signal(IdleOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(IdleDetector, EventTarget);


IdleDetector IdleDetector_new() : EventTarget(em_Val_global("IdleDetector").new_()) {
        return IdleDetector(em_Val_new(em_Val_global("IdleDetector", ));
      }


UserIdleState IdleDetector_userState(const IdleDetector *self) {
    return em_Val_as(UserIdleState, em_Val_get(EventTarget_as_val(self->inner), "userState"));
}


ScreenIdleState IdleDetector_screenState(const IdleDetector *self) {
    return em_Val_as(ScreenIdleState, em_Val_get(EventTarget_as_val(self->inner), "screenState"));
}


jb_Any IdleDetector_onchange(const IdleDetector *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onchange"));
}


void IdleDetector_set_onchange(IdleDetector* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onchange", value);
}


jb_Promise IdleDetector_requestPermission(IdleDetector* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("idledetector"), "requestPermission"));
}


jb_Promise IdleDetector_start(IdleDetector* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "start"));
}


jb_Promise IdleDetector_start(IdleDetector* self , const IdleOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "start", em_Val_from(options)));
}

