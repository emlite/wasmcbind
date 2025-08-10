#include <webbind/BluetoothCharacteristicProperties.h>

DEFINE_EMLITE_TYPE(BluetoothCharacteristicProperties, em_Val);


bool BluetoothCharacteristicProperties_broadcast(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("broadcast")));
}


bool BluetoothCharacteristicProperties_read(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("read")));
}


bool BluetoothCharacteristicProperties_writeWithoutResponse(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writeWithoutResponse")));
}


bool BluetoothCharacteristicProperties_write(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("write")));
}


bool BluetoothCharacteristicProperties_notify(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("notify")));
}


bool BluetoothCharacteristicProperties_indicate(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("indicate")));
}


bool BluetoothCharacteristicProperties_authenticatedSignedWrites(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("authenticatedSignedWrites")));
}


bool BluetoothCharacteristicProperties_reliableWrite(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reliableWrite")));
}


bool BluetoothCharacteristicProperties_writableAuxiliaries(const BluetoothCharacteristicProperties *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writableAuxiliaries")));
}

