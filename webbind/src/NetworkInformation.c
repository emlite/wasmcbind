#include <webbind/NetworkInformation.h>


DEFINE_EMLITE_TYPE(NetworkInformation, EventTarget);


ConnectionType NetworkInformation_type(const NetworkInformation *self) {
    return em_Val_as(ConnectionType, em_Val_get(EventTarget_as_val(self->inner), "type"));
}


EffectiveConnectionType NetworkInformation_effectiveType(const NetworkInformation *self) {
    return em_Val_as(EffectiveConnectionType, em_Val_get(EventTarget_as_val(self->inner), "effectiveType"));
}


jb_Any NetworkInformation_downlinkMax(const NetworkInformation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "downlinkMax"));
}


jb_Any NetworkInformation_downlink(const NetworkInformation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "downlink"));
}


jb_Any NetworkInformation_rtt(const NetworkInformation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "rtt"));
}


jb_Any NetworkInformation_onchange(const NetworkInformation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onchange"));
}


void NetworkInformation_set_onchange(NetworkInformation* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onchange", value);
}


bool NetworkInformation_saveData(const NetworkInformation *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "saveData"));
}

