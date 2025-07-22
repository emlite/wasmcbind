#include <webbind/TaskController.h>


DEFINE_EMLITE_TYPE(TaskController, AbortController);


TaskController TaskController_new() : AbortController(em_Val_global("TaskController").new_()) {
        return TaskController(em_Val_new(em_Val_global("TaskController", ));
      }


TaskController TaskController_new(const jb_Any* init) : AbortController(em_Val_global("TaskController").new_(em_Val_from(init))) {
        return TaskController(em_Val_new(em_Val_global("TaskController", em_Val_from(init)));
      }


jb_Undefined TaskController_setPriority(TaskController* self , const TaskPriority* priority) {
    return em_Val_as(jb_Undefined, em_Val_call(AbortController_as_val(self->inner), "setPriority", em_Val_from(priority)));
}

