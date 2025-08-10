#include <webbind/BackgroundFetchEvent.h>

#include <webbind/BackgroundFetchEventInit.h>
#include <webbind/BackgroundFetchRegistration.h>

DEFINE_EMLITE_TYPE(BackgroundFetchEvent, ExtendableEvent);


BackgroundFetchEvent BackgroundFetchEvent_new(jb_String * type, BackgroundFetchEventInit * init) {
        em_Val vv = em_Val_new(em_Val_global("BackgroundFetchEvent") , em_Val_from(type), em_Val_from(init));
        return BackgroundFetchEvent_from_val(&vv);
      }


BackgroundFetchRegistration BackgroundFetchEvent_registration(const BackgroundFetchEvent *self) {
    return em_Val_as(BackgroundFetchRegistration, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("registration")));
}

