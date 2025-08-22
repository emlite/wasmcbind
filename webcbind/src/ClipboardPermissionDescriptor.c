#include <webcbind/ClipboardPermissionDescriptor.h>

DEFINE_EMLITE_TYPE(ClipboardPermissionDescriptor, PermissionDescriptor);


bool ClipboardPermissionDescriptor_allowWithoutGesture(const ClipboardPermissionDescriptor *self) {
    return em_Val_as(bool, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("allowWithoutGesture")));
}


void ClipboardPermissionDescriptor_set_allowWithoutGesture(ClipboardPermissionDescriptor* self, bool value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("allowWithoutGesture"), em_Val_from(value));
}


ClipboardPermissionDescriptor ClipboardPermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return ClipboardPermissionDescriptor_from_val(&obj);
}

