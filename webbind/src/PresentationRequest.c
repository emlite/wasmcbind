#include <webbind/PresentationRequest.h>

#include <webbind/PresentationConnection.h>
#include <webbind/PresentationAvailability.h>

DEFINE_EMLITE_TYPE(PresentationRequest, EventTarget);


PresentationRequest PresentationRequest_new(jb_Array * urls) {
        em_Val vv = em_Val_new(em_Val_global("PresentationRequest") , em_Val_from(urls));
        return PresentationRequest_from_val(&vv);
      }


jb_Promise PresentationRequest_start(PresentationRequest* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "start"));
}


jb_Promise PresentationRequest_reconnect(PresentationRequest* self , jb_String * presentationId) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "reconnect", em_Val_from(presentationId)));
}


jb_Promise PresentationRequest_getAvailability(PresentationRequest* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getAvailability"));
}


jb_Any PresentationRequest_onconnectionavailable(const PresentationRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onconnectionavailable")));
}


void PresentationRequest_set_onconnectionavailable(PresentationRequest* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onconnectionavailable"), em_Val_from(value));
}

