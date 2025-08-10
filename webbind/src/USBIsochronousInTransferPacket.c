#include <webbind/USBIsochronousInTransferPacket.h>

DEFINE_EMLITE_TYPE(USBIsochronousInTransferPacket, em_Val);


USBIsochronousInTransferPacket USBIsochronousInTransferPacket_new0(USBTransferStatus * status) {
        em_Val vv = em_Val_new(em_Val_global("USBIsochronousInTransferPacket") , em_Val_from(status));
        return USBIsochronousInTransferPacket_from_val(&vv);
      }


USBIsochronousInTransferPacket USBIsochronousInTransferPacket_new1(USBTransferStatus * status, jb_DataView * data) {
        em_Val vv = em_Val_new(em_Val_global("USBIsochronousInTransferPacket") , em_Val_from(status), em_Val_from(data));
        return USBIsochronousInTransferPacket_from_val(&vv);
      }


jb_DataView USBIsochronousInTransferPacket_data(const USBIsochronousInTransferPacket *self) {
    return em_Val_as(jb_DataView, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


USBTransferStatus USBIsochronousInTransferPacket_status(const USBIsochronousInTransferPacket *self) {
    return em_Val_as(USBTransferStatus, em_Val_get(em_Val_as_val(self->inner), em_Val_from("status")));
}

