#include <webbind/BluetoothCharacteristicProperties.h>


DEFINE_EMLITE_TYPE(BluetoothCharacteristicProperties, em_Val);


bool BluetoothCharacteristicProperties_broadcast(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "broadcast"));
}


bool BluetoothCharacteristicProperties_read(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "read"));
}


bool BluetoothCharacteristicProperties_writeWithoutResponse(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "writeWithoutResponse"));
}


bool BluetoothCharacteristicProperties_write(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "write"));
}


bool BluetoothCharacteristicProperties_notify(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "notify"));
}


bool BluetoothCharacteristicProperties_indicate(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "indicate"));
}


bool BluetoothCharacteristicProperties_authenticatedSignedWrites(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "authenticatedSignedWrites"));
}


bool BluetoothCharacteristicProperties_reliableWrite(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "reliableWrite"));
}


bool BluetoothCharacteristicProperties_writableAuxiliaries(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "writableAuxiliaries"));
}

