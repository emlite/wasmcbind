#include <webbind/MediaKeys.h>
#include <webbind/MediaKeySession.h>


DEFINE_EMLITE_TYPE(MediaKeysPolicy, em_Val);


jb_String MediaKeysPolicy_minHdcpVersion(const MediaKeysPolicy *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minHdcpVersion")));
}


void MediaKeysPolicy_set_minHdcpVersion(MediaKeysPolicy* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("minHdcpVersion"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MediaKeys, em_Val);


MediaKeySession MediaKeys_createSession0(MediaKeys* self ) {
    return em_Val_as(MediaKeySession, em_Val_call(em_Val_as_val(self->inner), "createSession"));
}


MediaKeySession MediaKeys_createSession1(MediaKeys* self , MediaKeySessionType * sessionType) {
    return em_Val_as(MediaKeySession, em_Val_call(em_Val_as_val(self->inner), "createSession", em_Val_from(sessionType)));
}


jb_Promise MediaKeys_getStatusForPolicy0(MediaKeys* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getStatusForPolicy"));
}


jb_Promise MediaKeys_getStatusForPolicy1(MediaKeys* self , MediaKeysPolicy * policy) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getStatusForPolicy", em_Val_from(policy)));
}


jb_Promise MediaKeys_setServerCertificate(MediaKeys* self , jb_Any * serverCertificate) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setServerCertificate", em_Val_from(serverCertificate)));
}

