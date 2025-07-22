#include <webbind/WakeLock.h>
#include <webbind/WakeLockSentinel.h>


DEFINE_EMLITE_TYPE(WakeLock, em_Val);


jb_Promise WakeLock_request0(WakeLock* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "request"));
}


jb_Promise WakeLock_request1(WakeLock* self , WakeLockType * type) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "request", em_Val_from(type)));
}

