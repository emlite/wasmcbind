#include <webbind/DataTransfer.h>
#include <webbind/DataTransferItemList.h>
#include <webbind/Element.h>
#include <webbind/FileList.h>


DEFINE_EMLITE_TYPE(DataTransfer, em_Val);


DataTransfer DataTransfer_new() {
        em_Val vv = em_Val_new(em_Val_global("DataTransfer") );
        return DataTransfer_from_val(&vv);
      }


jb_DOMString DataTransfer_dropEffect(const DataTransfer *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dropEffect")));
}


void DataTransfer_set_dropEffect(DataTransfer* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dropEffect"), em_Val_from(value));
}


jb_DOMString DataTransfer_effectAllowed(const DataTransfer *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("effectAllowed")));
}


void DataTransfer_set_effectAllowed(DataTransfer* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("effectAllowed"), em_Val_from(value));
}


DataTransferItemList DataTransfer_items(const DataTransfer *self) {
    return em_Val_as(DataTransferItemList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("items")));
}


jb_Undefined DataTransfer_setDragImage(DataTransfer* self , Element * image, long x, long y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setDragImage", em_Val_from(image), em_Val_from(x), em_Val_from(y)));
}


jb_FrozenArray DataTransfer_types(const DataTransfer *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("types")));
}


jb_DOMString DataTransfer_getData(DataTransfer* self , jb_DOMString * format) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getData", em_Val_from(format)));
}


jb_Undefined DataTransfer_setData(DataTransfer* self , jb_DOMString * format, jb_DOMString * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setData", em_Val_from(format), em_Val_from(data)));
}


jb_Undefined DataTransfer_clearData0(DataTransfer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearData"));
}


jb_Undefined DataTransfer_clearData1(DataTransfer* self , jb_DOMString * format) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearData", em_Val_from(format)));
}


FileList DataTransfer_files(const DataTransfer *self) {
    return em_Val_as(FileList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("files")));
}

