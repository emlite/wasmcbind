#include <webbind/BluetoothRemoteGATTServer.h>
#include <webbind/BluetoothDevice.h>
#include <webbind/BluetoothRemoteGATTService.h>


DEFINE_EMLITE_TYPE(BluetoothRemoteGATTServer, em_Val);


BluetoothDevice BluetoothRemoteGATTServer_device(const BluetoothRemoteGATTServer *self) {
    return em_Val_as(BluetoothDevice, em_Val_get(em_Val_as_val(self->inner), "device"));
}


bool BluetoothRemoteGATTServer_connected(const BluetoothRemoteGATTServer *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "connected"));
}


jb_Promise BluetoothRemoteGATTServer_connect(BluetoothRemoteGATTServer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "connect"));
}


jb_Undefined BluetoothRemoteGATTServer_disconnect(BluetoothRemoteGATTServer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disconnect"));
}


jb_Promise BluetoothRemoteGATTServer_getPrimaryService(BluetoothRemoteGATTServer* self , const jb_Any* service) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getPrimaryService", em_Val_from(service)));
}


jb_Promise BluetoothRemoteGATTServer_getPrimaryServices(BluetoothRemoteGATTServer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getPrimaryServices"));
}


jb_Promise BluetoothRemoteGATTServer_getPrimaryServices(BluetoothRemoteGATTServer* self , const jb_Any* service) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getPrimaryServices", em_Val_from(service)));
}

