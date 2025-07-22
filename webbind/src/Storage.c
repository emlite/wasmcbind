#include <webbind/Storage.h>


DEFINE_EMLITE_TYPE(Storage, em_Val);


unsigned long Storage_length(const Storage *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


jb_DOMString Storage_key(Storage* self , unsigned long index) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "key", em_Val_from(index)));
}


jb_DOMString Storage_getItem(Storage* self , jb_DOMString * key) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getItem", em_Val_from(key)));
}


jb_Undefined Storage_setItem(Storage* self , jb_DOMString * key, jb_DOMString * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setItem", em_Val_from(key), em_Val_from(value)));
}


jb_Undefined Storage_removeItem(Storage* self , jb_DOMString * key) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeItem", em_Val_from(key)));
}


jb_Undefined Storage_clear(Storage* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}

