#include <webbind/BackgroundFetchEvent.h>
#include <webbind/BackgroundFetchRegistration.h>


DEFINE_EMLITE_TYPE(BackgroundFetchEvent, ExtendableEvent);


BackgroundFetchEvent BackgroundFetchEvent_new(const jb_DOMString* type, const jb_Any* init) : ExtendableEvent(em_Val_global("BackgroundFetchEvent").new_(em_Val_from(type), em_Val_from(init))) {
        return BackgroundFetchEvent(em_Val_new(em_Val_global("BackgroundFetchEvent", em_Val_from(type), em_Val_from(init)));
      }


BackgroundFetchRegistration BackgroundFetchEvent_registration(const BackgroundFetchEvent *self) {
    return em_Val_as(BackgroundFetchRegistration, em_Val_get(ExtendableEvent_as_val(self->inner), "registration"));
}

