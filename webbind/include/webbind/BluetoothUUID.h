#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} BluetoothUUID;


DECLARE_EMLITE_TYPE(BluetoothUUID, em_Val);

jb_Any BluetoothUUID_getService(BluetoothUUID* self , const jb_Any* name);

jb_Any BluetoothUUID_getCharacteristic(BluetoothUUID* self , const jb_Any* name);

jb_Any BluetoothUUID_getDescriptor(BluetoothUUID* self , const jb_Any* name);

jb_Any BluetoothUUID_canonicalUUID(BluetoothUUID* self , unsigned long alias);
