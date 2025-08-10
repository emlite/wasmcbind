#include <webbind/BluetoothDevice.h>

#include <webbind/BluetoothRemoteGATTServer.h>
#include <webbind/WatchAdvertisementsOptions.h>

DEFINE_EMLITE_TYPE(BluetoothDevice, EventTarget);


jb_String BluetoothDevice_id(const BluetoothDevice *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


jb_String BluetoothDevice_name(const BluetoothDevice *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("name")));
}


BluetoothRemoteGATTServer BluetoothDevice_gatt(const BluetoothDevice *self) {
    return em_Val_as(BluetoothRemoteGATTServer, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("gatt")));
}


jb_Promise BluetoothDevice_forget(BluetoothDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "forget"));
}


jb_Promise BluetoothDevice_watchAdvertisements0(BluetoothDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "watchAdvertisements"));
}


jb_Promise BluetoothDevice_watchAdvertisements1(BluetoothDevice* self , WatchAdvertisementsOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "watchAdvertisements", em_Val_from(options)));
}


bool BluetoothDevice_watchingAdvertisements(const BluetoothDevice *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("watchingAdvertisements")));
}


jb_Any BluetoothDevice_onadvertisementreceived(const BluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onadvertisementreceived")));
}


void BluetoothDevice_set_onadvertisementreceived(BluetoothDevice* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onadvertisementreceived"), em_Val_from(value));
}


jb_Any BluetoothDevice_ongattserverdisconnected(const BluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ongattserverdisconnected")));
}


void BluetoothDevice_set_ongattserverdisconnected(BluetoothDevice* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ongattserverdisconnected"), em_Val_from(value));
}


jb_Any BluetoothDevice_oncharacteristicvaluechanged(const BluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncharacteristicvaluechanged")));
}


void BluetoothDevice_set_oncharacteristicvaluechanged(BluetoothDevice* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncharacteristicvaluechanged"), em_Val_from(value));
}


jb_Any BluetoothDevice_onserviceadded(const BluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onserviceadded")));
}


void BluetoothDevice_set_onserviceadded(BluetoothDevice* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onserviceadded"), em_Val_from(value));
}


jb_Any BluetoothDevice_onservicechanged(const BluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onservicechanged")));
}


void BluetoothDevice_set_onservicechanged(BluetoothDevice* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onservicechanged"), em_Val_from(value));
}


jb_Any BluetoothDevice_onserviceremoved(const BluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onserviceremoved")));
}


void BluetoothDevice_set_onserviceremoved(BluetoothDevice* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onserviceremoved"), em_Val_from(value));
}

