#include <webcbind/WebGLShaderPrecisionFormat.h>

DEFINE_EMLITE_TYPE(WebGLShaderPrecisionFormat, em_Val);


jb_Any WebGLShaderPrecisionFormat_rangeMin(const WebGLShaderPrecisionFormat *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeMin")));
}


jb_Any WebGLShaderPrecisionFormat_rangeMax(const WebGLShaderPrecisionFormat *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeMax")));
}


jb_Any WebGLShaderPrecisionFormat_precision(const WebGLShaderPrecisionFormat *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("precision")));
}

