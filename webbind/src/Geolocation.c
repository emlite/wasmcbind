#include <webbind/Geolocation.h>


DEFINE_EMLITE_TYPE(PositionOptions, em_Val);


bool PositionOptions_enableHighAccuracy(const PositionOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("enableHighAccuracy")));
}


void PositionOptions_set_enableHighAccuracy(PositionOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("enableHighAccuracy"), em_Val_from(value));
}


unsigned long PositionOptions_timeout(const PositionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void PositionOptions_set_timeout(PositionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


unsigned long PositionOptions_maximumAge(const PositionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maximumAge")));
}


void PositionOptions_set_maximumAge(PositionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maximumAge"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Geolocation, em_Val);


jb_Undefined Geolocation_getCurrentPosition0(Geolocation* self , jb_Function * successCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getCurrentPosition", em_Val_from(successCallback)));
}


jb_Undefined Geolocation_getCurrentPosition1(Geolocation* self , jb_Function * successCallback, jb_Function * errorCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getCurrentPosition", em_Val_from(successCallback), em_Val_from(errorCallback)));
}


jb_Undefined Geolocation_getCurrentPosition2(Geolocation* self , jb_Function * successCallback, jb_Function * errorCallback, PositionOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getCurrentPosition", em_Val_from(successCallback), em_Val_from(errorCallback), em_Val_from(options)));
}


long Geolocation_watchPosition0(Geolocation* self , jb_Function * successCallback) {
    return em_Val_as(long, em_Val_call(em_Val_as_val(self->inner), "watchPosition", em_Val_from(successCallback)));
}


long Geolocation_watchPosition1(Geolocation* self , jb_Function * successCallback, jb_Function * errorCallback) {
    return em_Val_as(long, em_Val_call(em_Val_as_val(self->inner), "watchPosition", em_Val_from(successCallback), em_Val_from(errorCallback)));
}


long Geolocation_watchPosition2(Geolocation* self , jb_Function * successCallback, jb_Function * errorCallback, PositionOptions * options) {
    return em_Val_as(long, em_Val_call(em_Val_as_val(self->inner), "watchPosition", em_Val_from(successCallback), em_Val_from(errorCallback), em_Val_from(options)));
}


jb_Undefined Geolocation_clearWatch(Geolocation* self , long watchId) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearWatch", em_Val_from(watchId)));
}

