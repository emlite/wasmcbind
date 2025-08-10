#include <webbind/IdleDetector.h>

#include <webbind/IdleOptions.h>

DEFINE_EMLITE_TYPE(IdleDetector, EventTarget);


IdleDetector IdleDetector_new() {
        em_Val vv = em_Val_new(em_Val_global("IdleDetector") );
        return IdleDetector_from_val(&vv);
      }


UserIdleState IdleDetector_userState(const IdleDetector *self) {
    return em_Val_as(UserIdleState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("userState")));
}


ScreenIdleState IdleDetector_screenState(const IdleDetector *self) {
    return em_Val_as(ScreenIdleState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("screenState")));
}


jb_Any IdleDetector_onchange(const IdleDetector *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchange")));
}


void IdleDetector_set_onchange(IdleDetector* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchange"), em_Val_from(value));
}


jb_Promise IdleDetector_requestPermission(IdleDetector* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("idledetector"), "requestPermission"));
}


jb_Promise IdleDetector_start0(IdleDetector* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "start"));
}


jb_Promise IdleDetector_start1(IdleDetector* self , IdleOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "start", em_Val_from(options)));
}

