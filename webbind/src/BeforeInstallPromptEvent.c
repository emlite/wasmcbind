#include <webbind/BeforeInstallPromptEvent.h>


DEFINE_EMLITE_TYPE(PromptResponseObject, em_Val);


AppBannerPromptOutcome PromptResponseObject_userChoice(const PromptResponseObject *self) {
    return em_Val_as(AppBannerPromptOutcome, em_Val_get(em_Val_as_val(self->inner), "userChoice"));
}


void PromptResponseObject_set_userChoice(PromptResponseObject* self, const AppBannerPromptOutcome* value) {
    em_Val_set(em_Val_as_val(self->inner), "userChoice", value);
}

DEFINE_EMLITE_TYPE(BeforeInstallPromptEvent, Event);


BeforeInstallPromptEvent BeforeInstallPromptEvent_new(const jb_DOMString* type) : Event(em_Val_global("BeforeInstallPromptEvent").new_(em_Val_from(type))) {
        return BeforeInstallPromptEvent(em_Val_new(em_Val_global("BeforeInstallPromptEvent", em_Val_from(type)));
      }


BeforeInstallPromptEvent BeforeInstallPromptEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("BeforeInstallPromptEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return BeforeInstallPromptEvent(em_Val_new(em_Val_global("BeforeInstallPromptEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Promise BeforeInstallPromptEvent_prompt(BeforeInstallPromptEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Event_as_val(self->inner), "prompt"));
}

