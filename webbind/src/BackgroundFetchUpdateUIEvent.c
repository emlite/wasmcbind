#include <webbind/BackgroundFetchUpdateUIEvent.h>

#include <webbind/BackgroundFetchEventInit.h>
#include <webbind/BackgroundFetchUIOptions.h>

DEFINE_EMLITE_TYPE(BackgroundFetchUpdateUIEvent, BackgroundFetchEvent);


BackgroundFetchUpdateUIEvent BackgroundFetchUpdateUIEvent_new(jb_String * type, BackgroundFetchEventInit * init) {
        em_Val vv = em_Val_new(em_Val_global("BackgroundFetchUpdateUIEvent") , em_Val_from(type), em_Val_from(init));
        return BackgroundFetchUpdateUIEvent_from_val(&vv);
      }


jb_Promise BackgroundFetchUpdateUIEvent_updateUI0(BackgroundFetchUpdateUIEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(BackgroundFetchEvent_as_val(self->inner), "updateUI"));
}


jb_Promise BackgroundFetchUpdateUIEvent_updateUI1(BackgroundFetchUpdateUIEvent* self , BackgroundFetchUIOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(BackgroundFetchEvent_as_val(self->inner), "updateUI", em_Val_from(options)));
}

