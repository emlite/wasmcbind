#include <webcbind/USBInTransferResult.h>

DEFINE_EMLITE_TYPE(USBInTransferResult, em_Val);


USBInTransferResult USBInTransferResult_new0(USBTransferStatus * status) {
        em_Val vv = em_Val_new(em_Val_global("USBInTransferResult") , em_Val_from(status));
        return USBInTransferResult_from_val(&vv);
      }


USBInTransferResult USBInTransferResult_new1(USBTransferStatus * status, jb_DataView * data) {
        em_Val vv = em_Val_new(em_Val_global("USBInTransferResult") , em_Val_from(status), em_Val_from(data));
        return USBInTransferResult_from_val(&vv);
      }


jb_DataView USBInTransferResult_data(const USBInTransferResult *self) {
    return em_Val_as(jb_DataView, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


USBTransferStatus USBInTransferResult_status(const USBInTransferResult *self) {
    return em_Val_as(USBTransferStatus, em_Val_get(em_Val_as_val(self->inner), em_Val_from("status")));
}

