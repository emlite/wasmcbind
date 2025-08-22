#include <webcbind/BluetoothAdvertisingEventInit.h>

#include <webcbind/BluetoothDevice.h>
#include <webcbind/BluetoothManufacturerDataMap.h>
#include <webcbind/BluetoothServiceDataMap.h>

DEFINE_EMLITE_TYPE(BluetoothAdvertisingEventInit, EventInit);


BluetoothDevice BluetoothAdvertisingEventInit_device(const BluetoothAdvertisingEventInit *self) {
    return em_Val_as(BluetoothDevice, em_Val_get(EventInit_as_val(self->inner), em_Val_from("device")));
}


void BluetoothAdvertisingEventInit_set_device(BluetoothAdvertisingEventInit* self, BluetoothDevice * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("device"), em_Val_from(value));
}


jb_Array BluetoothAdvertisingEventInit_uuids(const BluetoothAdvertisingEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(EventInit_as_val(self->inner), em_Val_from("uuids")));
}


void BluetoothAdvertisingEventInit_set_uuids(BluetoothAdvertisingEventInit* self, jb_Array * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("uuids"), em_Val_from(value));
}


jb_String BluetoothAdvertisingEventInit_name(const BluetoothAdvertisingEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("name")));
}


void BluetoothAdvertisingEventInit_set_name(BluetoothAdvertisingEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


unsigned short BluetoothAdvertisingEventInit_appearance(const BluetoothAdvertisingEventInit *self) {
    return em_Val_as(unsigned short, em_Val_get(EventInit_as_val(self->inner), em_Val_from("appearance")));
}


void BluetoothAdvertisingEventInit_set_appearance(BluetoothAdvertisingEventInit* self, unsigned short value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("appearance"), em_Val_from(value));
}


char BluetoothAdvertisingEventInit_txPower(const BluetoothAdvertisingEventInit *self) {
    return em_Val_as(char, em_Val_get(EventInit_as_val(self->inner), em_Val_from("txPower")));
}


void BluetoothAdvertisingEventInit_set_txPower(BluetoothAdvertisingEventInit* self, char value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("txPower"), em_Val_from(value));
}


char BluetoothAdvertisingEventInit_rssi(const BluetoothAdvertisingEventInit *self) {
    return em_Val_as(char, em_Val_get(EventInit_as_val(self->inner), em_Val_from("rssi")));
}


void BluetoothAdvertisingEventInit_set_rssi(BluetoothAdvertisingEventInit* self, char value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("rssi"), em_Val_from(value));
}


BluetoothManufacturerDataMap BluetoothAdvertisingEventInit_manufacturerData(const BluetoothAdvertisingEventInit *self) {
    return em_Val_as(BluetoothManufacturerDataMap, em_Val_get(EventInit_as_val(self->inner), em_Val_from("manufacturerData")));
}


void BluetoothAdvertisingEventInit_set_manufacturerData(BluetoothAdvertisingEventInit* self, BluetoothManufacturerDataMap * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("manufacturerData"), em_Val_from(value));
}


BluetoothServiceDataMap BluetoothAdvertisingEventInit_serviceData(const BluetoothAdvertisingEventInit *self) {
    return em_Val_as(BluetoothServiceDataMap, em_Val_get(EventInit_as_val(self->inner), em_Val_from("serviceData")));
}


void BluetoothAdvertisingEventInit_set_serviceData(BluetoothAdvertisingEventInit* self, BluetoothServiceDataMap * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("serviceData"), em_Val_from(value));
}


BluetoothAdvertisingEventInit BluetoothAdvertisingEventInit_new() {
    em_Val obj = em_Val_object();
    return BluetoothAdvertisingEventInit_from_val(&obj);
}

