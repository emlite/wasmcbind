#include <webbind/Subscriber.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(Subscriber, em_Val);


jb_Undefined Subscriber_next(Subscriber* self , const jb_Any* value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "next", em_Val_from(value)));
}


jb_Undefined Subscriber_error(Subscriber* self , const jb_Any* error) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "error", em_Val_from(error)));
}


jb_Undefined Subscriber_complete(Subscriber* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "complete"));
}


jb_Undefined Subscriber_addTeardown(Subscriber* self , const jb_Any* teardown) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addTeardown", em_Val_from(teardown)));
}


bool Subscriber_active(const Subscriber *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "active"));
}


AbortSignal Subscriber_signal(const Subscriber *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}

