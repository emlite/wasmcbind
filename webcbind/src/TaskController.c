#include <webcbind/TaskController.h>

#include <webcbind/TaskControllerInit.h>

DEFINE_EMLITE_TYPE(TaskController, AbortController);


TaskController TaskController_new0() {
        em_Val vv = em_Val_new(em_Val_global("TaskController") );
        return TaskController_from_val(&vv);
      }


TaskController TaskController_new1(TaskControllerInit * init) {
        em_Val vv = em_Val_new(em_Val_global("TaskController") , em_Val_from(init));
        return TaskController_from_val(&vv);
      }


jb_Undefined TaskController_setPriority(TaskController* self , TaskPriority * priority) {
    return em_Val_as(jb_Undefined, em_Val_call(AbortController_as_val(self->inner), "setPriority", em_Val_from(priority)));
}

