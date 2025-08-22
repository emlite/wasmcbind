#include <webcbind/NetworkInformation.h>

DEFINE_EMLITE_TYPE(NetworkInformation, EventTarget);


ConnectionType NetworkInformation_type(const NetworkInformation *self) {
    return em_Val_as(ConnectionType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("type")));
}


EffectiveConnectionType NetworkInformation_effectiveType(const NetworkInformation *self) {
    return em_Val_as(EffectiveConnectionType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("effectiveType")));
}


jb_Any NetworkInformation_downlinkMax(const NetworkInformation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("downlinkMax")));
}


jb_Any NetworkInformation_downlink(const NetworkInformation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("downlink")));
}


jb_Any NetworkInformation_rtt(const NetworkInformation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("rtt")));
}


jb_Any NetworkInformation_onchange(const NetworkInformation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchange")));
}


void NetworkInformation_set_onchange(NetworkInformation* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchange"), em_Val_from(value));
}


bool NetworkInformation_saveData(const NetworkInformation *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("saveData")));
}

