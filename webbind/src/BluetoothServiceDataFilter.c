#include <webbind/BluetoothServiceDataFilter.h>


DEFINE_EMLITE_TYPE(BluetoothServiceDataFilter, em_Val);


BluetoothServiceDataFilter BluetoothServiceDataFilter_new0() {
        em_Val vv = em_Val_new(em_Val_global("BluetoothServiceDataFilter") );
        return BluetoothServiceDataFilter_from_val(&vv);
      }


BluetoothServiceDataFilter BluetoothServiceDataFilter_new1(jb_Object * init) {
        em_Val vv = em_Val_new(em_Val_global("BluetoothServiceDataFilter") , em_Val_from(init));
        return BluetoothServiceDataFilter_from_val(&vv);
      }

