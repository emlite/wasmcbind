#include <webbind/BluetoothLEScan.h>
#include <webbind/BluetoothLEScanFilter.h>


DEFINE_EMLITE_TYPE(BluetoothLEScan, em_Val);


jb_Array BluetoothLEScan_filters(const BluetoothLEScan *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filters")));
}


bool BluetoothLEScan_keepRepeatedDevices(const BluetoothLEScan *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keepRepeatedDevices")));
}


bool BluetoothLEScan_acceptAllAdvertisements(const BluetoothLEScan *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("acceptAllAdvertisements")));
}


bool BluetoothLEScan_active(const BluetoothLEScan *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("active")));
}


jb_Undefined BluetoothLEScan_stop(BluetoothLEScan* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "stop"));
}

