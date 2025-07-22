#include <webbind/BluetoothDataFilter.h>


DEFINE_EMLITE_TYPE(BluetoothDataFilter, em_Val);


BluetoothDataFilter BluetoothDataFilter_new() : em_Val(em_Val_global("BluetoothDataFilter").new_()) {
        return BluetoothDataFilter(em_Val_new(em_Val_global("BluetoothDataFilter", ));
      }


BluetoothDataFilter BluetoothDataFilter_new(const jb_Any* init) : em_Val(em_Val_global("BluetoothDataFilter").new_(em_Val_from(init))) {
        return BluetoothDataFilter(em_Val_new(em_Val_global("BluetoothDataFilter", em_Val_from(init)));
      }


jb_ArrayBuffer BluetoothDataFilter_dataPrefix(const BluetoothDataFilter *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), "dataPrefix"));
}


jb_ArrayBuffer BluetoothDataFilter_mask(const BluetoothDataFilter *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), "mask"));
}

