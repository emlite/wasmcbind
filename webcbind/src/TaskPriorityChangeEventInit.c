#include <webcbind/TaskPriorityChangeEventInit.h>

DEFINE_EMLITE_TYPE(TaskPriorityChangeEventInit, EventInit);


TaskPriority TaskPriorityChangeEventInit_previousPriority(const TaskPriorityChangeEventInit *self) {
    return em_Val_as(TaskPriority, em_Val_get(EventInit_as_val(self->inner), em_Val_from("previousPriority")));
}


void TaskPriorityChangeEventInit_set_previousPriority(TaskPriorityChangeEventInit* self, TaskPriority * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("previousPriority"), em_Val_from(value));
}


TaskPriorityChangeEventInit TaskPriorityChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return TaskPriorityChangeEventInit_from_val(&obj);
}

