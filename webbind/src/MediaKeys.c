#include <webbind/MediaKeys.h>
#include <webbind/MediaKeySession.h>


DEFINE_EMLITE_TYPE(MediaKeysPolicy, em_Val);


jb_DOMString MediaKeysPolicy_minHdcpVersion(const MediaKeysPolicy *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "minHdcpVersion"));
}


void MediaKeysPolicy_set_minHdcpVersion(MediaKeysPolicy* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "minHdcpVersion", value);
}

DEFINE_EMLITE_TYPE(MediaKeys, em_Val);


MediaKeySession MediaKeys_createSession(MediaKeys* self ) {
    return em_Val_as(MediaKeySession, em_Val_call(em_Val_as_val(self->inner), "createSession"));
}


MediaKeySession MediaKeys_createSession(MediaKeys* self , const MediaKeySessionType* sessionType) {
    return em_Val_as(MediaKeySession, em_Val_call(em_Val_as_val(self->inner), "createSession", em_Val_from(sessionType)));
}


jb_Promise MediaKeys_getStatusForPolicy(MediaKeys* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getStatusForPolicy"));
}


jb_Promise MediaKeys_getStatusForPolicy(MediaKeys* self , const MediaKeysPolicy* policy) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getStatusForPolicy", em_Val_from(policy)));
}


jb_Promise MediaKeys_setServerCertificate(MediaKeys* self , const jb_Any* serverCertificate) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setServerCertificate", em_Val_from(serverCertificate)));
}

