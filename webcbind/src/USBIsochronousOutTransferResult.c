#include <webcbind/USBIsochronousOutTransferResult.h>

#include <webcbind/USBIsochronousOutTransferPacket.h>

DEFINE_EMLITE_TYPE(USBIsochronousOutTransferResult, em_Val);


USBIsochronousOutTransferResult USBIsochronousOutTransferResult_new(jb_Array * packets) {
        em_Val vv = em_Val_new(em_Val_global("USBIsochronousOutTransferResult") , em_Val_from(packets));
        return USBIsochronousOutTransferResult_from_val(&vv);
      }


jb_Array USBIsochronousOutTransferResult_packets(const USBIsochronousOutTransferResult *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("packets")));
}

