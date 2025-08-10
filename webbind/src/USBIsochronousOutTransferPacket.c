#include <webbind/USBIsochronousOutTransferPacket.h>

DEFINE_EMLITE_TYPE(USBIsochronousOutTransferPacket, em_Val);


USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket_new0(USBTransferStatus * status) {
        em_Val vv = em_Val_new(em_Val_global("USBIsochronousOutTransferPacket") , em_Val_from(status));
        return USBIsochronousOutTransferPacket_from_val(&vv);
      }


USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket_new1(USBTransferStatus * status, unsigned long bytesWritten) {
        em_Val vv = em_Val_new(em_Val_global("USBIsochronousOutTransferPacket") , em_Val_from(status), em_Val_from(bytesWritten));
        return USBIsochronousOutTransferPacket_from_val(&vv);
      }


unsigned long USBIsochronousOutTransferPacket_bytesWritten(const USBIsochronousOutTransferPacket *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesWritten")));
}


USBTransferStatus USBIsochronousOutTransferPacket_status(const USBIsochronousOutTransferPacket *self) {
    return em_Val_as(USBTransferStatus, em_Val_get(em_Val_as_val(self->inner), em_Val_from("status")));
}

