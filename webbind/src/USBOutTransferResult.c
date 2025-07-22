#include <webbind/USBOutTransferResult.h>


DEFINE_EMLITE_TYPE(USBOutTransferResult, em_Val);


USBOutTransferResult USBOutTransferResult_new(const USBTransferStatus* status) : em_Val(em_Val_global("USBOutTransferResult").new_(em_Val_from(status))) {
        return USBOutTransferResult(em_Val_new(em_Val_global("USBOutTransferResult", em_Val_from(status)));
      }


USBOutTransferResult USBOutTransferResult_new(const USBTransferStatus* status, unsigned long bytesWritten) : em_Val(em_Val_global("USBOutTransferResult").new_(em_Val_from(status), em_Val_from(bytesWritten))) {
        return USBOutTransferResult(em_Val_new(em_Val_global("USBOutTransferResult", em_Val_from(status), em_Val_from(bytesWritten)));
      }


unsigned long USBOutTransferResult_bytesWritten(const USBOutTransferResult *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "bytesWritten"));
}


USBTransferStatus USBOutTransferResult_status(const USBOutTransferResult *self) {
    return em_Val_as(USBTransferStatus, em_Val_get(em_Val_as_val(self->inner), "status"));
}

