#include <webbind/USBIsochronousInTransferPacket.h>


DEFINE_EMLITE_TYPE(USBIsochronousInTransferPacket, em_Val);


USBIsochronousInTransferPacket USBIsochronousInTransferPacket_new(const USBTransferStatus* status) : em_Val(em_Val_global("USBIsochronousInTransferPacket").new_(em_Val_from(status))) {
        return USBIsochronousInTransferPacket(em_Val_new(em_Val_global("USBIsochronousInTransferPacket", em_Val_from(status)));
      }


USBIsochronousInTransferPacket USBIsochronousInTransferPacket_new(const USBTransferStatus* status, const jb_DataView* data) : em_Val(em_Val_global("USBIsochronousInTransferPacket").new_(em_Val_from(status), em_Val_from(data))) {
        return USBIsochronousInTransferPacket(em_Val_new(em_Val_global("USBIsochronousInTransferPacket", em_Val_from(status), em_Val_from(data)));
      }


jb_DataView USBIsochronousInTransferPacket_data(const USBIsochronousInTransferPacket *self) {
    return em_Val_as(jb_DataView, em_Val_get(em_Val_as_val(self->inner), "data"));
}


USBTransferStatus USBIsochronousInTransferPacket_status(const USBIsochronousInTransferPacket *self) {
    return em_Val_as(USBTransferStatus, em_Val_get(em_Val_as_val(self->inner), "status"));
}

