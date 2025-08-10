#include <webbind/DataTransferItemList.h>

#include <webbind/DataTransferItem.h>
#include <webbind/File.h>

DEFINE_EMLITE_TYPE(DataTransferItemList, em_Val);


unsigned long DataTransferItemList_length(const DataTransferItemList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


DataTransferItem DataTransferItemList_add(DataTransferItemList* self , File * data) {
    return em_Val_as(DataTransferItem, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(data)));
}


jb_Undefined DataTransferItemList_remove(DataTransferItemList* self , unsigned long index) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "remove", em_Val_from(index)));
}


jb_Undefined DataTransferItemList_clear(DataTransferItemList* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}

