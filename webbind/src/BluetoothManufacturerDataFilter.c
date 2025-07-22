#include <webbind/BluetoothManufacturerDataFilter.h>


DEFINE_EMLITE_TYPE(BluetoothManufacturerDataFilter, em_Val);


BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter_new0() {
        em_Val vv = em_Val_new(em_Val_global("BluetoothManufacturerDataFilter") );
        return BluetoothManufacturerDataFilter_from_val(&vv);
      }


BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter_new1(jb_Object * init) {
        em_Val vv = em_Val_new(em_Val_global("BluetoothManufacturerDataFilter") , em_Val_from(init));
        return BluetoothManufacturerDataFilter_from_val(&vv);
      }

