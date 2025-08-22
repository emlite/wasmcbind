#include <webcbind/USBBlocklistEntry.h>

DEFINE_EMLITE_TYPE(USBBlocklistEntry, em_Val);


unsigned short USBBlocklistEntry_idVendor(const USBBlocklistEntry *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("idVendor")));
}


void USBBlocklistEntry_set_idVendor(USBBlocklistEntry* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("idVendor"), em_Val_from(value));
}


unsigned short USBBlocklistEntry_idProduct(const USBBlocklistEntry *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("idProduct")));
}


void USBBlocklistEntry_set_idProduct(USBBlocklistEntry* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("idProduct"), em_Val_from(value));
}


unsigned short USBBlocklistEntry_bcdDevice(const USBBlocklistEntry *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bcdDevice")));
}


void USBBlocklistEntry_set_bcdDevice(USBBlocklistEntry* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bcdDevice"), em_Val_from(value));
}


USBBlocklistEntry USBBlocklistEntry_new() {
    em_Val obj = em_Val_object();
    return USBBlocklistEntry_from_val(&obj);
}

