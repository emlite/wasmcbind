#include <webbind/USBIsochronousInTransferResult.h>

#include <webbind/USBIsochronousInTransferPacket.h>

DEFINE_EMLITE_TYPE(USBIsochronousInTransferResult, em_Val);


USBIsochronousInTransferResult USBIsochronousInTransferResult_new0(jb_Array * packets) {
        em_Val vv = em_Val_new(em_Val_global("USBIsochronousInTransferResult") , em_Val_from(packets));
        return USBIsochronousInTransferResult_from_val(&vv);
      }


USBIsochronousInTransferResult USBIsochronousInTransferResult_new1(jb_Array * packets, jb_DataView * data) {
        em_Val vv = em_Val_new(em_Val_global("USBIsochronousInTransferResult") , em_Val_from(packets), em_Val_from(data));
        return USBIsochronousInTransferResult_from_val(&vv);
      }


jb_DataView USBIsochronousInTransferResult_data(const USBIsochronousInTransferResult *self) {
    return em_Val_as(jb_DataView, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


jb_Array USBIsochronousInTransferResult_packets(const USBIsochronousInTransferResult *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("packets")));
}

