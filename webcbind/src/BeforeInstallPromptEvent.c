#include <webcbind/BeforeInstallPromptEvent.h>

#include <webcbind/EventInit.h>
#include <webcbind/PromptResponseObject.h>

DEFINE_EMLITE_TYPE(BeforeInstallPromptEvent, Event);


BeforeInstallPromptEvent BeforeInstallPromptEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("BeforeInstallPromptEvent") , em_Val_from(type));
        return BeforeInstallPromptEvent_from_val(&vv);
      }


BeforeInstallPromptEvent BeforeInstallPromptEvent_new1(jb_String * type, EventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("BeforeInstallPromptEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return BeforeInstallPromptEvent_from_val(&vv);
      }


jb_Promise BeforeInstallPromptEvent_prompt(BeforeInstallPromptEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Event_as_val(self->inner), "prompt"));
}

