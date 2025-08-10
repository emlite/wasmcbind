#include <webbind/SerialPort.h>

#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>
#include <webbind/SerialPortInfo.h>
#include <webbind/SerialOptions.h>
#include <webbind/SerialOutputSignals.h>
#include <webbind/SerialInputSignals.h>

DEFINE_EMLITE_TYPE(SerialPort, EventTarget);


jb_Any SerialPort_onconnect(const SerialPort *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onconnect")));
}


void SerialPort_set_onconnect(SerialPort* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onconnect"), em_Val_from(value));
}


jb_Any SerialPort_ondisconnect(const SerialPort *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondisconnect")));
}


void SerialPort_set_ondisconnect(SerialPort* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondisconnect"), em_Val_from(value));
}


bool SerialPort_connected(const SerialPort *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("connected")));
}


ReadableStream SerialPort_readable(const SerialPort *self) {
    return em_Val_as(ReadableStream, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("readable")));
}


WritableStream SerialPort_writable(const SerialPort *self) {
    return em_Val_as(WritableStream, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("writable")));
}


SerialPortInfo SerialPort_getInfo(SerialPort* self ) {
    return em_Val_as(SerialPortInfo, em_Val_call(EventTarget_as_val(self->inner), "getInfo"));
}


jb_Promise SerialPort_open(SerialPort* self , SerialOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "open", em_Val_from(options)));
}


jb_Promise SerialPort_setSignals0(SerialPort* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "setSignals"));
}


jb_Promise SerialPort_setSignals1(SerialPort* self , SerialOutputSignals * signals) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "setSignals", em_Val_from(signals)));
}


jb_Promise SerialPort_getSignals(SerialPort* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getSignals"));
}


jb_Promise SerialPort_close(SerialPort* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Promise SerialPort_forget(SerialPort* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "forget"));
}

