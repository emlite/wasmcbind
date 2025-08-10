#include <webbind/Scheduler.h>

#include <webbind/SchedulerPostTaskOptions.h>

DEFINE_EMLITE_TYPE(Scheduler, em_Val);


jb_Promise Scheduler_postTask0(Scheduler* self , jb_Function * callback) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "postTask", em_Val_from(callback)));
}


jb_Promise Scheduler_postTask1(Scheduler* self , jb_Function * callback, SchedulerPostTaskOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "postTask", em_Val_from(callback), em_Val_from(options)));
}


jb_Promise Scheduler_yield(Scheduler* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "yield"));
}

