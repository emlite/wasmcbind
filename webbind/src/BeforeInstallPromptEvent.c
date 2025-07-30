#include <webbind/BeforeInstallPromptEvent.h>


DEFINE_EMLITE_TYPE(PromptResponseObject, em_Val);


AppBannerPromptOutcome PromptResponseObject_userChoice(const PromptResponseObject *self) {
    return em_Val_as(AppBannerPromptOutcome, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userChoice")));
}


void PromptResponseObject_set_userChoice(PromptResponseObject* self, AppBannerPromptOutcome * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userChoice"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(BeforeInstallPromptEvent, Event);


BeforeInstallPromptEvent BeforeInstallPromptEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("BeforeInstallPromptEvent") , em_Val_from(type));
        return BeforeInstallPromptEvent_from_val(&vv);
      }


BeforeInstallPromptEvent BeforeInstallPromptEvent_new1(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("BeforeInstallPromptEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return BeforeInstallPromptEvent_from_val(&vv);
      }


jb_Promise BeforeInstallPromptEvent_prompt(BeforeInstallPromptEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Event_as_val(self->inner), "prompt"));
}

