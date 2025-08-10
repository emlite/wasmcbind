#include <webbind/IdleDeadline.h>

DEFINE_EMLITE_TYPE(IdleDeadline, em_Val);


jb_Any IdleDeadline_timeRemaining(IdleDeadline* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "timeRemaining"));
}


bool IdleDeadline_didTimeout(const IdleDeadline *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("didTimeout")));
}

