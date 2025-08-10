#include <webbind/TaskSignalAnyInit.h>

DEFINE_EMLITE_TYPE(TaskSignalAnyInit, em_Val);


jb_Any TaskSignalAnyInit_priority(const TaskSignalAnyInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("priority")));
}


void TaskSignalAnyInit_set_priority(TaskSignalAnyInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("priority"), em_Val_from(value));
}


TaskSignalAnyInit TaskSignalAnyInit_new() {
    em_Val obj = em_Val_object();
    return TaskSignalAnyInit_from_val(&obj);
}

