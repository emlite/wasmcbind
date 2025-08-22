#include <webcbind/ConvertCoordinateOptions.h>

DEFINE_EMLITE_TYPE(ConvertCoordinateOptions, em_Val);


CSSBoxType ConvertCoordinateOptions_fromBox(const ConvertCoordinateOptions *self) {
    return em_Val_as(CSSBoxType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fromBox")));
}


void ConvertCoordinateOptions_set_fromBox(ConvertCoordinateOptions* self, CSSBoxType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fromBox"), em_Val_from(value));
}


CSSBoxType ConvertCoordinateOptions_toBox(const ConvertCoordinateOptions *self) {
    return em_Val_as(CSSBoxType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("toBox")));
}


void ConvertCoordinateOptions_set_toBox(ConvertCoordinateOptions* self, CSSBoxType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("toBox"), em_Val_from(value));
}


ConvertCoordinateOptions ConvertCoordinateOptions_new() {
    em_Val obj = em_Val_object();
    return ConvertCoordinateOptions_from_val(&obj);
}

