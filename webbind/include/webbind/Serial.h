#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct SerialPort SerialPort;
typedef struct SerialPortRequestOptions SerialPortRequestOptions;


typedef struct {
  em_Val inner;
} SerialPortRequestOptions;


DECLARE_EMLITE_TYPE(SerialPortRequestOptions, em_Val);

jb_Sequence SerialPortRequestOptions_filters( const SerialPortRequestOptions *self);

void SerialPortRequestOptions_set_filters(SerialPortRequestOptions* self, const jb_Sequence* value);

jb_Sequence SerialPortRequestOptions_allowedBluetoothServiceClassIds( const SerialPortRequestOptions *self);

void SerialPortRequestOptions_set_allowedBluetoothServiceClassIds(SerialPortRequestOptions* self, const jb_Sequence* value);
typedef struct {
  EventTarget inner;
} Serial;


DECLARE_EMLITE_TYPE(Serial, EventTarget);

jb_Any Serial_onconnect( const Serial *self);

void Serial_set_onconnect(Serial* self, const jb_Any* value);

jb_Any Serial_ondisconnect( const Serial *self);

void Serial_set_ondisconnect(Serial* self, const jb_Any* value);

jb_Promise Serial_getPorts(Serial* self );

jb_Promise Serial_requestPort(Serial* self );

jb_Promise Serial_requestPort(Serial* self , const SerialPortRequestOptions* options);
