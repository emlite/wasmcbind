#include <webbind/USBIsochronousOutTransferResult.h>
#include <webbind/USBIsochronousOutTransferPacket.h>


DEFINE_EMLITE_TYPE(USBIsochronousOutTransferResult, em_Val);


USBIsochronousOutTransferResult USBIsochronousOutTransferResult_new(const jb_Sequence* packets) : em_Val(em_Val_global("USBIsochronousOutTransferResult").new_(em_Val_from(packets))) {
        return USBIsochronousOutTransferResult(em_Val_new(em_Val_global("USBIsochronousOutTransferResult", em_Val_from(packets)));
      }


jb_FrozenArray USBIsochronousOutTransferResult_packets(const USBIsochronousOutTransferResult *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "packets"));
}

