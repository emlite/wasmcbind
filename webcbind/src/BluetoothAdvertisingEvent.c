#include <webcbind/BluetoothAdvertisingEvent.h>

#include <webcbind/BluetoothAdvertisingEventInit.h>
#include <webcbind/BluetoothDevice.h>
#include <webcbind/BluetoothManufacturerDataMap.h>
#include <webcbind/BluetoothServiceDataMap.h>

DEFINE_EMLITE_TYPE(BluetoothAdvertisingEvent, Event);


BluetoothAdvertisingEvent BluetoothAdvertisingEvent_new(jb_String * type, BluetoothAdvertisingEventInit * init) {
        em_Val vv = em_Val_new(em_Val_global("BluetoothAdvertisingEvent") , em_Val_from(type), em_Val_from(init));
        return BluetoothAdvertisingEvent_from_val(&vv);
      }


BluetoothDevice BluetoothAdvertisingEvent_device(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(BluetoothDevice, em_Val_get(Event_as_val(self->inner), em_Val_from("device")));
}


jb_Array BluetoothAdvertisingEvent_uuids(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(Event_as_val(self->inner), em_Val_from("uuids")));
}


jb_String BluetoothAdvertisingEvent_name(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("name")));
}


unsigned short BluetoothAdvertisingEvent_appearance(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(unsigned short, em_Val_get(Event_as_val(self->inner), em_Val_from("appearance")));
}


char BluetoothAdvertisingEvent_txPower(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(char, em_Val_get(Event_as_val(self->inner), em_Val_from("txPower")));
}


char BluetoothAdvertisingEvent_rssi(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(char, em_Val_get(Event_as_val(self->inner), em_Val_from("rssi")));
}


BluetoothManufacturerDataMap BluetoothAdvertisingEvent_manufacturerData(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(BluetoothManufacturerDataMap, em_Val_get(Event_as_val(self->inner), em_Val_from("manufacturerData")));
}


BluetoothServiceDataMap BluetoothAdvertisingEvent_serviceData(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(BluetoothServiceDataMap, em_Val_get(Event_as_val(self->inner), em_Val_from("serviceData")));
}

