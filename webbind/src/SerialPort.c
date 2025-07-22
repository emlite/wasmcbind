#include <webbind/SerialPort.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>


DEFINE_EMLITE_TYPE(SerialPortInfo, em_Val);


unsigned short SerialPortInfo_usbVendorId(const SerialPortInfo *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usbVendorId")));
}


void SerialPortInfo_set_usbVendorId(SerialPortInfo* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usbVendorId"), em_Val_from(value));
}


unsigned short SerialPortInfo_usbProductId(const SerialPortInfo *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usbProductId")));
}


void SerialPortInfo_set_usbProductId(SerialPortInfo* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usbProductId"), em_Val_from(value));
}


jb_Any SerialPortInfo_bluetoothServiceClassId(const SerialPortInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bluetoothServiceClassId")));
}


void SerialPortInfo_set_bluetoothServiceClassId(SerialPortInfo* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bluetoothServiceClassId"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SerialOptions, em_Val);


unsigned long SerialOptions_baudRate(const SerialOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baudRate")));
}


void SerialOptions_set_baudRate(SerialOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("baudRate"), em_Val_from(value));
}


unsigned char SerialOptions_dataBits(const SerialOptions *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataBits")));
}


void SerialOptions_set_dataBits(SerialOptions* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataBits"), em_Val_from(value));
}


unsigned char SerialOptions_stopBits(const SerialOptions *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stopBits")));
}


void SerialOptions_set_stopBits(SerialOptions* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stopBits"), em_Val_from(value));
}


ParityType SerialOptions_parity(const SerialOptions *self) {
    return em_Val_as(ParityType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("parity")));
}


void SerialOptions_set_parity(SerialOptions* self, ParityType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("parity"), em_Val_from(value));
}


unsigned long SerialOptions_bufferSize(const SerialOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bufferSize")));
}


void SerialOptions_set_bufferSize(SerialOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bufferSize"), em_Val_from(value));
}


FlowControlType SerialOptions_flowControl(const SerialOptions *self) {
    return em_Val_as(FlowControlType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("flowControl")));
}


void SerialOptions_set_flowControl(SerialOptions* self, FlowControlType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("flowControl"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SerialOutputSignals, em_Val);


bool SerialOutputSignals_dataTerminalReady(const SerialOutputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataTerminalReady")));
}


void SerialOutputSignals_set_dataTerminalReady(SerialOutputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataTerminalReady"), em_Val_from(value));
}


bool SerialOutputSignals_requestToSend(const SerialOutputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestToSend")));
}


void SerialOutputSignals_set_requestToSend(SerialOutputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestToSend"), em_Val_from(value));
}


bool SerialOutputSignals_break_(const SerialOutputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("break")));
}


void SerialOutputSignals_set_break_(SerialOutputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("break"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SerialInputSignals, em_Val);


bool SerialInputSignals_dataCarrierDetect(const SerialInputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataCarrierDetect")));
}


void SerialInputSignals_set_dataCarrierDetect(SerialInputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataCarrierDetect"), em_Val_from(value));
}


bool SerialInputSignals_clearToSend(const SerialInputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clearToSend")));
}


void SerialInputSignals_set_clearToSend(SerialInputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clearToSend"), em_Val_from(value));
}


bool SerialInputSignals_ringIndicator(const SerialInputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ringIndicator")));
}


void SerialInputSignals_set_ringIndicator(SerialInputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ringIndicator"), em_Val_from(value));
}


bool SerialInputSignals_dataSetReady(const SerialInputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataSetReady")));
}


void SerialInputSignals_set_dataSetReady(SerialInputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataSetReady"), em_Val_from(value));
}

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

