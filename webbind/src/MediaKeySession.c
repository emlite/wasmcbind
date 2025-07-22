#include <webbind/MediaKeySession.h>
#include <webbind/MediaKeyStatusMap.h>


DEFINE_EMLITE_TYPE(MediaKeySession, EventTarget);


jb_DOMString MediaKeySession_sessionId(const MediaKeySession *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "sessionId"));
}


double MediaKeySession_expiration(const MediaKeySession *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "expiration"));
}


jb_Promise MediaKeySession_closed(const MediaKeySession *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), "closed"));
}


MediaKeyStatusMap MediaKeySession_keyStatuses(const MediaKeySession *self) {
    return em_Val_as(MediaKeyStatusMap, em_Val_get(EventTarget_as_val(self->inner), "keyStatuses"));
}


jb_Any MediaKeySession_onkeystatuseschange(const MediaKeySession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onkeystatuseschange"));
}


void MediaKeySession_set_onkeystatuseschange(MediaKeySession* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onkeystatuseschange", value);
}


jb_Any MediaKeySession_onmessage(const MediaKeySession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessage"));
}


void MediaKeySession_set_onmessage(MediaKeySession* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessage", value);
}


jb_Promise MediaKeySession_generateRequest(MediaKeySession* self , const jb_DOMString* initDataType, const jb_Any* initData) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "generateRequest", em_Val_from(initDataType), em_Val_from(initData)));
}


jb_Promise MediaKeySession_load(MediaKeySession* self , const jb_DOMString* sessionId) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "load", em_Val_from(sessionId)));
}


jb_Promise MediaKeySession_update(MediaKeySession* self , const jb_Any* response) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "update", em_Val_from(response)));
}


jb_Promise MediaKeySession_close(MediaKeySession* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Promise MediaKeySession_remove(MediaKeySession* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "remove"));
}

