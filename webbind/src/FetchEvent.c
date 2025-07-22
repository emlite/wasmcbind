#include <webbind/FetchEvent.h>
#include <webbind/Request.h>
#include <webbind/Response.h>


DEFINE_EMLITE_TYPE(FetchEvent, ExtendableEvent);


FetchEvent FetchEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : ExtendableEvent(em_Val_global("FetchEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return FetchEvent(em_Val_new(em_Val_global("FetchEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


Request FetchEvent_request(const FetchEvent *self) {
    return em_Val_as(Request, em_Val_get(ExtendableEvent_as_val(self->inner), "request"));
}


jb_Promise FetchEvent_preloadResponse(const FetchEvent *self) {
    return em_Val_as(jb_Promise, em_Val_get(ExtendableEvent_as_val(self->inner), "preloadResponse"));
}


jb_DOMString FetchEvent_clientId(const FetchEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(ExtendableEvent_as_val(self->inner), "clientId"));
}


jb_DOMString FetchEvent_resultingClientId(const FetchEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(ExtendableEvent_as_val(self->inner), "resultingClientId"));
}


jb_DOMString FetchEvent_replacesClientId(const FetchEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(ExtendableEvent_as_val(self->inner), "replacesClientId"));
}


jb_Promise FetchEvent_handled(const FetchEvent *self) {
    return em_Val_as(jb_Promise, em_Val_get(ExtendableEvent_as_val(self->inner), "handled"));
}


jb_Undefined FetchEvent_respondWith(FetchEvent* self , const jb_Promise* r) {
    return em_Val_as(jb_Undefined, em_Val_call(ExtendableEvent_as_val(self->inner), "respondWith", em_Val_from(r)));
}

