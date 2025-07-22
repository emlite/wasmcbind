#include <webbind/Geolocation.h>


DEFINE_EMLITE_TYPE(PositionOptions, em_Val);


bool PositionOptions_enableHighAccuracy(const PositionOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "enableHighAccuracy"));
}


void PositionOptions_set_enableHighAccuracy(PositionOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "enableHighAccuracy", value);
}


unsigned long PositionOptions_timeout(const PositionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "timeout"));
}


void PositionOptions_set_timeout(PositionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "timeout", value);
}


unsigned long PositionOptions_maximumAge(const PositionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maximumAge"));
}


void PositionOptions_set_maximumAge(PositionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "maximumAge", value);
}

DEFINE_EMLITE_TYPE(Geolocation, em_Val);


jb_Undefined Geolocation_getCurrentPosition(Geolocation* self , const jb_Function* successCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getCurrentPosition", em_Val_from(successCallback)));
}


jb_Undefined Geolocation_getCurrentPosition(Geolocation* self , const jb_Function* successCallback, const jb_Function* errorCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getCurrentPosition", em_Val_from(successCallback), em_Val_from(errorCallback)));
}


jb_Undefined Geolocation_getCurrentPosition(Geolocation* self , const jb_Function* successCallback, const jb_Function* errorCallback, const PositionOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getCurrentPosition", em_Val_from(successCallback), em_Val_from(errorCallback), em_Val_from(options)));
}


long Geolocation_watchPosition(Geolocation* self , const jb_Function* successCallback) {
    return em_Val_as(long, em_Val_call(em_Val_as_val(self->inner), "watchPosition", em_Val_from(successCallback)));
}


long Geolocation_watchPosition(Geolocation* self , const jb_Function* successCallback, const jb_Function* errorCallback) {
    return em_Val_as(long, em_Val_call(em_Val_as_val(self->inner), "watchPosition", em_Val_from(successCallback), em_Val_from(errorCallback)));
}


long Geolocation_watchPosition(Geolocation* self , const jb_Function* successCallback, const jb_Function* errorCallback, const PositionOptions* options) {
    return em_Val_as(long, em_Val_call(em_Val_as_val(self->inner), "watchPosition", em_Val_from(successCallback), em_Val_from(errorCallback), em_Val_from(options)));
}


jb_Undefined Geolocation_clearWatch(Geolocation* self , long watchId) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearWatch", em_Val_from(watchId)));
}

