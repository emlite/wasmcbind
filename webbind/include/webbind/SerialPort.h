#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;
typedef struct SerialPortInfo SerialPortInfo;
typedef struct SerialOptions SerialOptions;
typedef struct SerialOutputSignals SerialOutputSignals;
typedef struct SerialInputSignals SerialInputSignals;

DECLARE_EMLITE_TYPE(SerialPort, EventTarget);

jb_Any SerialPort_onconnect(const SerialPort *self);

void SerialPort_set_onconnect(SerialPort* self, jb_Any * value);

jb_Any SerialPort_ondisconnect(const SerialPort *self);

void SerialPort_set_ondisconnect(SerialPort* self, jb_Any * value);

bool SerialPort_connected(const SerialPort *self);

ReadableStream SerialPort_readable(const SerialPort *self);

WritableStream SerialPort_writable(const SerialPort *self);

SerialPortInfo SerialPort_getInfo(SerialPort* self );

jb_Promise SerialPort_open(SerialPort* self , SerialOptions * options);

jb_Promise SerialPort_setSignals0(SerialPort* self );

jb_Promise SerialPort_setSignals1(SerialPort* self , SerialOutputSignals * signals);

jb_Promise SerialPort_getSignals(SerialPort* self );

jb_Promise SerialPort_close(SerialPort* self );

jb_Promise SerialPort_forget(SerialPort* self );

#ifdef __cplusplus
}
#endif
