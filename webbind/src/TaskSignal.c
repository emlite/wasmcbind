#include <webbind/TaskSignal.h>


DEFINE_EMLITE_TYPE(TaskSignalAnyInit, em_Val);


jb_Any TaskSignalAnyInit_priority(const TaskSignalAnyInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("priority")));
}


void TaskSignalAnyInit_set_priority(TaskSignalAnyInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("priority"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(TaskSignal, AbortSignal);


TaskSignal TaskSignal_any0(TaskSignal* self , jb_Array * signals) {
    return em_Val_as(TaskSignal, em_Val_call(em_Val_global("tasksignal"), "any", em_Val_from(signals)));
}


TaskSignal TaskSignal_any1(TaskSignal* self , jb_Array * signals, TaskSignalAnyInit * init) {
    return em_Val_as(TaskSignal, em_Val_call(em_Val_global("tasksignal"), "any", em_Val_from(signals), em_Val_from(init)));
}


TaskPriority TaskSignal_priority(const TaskSignal *self) {
    return em_Val_as(TaskPriority, em_Val_get(AbortSignal_as_val(self->inner), em_Val_from("priority")));
}


jb_Any TaskSignal_onprioritychange(const TaskSignal *self) {
    return em_Val_as(jb_Any, em_Val_get(AbortSignal_as_val(self->inner), em_Val_from("onprioritychange")));
}


void TaskSignal_set_onprioritychange(TaskSignal* self, jb_Any * value) {
    em_Val_set(AbortSignal_as_val(self->inner), em_Val_from("onprioritychange"), em_Val_from(value));
}

