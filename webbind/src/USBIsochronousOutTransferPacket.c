#include <webbind/USBIsochronousOutTransferPacket.h>


DEFINE_EMLITE_TYPE(USBIsochronousOutTransferPacket, em_Val);


USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket_new(const USBTransferStatus* status) : em_Val(em_Val_global("USBIsochronousOutTransferPacket").new_(em_Val_from(status))) {
        return USBIsochronousOutTransferPacket(em_Val_new(em_Val_global("USBIsochronousOutTransferPacket", em_Val_from(status)));
      }


USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket_new(const USBTransferStatus* status, unsigned long bytesWritten) : em_Val(em_Val_global("USBIsochronousOutTransferPacket").new_(em_Val_from(status), em_Val_from(bytesWritten))) {
        return USBIsochronousOutTransferPacket(em_Val_new(em_Val_global("USBIsochronousOutTransferPacket", em_Val_from(status), em_Val_from(bytesWritten)));
      }


unsigned long USBIsochronousOutTransferPacket_bytesWritten(const USBIsochronousOutTransferPacket *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "bytesWritten"));
}


USBTransferStatus USBIsochronousOutTransferPacket_status(const USBIsochronousOutTransferPacket *self) {
    return em_Val_as(USBTransferStatus, em_Val_get(em_Val_as_val(self->inner), "status"));
}

