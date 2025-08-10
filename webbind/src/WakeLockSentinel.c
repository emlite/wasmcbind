#include <webbind/WakeLockSentinel.h>

DEFINE_EMLITE_TYPE(WakeLockSentinel, EventTarget);


bool WakeLockSentinel_released(const WakeLockSentinel *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("released")));
}


WakeLockType WakeLockSentinel_type(const WakeLockSentinel *self) {
    return em_Val_as(WakeLockType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("type")));
}


jb_Promise WakeLockSentinel_release(WakeLockSentinel* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "release"));
}


jb_Any WakeLockSentinel_onrelease(const WakeLockSentinel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onrelease")));
}


void WakeLockSentinel_set_onrelease(WakeLockSentinel* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onrelease"), em_Val_from(value));
}

