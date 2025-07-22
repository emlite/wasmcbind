#include <webbind/BluetoothManufacturerDataFilter.h>


DEFINE_EMLITE_TYPE(BluetoothManufacturerDataFilter, em_Val);


BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter_new() : em_Val(em_Val_global("BluetoothManufacturerDataFilter").new_()) {
        return BluetoothManufacturerDataFilter(em_Val_new(em_Val_global("BluetoothManufacturerDataFilter", ));
      }


BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter_new(const jb_Object* init) : em_Val(em_Val_global("BluetoothManufacturerDataFilter").new_(em_Val_from(init))) {
        return BluetoothManufacturerDataFilter(em_Val_new(em_Val_global("BluetoothManufacturerDataFilter", em_Val_from(init)));
      }

