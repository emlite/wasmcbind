#include <webbind/NavigatorManagedData.h>


DEFINE_EMLITE_TYPE(NavigatorManagedData, EventTarget);


jb_Promise NavigatorManagedData_getManagedConfiguration(NavigatorManagedData* self , jb_Array * keys) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getManagedConfiguration", em_Val_from(keys)));
}


jb_Any NavigatorManagedData_onmanagedconfigurationchange(const NavigatorManagedData *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmanagedconfigurationchange")));
}


void NavigatorManagedData_set_onmanagedconfigurationchange(NavigatorManagedData* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmanagedconfigurationchange"), em_Val_from(value));
}


jb_Promise NavigatorManagedData_getAnnotatedAssetId(NavigatorManagedData* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getAnnotatedAssetId"));
}


jb_Promise NavigatorManagedData_getAnnotatedLocation(NavigatorManagedData* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getAnnotatedLocation"));
}


jb_Promise NavigatorManagedData_getDirectoryId(NavigatorManagedData* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDirectoryId"));
}


jb_Promise NavigatorManagedData_getHostname(NavigatorManagedData* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getHostname"));
}


jb_Promise NavigatorManagedData_getSerialNumber(NavigatorManagedData* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getSerialNumber"));
}

