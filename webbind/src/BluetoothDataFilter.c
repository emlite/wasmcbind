#include <webbind/BluetoothDataFilter.h>


DEFINE_EMLITE_TYPE(BluetoothDataFilter, em_Val);


BluetoothDataFilter BluetoothDataFilter_new0() {
        em_Val vv = em_Val_new(em_Val_global("BluetoothDataFilter") );
        return BluetoothDataFilter_from_val(&vv);
      }


BluetoothDataFilter BluetoothDataFilter_new1(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("BluetoothDataFilter") , em_Val_from(init));
        return BluetoothDataFilter_from_val(&vv);
      }


jb_ArrayBuffer BluetoothDataFilter_dataPrefix(const BluetoothDataFilter *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataPrefix")));
}


jb_ArrayBuffer BluetoothDataFilter_mask(const BluetoothDataFilter *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mask")));
}

