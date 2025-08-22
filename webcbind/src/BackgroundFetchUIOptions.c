#include <webcbind/BackgroundFetchUIOptions.h>

DEFINE_EMLITE_TYPE(BackgroundFetchUIOptions, em_Val);


jb_Array BackgroundFetchUIOptions_icons(const BackgroundFetchUIOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("icons")));
}


void BackgroundFetchUIOptions_set_icons(BackgroundFetchUIOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("icons"), em_Val_from(value));
}


jb_String BackgroundFetchUIOptions_title(const BackgroundFetchUIOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


void BackgroundFetchUIOptions_set_title(BackgroundFetchUIOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


BackgroundFetchUIOptions BackgroundFetchUIOptions_new() {
    em_Val obj = em_Val_object();
    return BackgroundFetchUIOptions_from_val(&obj);
}

