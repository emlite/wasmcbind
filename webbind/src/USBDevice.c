#include <webbind/USBDevice.h>
#include <webbind/USBConfiguration.h>
#include <webbind/USBInTransferResult.h>
#include <webbind/USBOutTransferResult.h>
#include <webbind/USBIsochronousInTransferResult.h>
#include <webbind/USBIsochronousOutTransferResult.h>


DEFINE_EMLITE_TYPE(USBControlTransferParameters, em_Val);


USBRequestType USBControlTransferParameters_requestType(const USBControlTransferParameters *self) {
    return em_Val_as(USBRequestType, em_Val_get(em_Val_as_val(self->inner), "requestType"));
}


void USBControlTransferParameters_set_requestType(USBControlTransferParameters* self, const USBRequestType* value) {
    em_Val_set(em_Val_as_val(self->inner), "requestType", value);
}


USBRecipient USBControlTransferParameters_recipient(const USBControlTransferParameters *self) {
    return em_Val_as(USBRecipient, em_Val_get(em_Val_as_val(self->inner), "recipient"));
}


void USBControlTransferParameters_set_recipient(USBControlTransferParameters* self, const USBRecipient* value) {
    em_Val_set(em_Val_as_val(self->inner), "recipient", value);
}


unsigned char USBControlTransferParameters_request(const USBControlTransferParameters *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "request"));
}


void USBControlTransferParameters_set_request(USBControlTransferParameters* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), "request", value);
}


unsigned short USBControlTransferParameters_value(const USBControlTransferParameters *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "value"));
}


void USBControlTransferParameters_set_value(USBControlTransferParameters* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "value", value);
}


unsigned short USBControlTransferParameters_index(const USBControlTransferParameters *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "index"));
}


void USBControlTransferParameters_set_index(USBControlTransferParameters* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "index", value);
}

DEFINE_EMLITE_TYPE(USBDevice, em_Val);


unsigned char USBDevice_usbVersionMajor(const USBDevice *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "usbVersionMajor"));
}


unsigned char USBDevice_usbVersionMinor(const USBDevice *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "usbVersionMinor"));
}


unsigned char USBDevice_usbVersionSubminor(const USBDevice *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "usbVersionSubminor"));
}


unsigned char USBDevice_deviceClass(const USBDevice *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "deviceClass"));
}


unsigned char USBDevice_deviceSubclass(const USBDevice *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "deviceSubclass"));
}


unsigned char USBDevice_deviceProtocol(const USBDevice *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "deviceProtocol"));
}


unsigned short USBDevice_vendorId(const USBDevice *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "vendorId"));
}


unsigned short USBDevice_productId(const USBDevice *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "productId"));
}


unsigned char USBDevice_deviceVersionMajor(const USBDevice *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "deviceVersionMajor"));
}


unsigned char USBDevice_deviceVersionMinor(const USBDevice *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "deviceVersionMinor"));
}


unsigned char USBDevice_deviceVersionSubminor(const USBDevice *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "deviceVersionSubminor"));
}


jb_DOMString USBDevice_manufacturerName(const USBDevice *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "manufacturerName"));
}


jb_DOMString USBDevice_productName(const USBDevice *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "productName"));
}


jb_DOMString USBDevice_serialNumber(const USBDevice *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "serialNumber"));
}


USBConfiguration USBDevice_configuration(const USBDevice *self) {
    return em_Val_as(USBConfiguration, em_Val_get(em_Val_as_val(self->inner), "configuration"));
}


jb_FrozenArray USBDevice_configurations(const USBDevice *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "configurations"));
}


bool USBDevice_opened(const USBDevice *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "opened"));
}


jb_Promise USBDevice_open(USBDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "open"));
}


jb_Promise USBDevice_close(USBDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "close"));
}


jb_Promise USBDevice_forget(USBDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "forget"));
}


jb_Promise USBDevice_selectConfiguration(USBDevice* self , unsigned char configurationValue) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "selectConfiguration", em_Val_from(configurationValue)));
}


jb_Promise USBDevice_claimInterface(USBDevice* self , unsigned char interfaceNumber) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "claimInterface", em_Val_from(interfaceNumber)));
}


jb_Promise USBDevice_releaseInterface(USBDevice* self , unsigned char interfaceNumber) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "releaseInterface", em_Val_from(interfaceNumber)));
}


jb_Promise USBDevice_selectAlternateInterface(USBDevice* self , unsigned char interfaceNumber, unsigned char alternateSetting) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "selectAlternateInterface", em_Val_from(interfaceNumber), em_Val_from(alternateSetting)));
}


jb_Promise USBDevice_controlTransferIn(USBDevice* self , const USBControlTransferParameters* setup, unsigned short length) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "controlTransferIn", em_Val_from(setup), em_Val_from(length)));
}


jb_Promise USBDevice_controlTransferOut(USBDevice* self , const USBControlTransferParameters* setup) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "controlTransferOut", em_Val_from(setup)));
}


jb_Promise USBDevice_controlTransferOut(USBDevice* self , const USBControlTransferParameters* setup, const jb_Any* data) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "controlTransferOut", em_Val_from(setup), em_Val_from(data)));
}


jb_Promise USBDevice_clearHalt(USBDevice* self , const USBDirection* direction, unsigned char endpointNumber) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clearHalt", em_Val_from(direction), em_Val_from(endpointNumber)));
}


jb_Promise USBDevice_transferIn(USBDevice* self , unsigned char endpointNumber, unsigned long length) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "transferIn", em_Val_from(endpointNumber), em_Val_from(length)));
}


jb_Promise USBDevice_transferOut(USBDevice* self , unsigned char endpointNumber, const jb_Any* data) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "transferOut", em_Val_from(endpointNumber), em_Val_from(data)));
}


jb_Promise USBDevice_isochronousTransferIn(USBDevice* self , unsigned char endpointNumber, const jb_Sequence* packetLengths) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "isochronousTransferIn", em_Val_from(endpointNumber), em_Val_from(packetLengths)));
}


jb_Promise USBDevice_isochronousTransferOut(USBDevice* self , unsigned char endpointNumber, const jb_Any* data, const jb_Sequence* packetLengths) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "isochronousTransferOut", em_Val_from(endpointNumber), em_Val_from(data), em_Val_from(packetLengths)));
}


jb_Promise USBDevice_reset(USBDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "reset"));
}

