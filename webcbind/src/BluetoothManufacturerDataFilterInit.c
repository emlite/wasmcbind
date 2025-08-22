#include <webcbind/BluetoothManufacturerDataFilterInit.h>

DEFINE_EMLITE_TYPE(BluetoothManufacturerDataFilterInit, BluetoothDataFilterInit);


unsigned short BluetoothManufacturerDataFilterInit_companyIdentifier(const BluetoothManufacturerDataFilterInit *self) {
    return em_Val_as(unsigned short, em_Val_get(BluetoothDataFilterInit_as_val(self->inner), em_Val_from("companyIdentifier")));
}


void BluetoothManufacturerDataFilterInit_set_companyIdentifier(BluetoothManufacturerDataFilterInit* self, unsigned short value) {
    em_Val_set(BluetoothDataFilterInit_as_val(self->inner), em_Val_from("companyIdentifier"), em_Val_from(value));
}


BluetoothManufacturerDataFilterInit BluetoothManufacturerDataFilterInit_new() {
    em_Val obj = em_Val_object();
    return BluetoothManufacturerDataFilterInit_from_val(&obj);
}

