#include <webcbind/LaunchQueue.h>

DEFINE_EMLITE_TYPE(LaunchQueue, em_Val);


jb_Undefined LaunchQueue_setConsumer(LaunchQueue* self , jb_Function * consumer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setConsumer", em_Val_from(consumer)));
}

