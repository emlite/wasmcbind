#include <webbind/SchedulerPostTaskOptions.h>

#include <webbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(SchedulerPostTaskOptions, em_Val);


AbortSignal SchedulerPostTaskOptions_signal(const SchedulerPostTaskOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void SchedulerPostTaskOptions_set_signal(SchedulerPostTaskOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


TaskPriority SchedulerPostTaskOptions_priority(const SchedulerPostTaskOptions *self) {
    return em_Val_as(TaskPriority, em_Val_get(em_Val_as_val(self->inner), em_Val_from("priority")));
}


void SchedulerPostTaskOptions_set_priority(SchedulerPostTaskOptions* self, TaskPriority * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("priority"), em_Val_from(value));
}


long long SchedulerPostTaskOptions_delay(const SchedulerPostTaskOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("delay")));
}


void SchedulerPostTaskOptions_set_delay(SchedulerPostTaskOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("delay"), em_Val_from(value));
}


SchedulerPostTaskOptions SchedulerPostTaskOptions_new() {
    em_Val obj = em_Val_object();
    return SchedulerPostTaskOptions_from_val(&obj);
}

