#include <webbind/BluetoothAdvertisingEvent.h>
#include <webbind/BluetoothDevice.h>
#include <webbind/BluetoothManufacturerDataMap.h>
#include <webbind/BluetoothServiceDataMap.h>


DEFINE_EMLITE_TYPE(BluetoothAdvertisingEvent, Event);


BluetoothAdvertisingEvent BluetoothAdvertisingEvent_new(const jb_DOMString* type, const jb_Any* init) : Event(em_Val_global("BluetoothAdvertisingEvent").new_(em_Val_from(type), em_Val_from(init))) {
        return BluetoothAdvertisingEvent(em_Val_new(em_Val_global("BluetoothAdvertisingEvent", em_Val_from(type), em_Val_from(init)));
      }


BluetoothDevice BluetoothAdvertisingEvent_device(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(BluetoothDevice, em_Val_get(Event_as_val(self->inner), "device"));
}


jb_FrozenArray BluetoothAdvertisingEvent_uuids(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), "uuids"));
}


jb_DOMString BluetoothAdvertisingEvent_name(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "name"));
}


unsigned short BluetoothAdvertisingEvent_appearance(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(unsigned short, em_Val_get(Event_as_val(self->inner), "appearance"));
}


char BluetoothAdvertisingEvent_txPower(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(char, em_Val_get(Event_as_val(self->inner), "txPower"));
}


char BluetoothAdvertisingEvent_rssi(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(char, em_Val_get(Event_as_val(self->inner), "rssi"));
}


BluetoothManufacturerDataMap BluetoothAdvertisingEvent_manufacturerData(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(BluetoothManufacturerDataMap, em_Val_get(Event_as_val(self->inner), "manufacturerData"));
}


BluetoothServiceDataMap BluetoothAdvertisingEvent_serviceData(const BluetoothAdvertisingEvent *self) {
    return em_Val_as(BluetoothServiceDataMap, em_Val_get(Event_as_val(self->inner), "serviceData"));
}

