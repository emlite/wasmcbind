#include <webbind/TaskSignal.h>


DEFINE_EMLITE_TYPE(TaskSignalAnyInit, em_Val);


jb_Any TaskSignalAnyInit_priority(const TaskSignalAnyInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "priority"));
}


void TaskSignalAnyInit_set_priority(TaskSignalAnyInit* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "priority", value);
}

DEFINE_EMLITE_TYPE(TaskSignal, AbortSignal);


TaskSignal TaskSignal_any(TaskSignal* self , const jb_Sequence* signals) {
    return em_Val_as(TaskSignal, em_Val_call(em_Val_global("tasksignal"), "any", em_Val_from(signals)));
}


TaskSignal TaskSignal_any(TaskSignal* self , const jb_Sequence* signals, const TaskSignalAnyInit* init) {
    return em_Val_as(TaskSignal, em_Val_call(em_Val_global("tasksignal"), "any", em_Val_from(signals), em_Val_from(init)));
}


TaskPriority TaskSignal_priority(const TaskSignal *self) {
    return em_Val_as(TaskPriority, em_Val_get(AbortSignal_as_val(self->inner), "priority"));
}


jb_Any TaskSignal_onprioritychange(const TaskSignal *self) {
    return em_Val_as(jb_Any, em_Val_get(AbortSignal_as_val(self->inner), "onprioritychange"));
}


void TaskSignal_set_onprioritychange(TaskSignal* self, const jb_Any* value) {
    em_Val_set(AbortSignal_as_val(self->inner), "onprioritychange", value);
}

