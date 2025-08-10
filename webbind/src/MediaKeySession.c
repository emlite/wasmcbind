#include <webbind/MediaKeySession.h>

#include <webbind/MediaKeyStatusMap.h>

DEFINE_EMLITE_TYPE(MediaKeySession, EventTarget);


jb_String MediaKeySession_sessionId(const MediaKeySession *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("sessionId")));
}


double MediaKeySession_expiration(const MediaKeySession *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("expiration")));
}


jb_Promise MediaKeySession_closed(const MediaKeySession *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("closed")));
}


MediaKeyStatusMap MediaKeySession_keyStatuses(const MediaKeySession *self) {
    return em_Val_as(MediaKeyStatusMap, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("keyStatuses")));
}


jb_Any MediaKeySession_onkeystatuseschange(const MediaKeySession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onkeystatuseschange")));
}


void MediaKeySession_set_onkeystatuseschange(MediaKeySession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onkeystatuseschange"), em_Val_from(value));
}


jb_Any MediaKeySession_onmessage(const MediaKeySession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessage")));
}


void MediaKeySession_set_onmessage(MediaKeySession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


jb_Promise MediaKeySession_generateRequest(MediaKeySession* self , jb_String * initDataType, jb_Any * initData) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "generateRequest", em_Val_from(initDataType), em_Val_from(initData)));
}


jb_Promise MediaKeySession_load(MediaKeySession* self , jb_String * sessionId) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "load", em_Val_from(sessionId)));
}


jb_Promise MediaKeySession_update(MediaKeySession* self , jb_Any * response) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "update", em_Val_from(response)));
}


jb_Promise MediaKeySession_close(MediaKeySession* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Promise MediaKeySession_remove(MediaKeySession* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "remove"));
}

