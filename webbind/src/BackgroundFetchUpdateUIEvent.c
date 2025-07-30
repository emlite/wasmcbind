#include <webbind/BackgroundFetchUpdateUIEvent.h>


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

DEFINE_EMLITE_TYPE(BackgroundFetchUpdateUIEvent, BackgroundFetchEvent);


BackgroundFetchUpdateUIEvent BackgroundFetchUpdateUIEvent_new(jb_String * type, jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("BackgroundFetchUpdateUIEvent") , em_Val_from(type), em_Val_from(init));
        return BackgroundFetchUpdateUIEvent_from_val(&vv);
      }


jb_Promise BackgroundFetchUpdateUIEvent_updateUI0(BackgroundFetchUpdateUIEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(BackgroundFetchEvent_as_val(self->inner), "updateUI"));
}


jb_Promise BackgroundFetchUpdateUIEvent_updateUI1(BackgroundFetchUpdateUIEvent* self , BackgroundFetchUIOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(BackgroundFetchEvent_as_val(self->inner), "updateUI", em_Val_from(options)));
}

