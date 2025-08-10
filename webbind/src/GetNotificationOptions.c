#include <webbind/GetNotificationOptions.h>

DEFINE_EMLITE_TYPE(GetNotificationOptions, em_Val);


jb_String GetNotificationOptions_tag(const GetNotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tag")));
}


void GetNotificationOptions_set_tag(GetNotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("tag"), em_Val_from(value));
}


GetNotificationOptions GetNotificationOptions_new() {
    em_Val obj = em_Val_object();
    return GetNotificationOptions_from_val(&obj);
}

