#include <webbind/StylePropertyMapReadOnly.h>
#include <webbind/CSSStyleValue.h>


DEFINE_EMLITE_TYPE(StylePropertyMapReadOnly, em_Val);


jb_Any StylePropertyMapReadOnly_get(StylePropertyMapReadOnly* self , jb_USVString * property) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(property)));
}


jb_Sequence StylePropertyMapReadOnly_getAll(StylePropertyMapReadOnly* self , jb_USVString * property) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getAll", em_Val_from(property)));
}


bool StylePropertyMapReadOnly_has(StylePropertyMapReadOnly* self , jb_USVString * property) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "has", em_Val_from(property)));
}


unsigned long StylePropertyMapReadOnly_size(const StylePropertyMapReadOnly *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}

