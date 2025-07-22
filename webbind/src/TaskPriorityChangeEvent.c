#include <webbind/TaskPriorityChangeEvent.h>


DEFINE_EMLITE_TYPE(TaskPriorityChangeEvent, Event);


TaskPriorityChangeEvent TaskPriorityChangeEvent_new(const jb_DOMString* type, const jb_Any* priorityChangeEventInitDict) : Event(em_Val_global("TaskPriorityChangeEvent").new_(em_Val_from(type), em_Val_from(priorityChangeEventInitDict))) {
        return TaskPriorityChangeEvent(em_Val_new(em_Val_global("TaskPriorityChangeEvent", em_Val_from(type), em_Val_from(priorityChangeEventInitDict)));
      }


TaskPriority TaskPriorityChangeEvent_previousPriority(const TaskPriorityChangeEvent *self) {
    return em_Val_as(TaskPriority, em_Val_get(Event_as_val(self->inner), "previousPriority"));
}

