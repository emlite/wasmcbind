#include <webbind/BackgroundFetchUpdateUIEvent.h>


DEFINE_EMLITE_TYPE(BackgroundFetchUIOptions, em_Val);


jb_Sequence BackgroundFetchUIOptions_icons(const BackgroundFetchUIOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "icons"));
}


void BackgroundFetchUIOptions_set_icons(BackgroundFetchUIOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "icons", value);
}


jb_DOMString BackgroundFetchUIOptions_title(const BackgroundFetchUIOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "title"));
}


void BackgroundFetchUIOptions_set_title(BackgroundFetchUIOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "title", value);
}

DEFINE_EMLITE_TYPE(BackgroundFetchUpdateUIEvent, BackgroundFetchEvent);


BackgroundFetchUpdateUIEvent BackgroundFetchUpdateUIEvent_new(const jb_DOMString* type, const jb_Any* init) : BackgroundFetchEvent(em_Val_global("BackgroundFetchUpdateUIEvent").new_(em_Val_from(type), em_Val_from(init))) {
        return BackgroundFetchUpdateUIEvent(em_Val_new(em_Val_global("BackgroundFetchUpdateUIEvent", em_Val_from(type), em_Val_from(init)));
      }


jb_Promise BackgroundFetchUpdateUIEvent_updateUI(BackgroundFetchUpdateUIEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(BackgroundFetchEvent_as_val(self->inner), "updateUI"));
}


jb_Promise BackgroundFetchUpdateUIEvent_updateUI(BackgroundFetchUpdateUIEvent* self , const BackgroundFetchUIOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(BackgroundFetchEvent_as_val(self->inner), "updateUI", em_Val_from(options)));
}

