#include <webcbind/SVGTransform.h>

#include <webcbind/DOMMatrix.h>
#include <webcbind/DOMMatrix2DInit.h>

DEFINE_EMLITE_TYPE(SVGTransform, em_Val);


unsigned short SVGTransform_type(const SVGTransform *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


DOMMatrix SVGTransform_matrix(const SVGTransform *self) {
    return em_Val_as(DOMMatrix, em_Val_get(em_Val_as_val(self->inner), em_Val_from("matrix")));
}


float SVGTransform_angle(const SVGTransform *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("angle")));
}


jb_Undefined SVGTransform_setMatrix0(SVGTransform* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setMatrix"));
}


jb_Undefined SVGTransform_setMatrix1(SVGTransform* self , DOMMatrix2DInit * matrix) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setMatrix", em_Val_from(matrix)));
}


jb_Undefined SVGTransform_setTranslate(SVGTransform* self , float tx, float ty) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setTranslate", em_Val_from(tx), em_Val_from(ty)));
}


jb_Undefined SVGTransform_setScale(SVGTransform* self , float sx, float sy) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setScale", em_Val_from(sx), em_Val_from(sy)));
}


jb_Undefined SVGTransform_setRotate(SVGTransform* self , float angle, float cx, float cy) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setRotate", em_Val_from(angle), em_Val_from(cx), em_Val_from(cy)));
}


jb_Undefined SVGTransform_setSkewX(SVGTransform* self , float angle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setSkewX", em_Val_from(angle)));
}


jb_Undefined SVGTransform_setSkewY(SVGTransform* self , float angle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setSkewY", em_Val_from(angle)));
}

