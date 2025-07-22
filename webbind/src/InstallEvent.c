#include <webbind/InstallEvent.h>


DEFINE_EMLITE_TYPE(InstallEvent, ExtendableEvent);


InstallEvent InstallEvent_new(const jb_DOMString* type) : ExtendableEvent(em_Val_global("InstallEvent").new_(em_Val_from(type))) {
        return InstallEvent(em_Val_new(em_Val_global("InstallEvent", em_Val_from(type)));
      }


InstallEvent InstallEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : ExtendableEvent(em_Val_global("InstallEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return InstallEvent(em_Val_new(em_Val_global("InstallEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Promise InstallEvent_addRoutes(InstallEvent* self , const jb_Any* rules) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "addRoutes", em_Val_from(rules)));
}

