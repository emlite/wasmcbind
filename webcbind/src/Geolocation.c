#include <webcbind/Geolocation.h>

#include <webcbind/PositionOptions.h>

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

