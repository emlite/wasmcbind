#include <webbind/USBOutTransferResult.h>

DEFINE_EMLITE_TYPE(USBOutTransferResult, em_Val);


USBOutTransferResult USBOutTransferResult_new0(USBTransferStatus * status) {
        em_Val vv = em_Val_new(em_Val_global("USBOutTransferResult") , em_Val_from(status));
        return USBOutTransferResult_from_val(&vv);
      }


USBOutTransferResult USBOutTransferResult_new1(USBTransferStatus * status, unsigned long bytesWritten) {
        em_Val vv = em_Val_new(em_Val_global("USBOutTransferResult") , em_Val_from(status), em_Val_from(bytesWritten));
        return USBOutTransferResult_from_val(&vv);
      }


unsigned long USBOutTransferResult_bytesWritten(const USBOutTransferResult *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesWritten")));
}


USBTransferStatus USBOutTransferResult_status(const USBOutTransferResult *self) {
    return em_Val_as(USBTransferStatus, em_Val_get(em_Val_as_val(self->inner), em_Val_from("status")));
}

