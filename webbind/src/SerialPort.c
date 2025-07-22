#include <webbind/SerialPort.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>


DEFINE_EMLITE_TYPE(SerialPortInfo, em_Val);


unsigned short SerialPortInfo_usbVendorId(const SerialPortInfo *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "usbVendorId"));
}


void SerialPortInfo_set_usbVendorId(SerialPortInfo* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "usbVendorId", value);
}


unsigned short SerialPortInfo_usbProductId(const SerialPortInfo *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "usbProductId"));
}


void SerialPortInfo_set_usbProductId(SerialPortInfo* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "usbProductId", value);
}


jb_Any SerialPortInfo_bluetoothServiceClassId(const SerialPortInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "bluetoothServiceClassId"));
}


void SerialPortInfo_set_bluetoothServiceClassId(SerialPortInfo* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "bluetoothServiceClassId", value);
}

DEFINE_EMLITE_TYPE(SerialOptions, em_Val);


unsigned long SerialOptions_baudRate(const SerialOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "baudRate"));
}


void SerialOptions_set_baudRate(SerialOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "baudRate", value);
}


unsigned char SerialOptions_dataBits(const SerialOptions *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "dataBits"));
}


void SerialOptions_set_dataBits(SerialOptions* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), "dataBits", value);
}


unsigned char SerialOptions_stopBits(const SerialOptions *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "stopBits"));
}


void SerialOptions_set_stopBits(SerialOptions* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), "stopBits", value);
}


ParityType SerialOptions_parity(const SerialOptions *self) {
    return em_Val_as(ParityType, em_Val_get(em_Val_as_val(self->inner), "parity"));
}


void SerialOptions_set_parity(SerialOptions* self, const ParityType* value) {
    em_Val_set(em_Val_as_val(self->inner), "parity", value);
}


unsigned long SerialOptions_bufferSize(const SerialOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "bufferSize"));
}


void SerialOptions_set_bufferSize(SerialOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "bufferSize", value);
}


FlowControlType SerialOptions_flowControl(const SerialOptions *self) {
    return em_Val_as(FlowControlType, em_Val_get(em_Val_as_val(self->inner), "flowControl"));
}


void SerialOptions_set_flowControl(SerialOptions* self, const FlowControlType* value) {
    em_Val_set(em_Val_as_val(self->inner), "flowControl", value);
}

DEFINE_EMLITE_TYPE(SerialOutputSignals, em_Val);


bool SerialOutputSignals_dataTerminalReady(const SerialOutputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "dataTerminalReady"));
}


void SerialOutputSignals_set_dataTerminalReady(SerialOutputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "dataTerminalReady", value);
}


bool SerialOutputSignals_requestToSend(const SerialOutputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "requestToSend"));
}


void SerialOutputSignals_set_requestToSend(SerialOutputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "requestToSend", value);
}


bool SerialOutputSignals_break_(const SerialOutputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "break"));
}


void SerialOutputSignals_set_break_(SerialOutputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "break", value);
}

DEFINE_EMLITE_TYPE(SerialInputSignals, em_Val);


bool SerialInputSignals_dataCarrierDetect(const SerialInputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "dataCarrierDetect"));
}


void SerialInputSignals_set_dataCarrierDetect(SerialInputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "dataCarrierDetect", value);
}


bool SerialInputSignals_clearToSend(const SerialInputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "clearToSend"));
}


void SerialInputSignals_set_clearToSend(SerialInputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "clearToSend", value);
}


bool SerialInputSignals_ringIndicator(const SerialInputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "ringIndicator"));
}


void SerialInputSignals_set_ringIndicator(SerialInputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "ringIndicator", value);
}


bool SerialInputSignals_dataSetReady(const SerialInputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "dataSetReady"));
}


void SerialInputSignals_set_dataSetReady(SerialInputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "dataSetReady", value);
}

DEFINE_EMLITE_TYPE(SerialPort, EventTarget);


jb_Any SerialPort_onconnect(const SerialPort *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onconnect"));
}


void SerialPort_set_onconnect(SerialPort* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onconnect", value);
}


jb_Any SerialPort_ondisconnect(const SerialPort *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondisconnect"));
}


void SerialPort_set_ondisconnect(SerialPort* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondisconnect", value);
}


bool SerialPort_connected(const SerialPort *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "connected"));
}


ReadableStream SerialPort_readable(const SerialPort *self) {
    return em_Val_as(ReadableStream, em_Val_get(EventTarget_as_val(self->inner), "readable"));
}


WritableStream SerialPort_writable(const SerialPort *self) {
    return em_Val_as(WritableStream, em_Val_get(EventTarget_as_val(self->inner), "writable"));
}


SerialPortInfo SerialPort_getInfo(SerialPort* self ) {
    return em_Val_as(SerialPortInfo, em_Val_call(EventTarget_as_val(self->inner), "getInfo"));
}


jb_Promise SerialPort_open(SerialPort* self , const SerialOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "open", em_Val_from(options)));
}


jb_Promise SerialPort_setSignals(SerialPort* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "setSignals"));
}


jb_Promise SerialPort_setSignals(SerialPort* self , const SerialOutputSignals* signals) {
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

