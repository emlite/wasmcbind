#include <webbind/TaskPriorityChangeEvent.h>

#include <webbind/TaskPriorityChangeEventInit.h>

DEFINE_EMLITE_TYPE(TaskPriorityChangeEvent, Event);


TaskPriorityChangeEvent TaskPriorityChangeEvent_new(jb_String * type, TaskPriorityChangeEventInit * priorityChangeEventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("TaskPriorityChangeEvent") , em_Val_from(type), em_Val_from(priorityChangeEventInitDict));
        return TaskPriorityChangeEvent_from_val(&vv);
      }


TaskPriority TaskPriorityChangeEvent_previousPriority(const TaskPriorityChangeEvent *self) {
    return em_Val_as(TaskPriority, em_Val_get(Event_as_val(self->inner), em_Val_from("previousPriority")));
}

