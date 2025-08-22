#include <webcbind/TaskControllerInit.h>

DEFINE_EMLITE_TYPE(TaskControllerInit, em_Val);


TaskPriority TaskControllerInit_priority(const TaskControllerInit *self) {
    return em_Val_as(TaskPriority, em_Val_get(em_Val_as_val(self->inner), em_Val_from("priority")));
}


void TaskControllerInit_set_priority(TaskControllerInit* self, TaskPriority * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("priority"), em_Val_from(value));
}


TaskControllerInit TaskControllerInit_new() {
    em_Val obj = em_Val_object();
    return TaskControllerInit_from_val(&obj);
}

