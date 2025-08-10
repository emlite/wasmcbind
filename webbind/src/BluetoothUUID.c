#include <webbind/BluetoothUUID.h>

DEFINE_EMLITE_TYPE(BluetoothUUID, em_Val);


jb_Any BluetoothUUID_getService(BluetoothUUID* self , jb_Any * name) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_global("bluetoothuuid"), "getService", em_Val_from(name)));
}


jb_Any BluetoothUUID_getCharacteristic(BluetoothUUID* self , jb_Any * name) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_global("bluetoothuuid"), "getCharacteristic", em_Val_from(name)));
}


jb_Any BluetoothUUID_getDescriptor(BluetoothUUID* self , jb_Any * name) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_global("bluetoothuuid"), "getDescriptor", em_Val_from(name)));
}


jb_Any BluetoothUUID_canonicalUUID(BluetoothUUID* self , unsigned long alias) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_global("bluetoothuuid"), "canonicalUUID", em_Val_from(alias)));
}

