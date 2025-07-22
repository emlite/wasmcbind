#include <webbind/BluetoothLEScanFilter.h>
#include <webbind/BluetoothManufacturerDataFilter.h>
#include <webbind/BluetoothServiceDataFilter.h>


DEFINE_EMLITE_TYPE(BluetoothLEScanFilter, em_Val);


BluetoothLEScanFilter BluetoothLEScanFilter_new0() {
        em_Val vv = em_Val_new(em_Val_global("BluetoothLEScanFilter") );
        return BluetoothLEScanFilter_from_val(&vv);
      }


BluetoothLEScanFilter BluetoothLEScanFilter_new1(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("BluetoothLEScanFilter") , em_Val_from(init));
        return BluetoothLEScanFilter_from_val(&vv);
      }


jb_DOMString BluetoothLEScanFilter_name(const BluetoothLEScanFilter *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


jb_DOMString BluetoothLEScanFilter_namePrefix(const BluetoothLEScanFilter *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("namePrefix")));
}


jb_FrozenArray BluetoothLEScanFilter_services(const BluetoothLEScanFilter *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("services")));
}


BluetoothManufacturerDataFilter BluetoothLEScanFilter_manufacturerData(const BluetoothLEScanFilter *self) {
    return em_Val_as(BluetoothManufacturerDataFilter, em_Val_get(em_Val_as_val(self->inner), em_Val_from("manufacturerData")));
}


BluetoothServiceDataFilter BluetoothLEScanFilter_serviceData(const BluetoothLEScanFilter *self) {
    return em_Val_as(BluetoothServiceDataFilter, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serviceData")));
}

