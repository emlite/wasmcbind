#include <webbind/USBInTransferResult.h>


DEFINE_EMLITE_TYPE(USBInTransferResult, em_Val);


USBInTransferResult USBInTransferResult_new(const USBTransferStatus* status) : em_Val(em_Val_global("USBInTransferResult").new_(em_Val_from(status))) {
        return USBInTransferResult(em_Val_new(em_Val_global("USBInTransferResult", em_Val_from(status)));
      }


USBInTransferResult USBInTransferResult_new(const USBTransferStatus* status, const jb_DataView* data) : em_Val(em_Val_global("USBInTransferResult").new_(em_Val_from(status), em_Val_from(data))) {
        return USBInTransferResult(em_Val_new(em_Val_global("USBInTransferResult", em_Val_from(status), em_Val_from(data)));
      }


jb_DataView USBInTransferResult_data(const USBInTransferResult *self) {
    return em_Val_as(jb_DataView, em_Val_get(em_Val_as_val(self->inner), "data"));
}


USBTransferStatus USBInTransferResult_status(const USBInTransferResult *self) {
    return em_Val_as(USBTransferStatus, em_Val_get(em_Val_as_val(self->inner), "status"));
}

