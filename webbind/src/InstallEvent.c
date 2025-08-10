#include <webbind/InstallEvent.h>

#include <webbind/ExtendableEventInit.h>

DEFINE_EMLITE_TYPE(InstallEvent, ExtendableEvent);


InstallEvent InstallEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("InstallEvent") , em_Val_from(type));
        return InstallEvent_from_val(&vv);
      }


InstallEvent InstallEvent_new1(jb_String * type, ExtendableEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("InstallEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return InstallEvent_from_val(&vv);
      }


jb_Promise InstallEvent_addRoutes(InstallEvent* self , jb_Any * rules) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "addRoutes", em_Val_from(rules)));
}

