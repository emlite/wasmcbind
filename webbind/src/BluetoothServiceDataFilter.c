#include <webbind/BluetoothServiceDataFilter.h>


DEFINE_EMLITE_TYPE(BluetoothServiceDataFilter, em_Val);


BluetoothServiceDataFilter BluetoothServiceDataFilter_new() : em_Val(em_Val_global("BluetoothServiceDataFilter").new_()) {
        return BluetoothServiceDataFilter(em_Val_new(em_Val_global("BluetoothServiceDataFilter", ));
      }


BluetoothServiceDataFilter BluetoothServiceDataFilter_new(const jb_Object* init) : em_Val(em_Val_global("BluetoothServiceDataFilter").new_(em_Val_from(init))) {
        return BluetoothServiceDataFilter(em_Val_new(em_Val_global("BluetoothServiceDataFilter", em_Val_from(init)));
      }

