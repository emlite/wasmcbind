#include <webbind/USBIsochronousInTransferResult.h>
#include <webbind/USBIsochronousInTransferPacket.h>


DEFINE_EMLITE_TYPE(USBIsochronousInTransferResult, em_Val);


USBIsochronousInTransferResult USBIsochronousInTransferResult_new(const jb_Sequence* packets) : em_Val(em_Val_global("USBIsochronousInTransferResult").new_(em_Val_from(packets))) {
        return USBIsochronousInTransferResult(em_Val_new(em_Val_global("USBIsochronousInTransferResult", em_Val_from(packets)));
      }


USBIsochronousInTransferResult USBIsochronousInTransferResult_new(const jb_Sequence* packets, const jb_DataView* data) : em_Val(em_Val_global("USBIsochronousInTransferResult").new_(em_Val_from(packets), em_Val_from(data))) {
        return USBIsochronousInTransferResult(em_Val_new(em_Val_global("USBIsochronousInTransferResult", em_Val_from(packets), em_Val_from(data)));
      }


jb_DataView USBIsochronousInTransferResult_data(const USBIsochronousInTransferResult *self) {
    return em_Val_as(jb_DataView, em_Val_get(em_Val_as_val(self->inner), "data"));
}


jb_FrozenArray USBIsochronousInTransferResult_packets(const USBIsochronousInTransferResult *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "packets"));
}

