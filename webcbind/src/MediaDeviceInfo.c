#include <webcbind/MediaDeviceInfo.h>

DEFINE_EMLITE_TYPE(MediaDeviceInfo, em_Val);


jb_String MediaDeviceInfo_deviceId(const MediaDeviceInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("deviceId")));
}


MediaDeviceKind MediaDeviceInfo_kind(const MediaDeviceInfo *self) {
    return em_Val_as(MediaDeviceKind, em_Val_get(em_Val_as_val(self->inner), em_Val_from("kind")));
}


jb_String MediaDeviceInfo_label(const MediaDeviceInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


jb_String MediaDeviceInfo_groupId(const MediaDeviceInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("groupId")));
}


jb_Object MediaDeviceInfo_toJSON(MediaDeviceInfo* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

