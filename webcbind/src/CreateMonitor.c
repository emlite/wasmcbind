#include <webcbind/CreateMonitor.h>

DEFINE_EMLITE_TYPE(CreateMonitor, EventTarget);


jb_Any CreateMonitor_ondownloadprogress(const CreateMonitor *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondownloadprogress")));
}


void CreateMonitor_set_ondownloadprogress(CreateMonitor* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondownloadprogress"), em_Val_from(value));
}

