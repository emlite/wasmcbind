#include <webcbind/CameraDevicePermissionDescriptor.h>

DEFINE_EMLITE_TYPE(CameraDevicePermissionDescriptor, PermissionDescriptor);


bool CameraDevicePermissionDescriptor_panTiltZoom(const CameraDevicePermissionDescriptor *self) {
    return em_Val_as(bool, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("panTiltZoom")));
}


void CameraDevicePermissionDescriptor_set_panTiltZoom(CameraDevicePermissionDescriptor* self, bool value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("panTiltZoom"), em_Val_from(value));
}


CameraDevicePermissionDescriptor CameraDevicePermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return CameraDevicePermissionDescriptor_from_val(&obj);
}

