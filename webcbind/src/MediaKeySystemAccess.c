#include <webcbind/MediaKeySystemAccess.h>

#include <webcbind/MediaKeySystemConfiguration.h>
#include <webcbind/MediaKeys.h>

DEFINE_EMLITE_TYPE(MediaKeySystemAccess, em_Val);


jb_String MediaKeySystemAccess_keySystem(const MediaKeySystemAccess *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keySystem")));
}


MediaKeySystemConfiguration MediaKeySystemAccess_getConfiguration(MediaKeySystemAccess* self ) {
    return em_Val_as(MediaKeySystemConfiguration, em_Val_call(em_Val_as_val(self->inner), "getConfiguration"));
}


jb_Promise MediaKeySystemAccess_createMediaKeys(MediaKeySystemAccess* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createMediaKeys"));
}

