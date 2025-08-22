#include <webcbind/NavigatorUAData.h>

#include <webcbind/NavigatorUABrandVersion.h>
#include <webcbind/UADataValues.h>
#include <webcbind/UALowEntropyJSON.h>

DEFINE_EMLITE_TYPE(NavigatorUAData, em_Val);


jb_Array NavigatorUAData_brands(const NavigatorUAData *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("brands")));
}


bool NavigatorUAData_mobile(const NavigatorUAData *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mobile")));
}


jb_String NavigatorUAData_platform(const NavigatorUAData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("platform")));
}


jb_Promise NavigatorUAData_getHighEntropyValues(NavigatorUAData* self , jb_Array * hints) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getHighEntropyValues", em_Val_from(hints)));
}


UALowEntropyJSON NavigatorUAData_toJSON(NavigatorUAData* self ) {
    return em_Val_as(UALowEntropyJSON, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

