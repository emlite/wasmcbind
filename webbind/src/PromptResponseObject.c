#include <webbind/PromptResponseObject.h>

DEFINE_EMLITE_TYPE(PromptResponseObject, em_Val);


AppBannerPromptOutcome PromptResponseObject_userChoice(const PromptResponseObject *self) {
    return em_Val_as(AppBannerPromptOutcome, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userChoice")));
}


void PromptResponseObject_set_userChoice(PromptResponseObject* self, AppBannerPromptOutcome * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userChoice"), em_Val_from(value));
}


PromptResponseObject PromptResponseObject_new() {
    em_Val obj = em_Val_object();
    return PromptResponseObject_from_val(&obj);
}

