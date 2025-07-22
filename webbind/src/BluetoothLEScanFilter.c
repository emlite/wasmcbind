#include <webbind/BluetoothLEScanFilter.h>
#include <webbind/BluetoothManufacturerDataFilter.h>
#include <webbind/BluetoothServiceDataFilter.h>


DEFINE_EMLITE_TYPE(BluetoothLEScanFilter, em_Val);


BluetoothLEScanFilter BluetoothLEScanFilter_new() : em_Val(em_Val_global("BluetoothLEScanFilter").new_()) {
        return BluetoothLEScanFilter(em_Val_new(em_Val_global("BluetoothLEScanFilter", ));
      }


BluetoothLEScanFilter BluetoothLEScanFilter_new(const jb_Any* init) : em_Val(em_Val_global("BluetoothLEScanFilter").new_(em_Val_from(init))) {
        return BluetoothLEScanFilter(em_Val_new(em_Val_global("BluetoothLEScanFilter", em_Val_from(init)));
      }


jb_DOMString BluetoothLEScanFilter_name(const BluetoothLEScanFilter *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


jb_DOMString BluetoothLEScanFilter_namePrefix(const BluetoothLEScanFilter *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "namePrefix"));
}


jb_FrozenArray BluetoothLEScanFilter_services(const BluetoothLEScanFilter *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "services"));
}


BluetoothManufacturerDataFilter BluetoothLEScanFilter_manufacturerData(const BluetoothLEScanFilter *self) {
    return em_Val_as(BluetoothManufacturerDataFilter, em_Val_get(em_Val_as_val(self->inner), "manufacturerData"));
}


BluetoothServiceDataFilter BluetoothLEScanFilter_serviceData(const BluetoothLEScanFilter *self) {
    return em_Val_as(BluetoothServiceDataFilter, em_Val_get(em_Val_as_val(self->inner), "serviceData"));
}

