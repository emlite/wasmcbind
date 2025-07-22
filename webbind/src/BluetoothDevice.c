#include <webbind/BluetoothDevice.h>
#include <webbind/BluetoothRemoteGATTServer.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(WatchAdvertisementsOptions, em_Val);


AbortSignal WatchAdvertisementsOptions_signal(const WatchAdvertisementsOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void WatchAdvertisementsOptions_set_signal(WatchAdvertisementsOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(BluetoothDevice, EventTarget);


jb_DOMString BluetoothDevice_id(const BluetoothDevice *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "id"));
}


jb_DOMString BluetoothDevice_name(const BluetoothDevice *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "name"));
}


BluetoothRemoteGATTServer BluetoothDevice_gatt(const BluetoothDevice *self) {
    return em_Val_as(BluetoothRemoteGATTServer, em_Val_get(EventTarget_as_val(self->inner), "gatt"));
}


jb_Promise BluetoothDevice_forget(BluetoothDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "forget"));
}


jb_Promise BluetoothDevice_watchAdvertisements(BluetoothDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "watchAdvertisements"));
}


jb_Promise BluetoothDevice_watchAdvertisements(BluetoothDevice* self , const WatchAdvertisementsOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "watchAdvertisements", em_Val_from(options)));
}


bool BluetoothDevice_watchingAdvertisements(const BluetoothDevice *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "watchingAdvertisements"));
}


jb_Any BluetoothDevice_onadvertisementreceived(const BluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onadvertisementreceived"));
}


void BluetoothDevice_set_onadvertisementreceived(BluetoothDevice* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onadvertisementreceived", value);
}


jb_Any BluetoothDevice_ongattserverdisconnected(const BluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ongattserverdisconnected"));
}


void BluetoothDevice_set_ongattserverdisconnected(BluetoothDevice* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ongattserverdisconnected", value);
}


jb_Any BluetoothDevice_oncharacteristicvaluechanged(const BluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oncharacteristicvaluechanged"));
}


void BluetoothDevice_set_oncharacteristicvaluechanged(BluetoothDevice* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oncharacteristicvaluechanged", value);
}


jb_Any BluetoothDevice_onserviceadded(const BluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onserviceadded"));
}


void BluetoothDevice_set_onserviceadded(BluetoothDevice* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onserviceadded", value);
}


jb_Any BluetoothDevice_onservicechanged(const BluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onservicechanged"));
}


void BluetoothDevice_set_onservicechanged(BluetoothDevice* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onservicechanged", value);
}


jb_Any BluetoothDevice_onserviceremoved(const BluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onserviceremoved"));
}


void BluetoothDevice_set_onserviceremoved(BluetoothDevice* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onserviceremoved", value);
}

