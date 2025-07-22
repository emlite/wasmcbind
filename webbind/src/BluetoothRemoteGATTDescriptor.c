#include <webbind/BluetoothRemoteGATTDescriptor.h>
#include <webbind/BluetoothRemoteGATTCharacteristic.h>


DEFINE_EMLITE_TYPE(BluetoothRemoteGATTDescriptor, em_Val);


BluetoothRemoteGATTCharacteristic BluetoothRemoteGATTDescriptor_characteristic(const BluetoothRemoteGATTDescriptor *self) {
    return em_Val_as(BluetoothRemoteGATTCharacteristic, em_Val_get(em_Val_as_val(self->inner), "characteristic"));
}


jb_Any BluetoothRemoteGATTDescriptor_uuid(const BluetoothRemoteGATTDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "uuid"));
}


jb_DataView BluetoothRemoteGATTDescriptor_value(const BluetoothRemoteGATTDescriptor *self) {
    return em_Val_as(jb_DataView, em_Val_get(em_Val_as_val(self->inner), "value"));
}


jb_Promise BluetoothRemoteGATTDescriptor_readValue(BluetoothRemoteGATTDescriptor* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "readValue"));
}


jb_Promise BluetoothRemoteGATTDescriptor_writeValue(BluetoothRemoteGATTDescriptor* self , const jb_Any* value) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "writeValue", em_Val_from(value)));
}

