#include <webcbind/FetchEvent.h>

#include <webcbind/FetchEventInit.h>
#include <webcbind/Request.h>
#include <webcbind/Response.h>

DEFINE_EMLITE_TYPE(FetchEvent, ExtendableEvent);


FetchEvent FetchEvent_new(jb_String * type, FetchEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("FetchEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return FetchEvent_from_val(&vv);
      }


Request FetchEvent_request(const FetchEvent *self) {
    return em_Val_as(Request, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("request")));
}


jb_Promise FetchEvent_preloadResponse(const FetchEvent *self) {
    return em_Val_as(jb_Promise, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("preloadResponse")));
}


jb_String FetchEvent_clientId(const FetchEvent *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("clientId")));
}


jb_String FetchEvent_resultingClientId(const FetchEvent *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("resultingClientId")));
}


jb_String FetchEvent_replacesClientId(const FetchEvent *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("replacesClientId")));
}


jb_Promise FetchEvent_handled(const FetchEvent *self) {
    return em_Val_as(jb_Promise, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("handled")));
}


jb_Undefined FetchEvent_respondWith(FetchEvent* self , jb_Promise * r) {
    return em_Val_as(jb_Undefined, em_Val_call(ExtendableEvent_as_val(self->inner), "respondWith", em_Val_from(r)));
}

