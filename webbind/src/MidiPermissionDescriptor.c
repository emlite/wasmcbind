#include <webbind/MidiPermissionDescriptor.h>

DEFINE_EMLITE_TYPE(MidiPermissionDescriptor, PermissionDescriptor);


bool MidiPermissionDescriptor_sysex(const MidiPermissionDescriptor *self) {
    return em_Val_as(bool, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("sysex")));
}


void MidiPermissionDescriptor_set_sysex(MidiPermissionDescriptor* self, bool value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("sysex"), em_Val_from(value));
}


MidiPermissionDescriptor MidiPermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return MidiPermissionDescriptor_from_val(&obj);
}

