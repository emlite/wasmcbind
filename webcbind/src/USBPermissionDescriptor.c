#include <webcbind/USBPermissionDescriptor.h>

DEFINE_EMLITE_TYPE(USBPermissionDescriptor, PermissionDescriptor);


jb_Array USBPermissionDescriptor_filters(const USBPermissionDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("filters")));
}


void USBPermissionDescriptor_set_filters(USBPermissionDescriptor* self, jb_Array * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("filters"), em_Val_from(value));
}


jb_Array USBPermissionDescriptor_exclusionFilters(const USBPermissionDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("exclusionFilters")));
}


void USBPermissionDescriptor_set_exclusionFilters(USBPermissionDescriptor* self, jb_Array * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("exclusionFilters"), em_Val_from(value));
}


USBPermissionDescriptor USBPermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return USBPermissionDescriptor_from_val(&obj);
}

