#include <webcbind/DOMMatrix.h>

#include <webcbind/DOMMatrixInit.h>

DEFINE_EMLITE_TYPE(DOMMatrix, DOMMatrixReadOnly);


DOMMatrix DOMMatrix_new0() {
        em_Val vv = em_Val_new(em_Val_global("DOMMatrix") );
        return DOMMatrix_from_val(&vv);
      }


DOMMatrix DOMMatrix_new1(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("DOMMatrix") , em_Val_from(init));
        return DOMMatrix_from_val(&vv);
      }


DOMMatrix DOMMatrix_fromMatrix0(DOMMatrix* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_global("dommatrix"), "fromMatrix"));
}


DOMMatrix DOMMatrix_fromMatrix1(DOMMatrix* self , DOMMatrixInit * other) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_global("dommatrix"), "fromMatrix", em_Val_from(other)));
}


DOMMatrix DOMMatrix_fromFloat32Array(DOMMatrix* self , jb_Float32Array * array32) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_global("dommatrix"), "fromFloat32Array", em_Val_from(array32)));
}


DOMMatrix DOMMatrix_fromFloat64Array(DOMMatrix* self , jb_Float64Array * array64) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_global("dommatrix"), "fromFloat64Array", em_Val_from(array64)));
}


double DOMMatrix_a(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("a")));
}


void DOMMatrix_set_a(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("a"), em_Val_from(value));
}


double DOMMatrix_b(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("b")));
}


void DOMMatrix_set_b(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("b"), em_Val_from(value));
}


double DOMMatrix_c(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("c")));
}


void DOMMatrix_set_c(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("c"), em_Val_from(value));
}


double DOMMatrix_d(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("d")));
}


void DOMMatrix_set_d(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("d"), em_Val_from(value));
}


double DOMMatrix_e(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("e")));
}


void DOMMatrix_set_e(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("e"), em_Val_from(value));
}


double DOMMatrix_f(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("f")));
}


void DOMMatrix_set_f(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("f"), em_Val_from(value));
}


double DOMMatrix_m11(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m11")));
}


void DOMMatrix_set_m11(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m11"), em_Val_from(value));
}


double DOMMatrix_m12(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m12")));
}


void DOMMatrix_set_m12(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m12"), em_Val_from(value));
}


double DOMMatrix_m13(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m13")));
}


void DOMMatrix_set_m13(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m13"), em_Val_from(value));
}


double DOMMatrix_m14(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m14")));
}


void DOMMatrix_set_m14(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m14"), em_Val_from(value));
}


double DOMMatrix_m21(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m21")));
}


void DOMMatrix_set_m21(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m21"), em_Val_from(value));
}


double DOMMatrix_m22(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m22")));
}


void DOMMatrix_set_m22(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m22"), em_Val_from(value));
}


double DOMMatrix_m23(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m23")));
}


void DOMMatrix_set_m23(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m23"), em_Val_from(value));
}


double DOMMatrix_m24(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m24")));
}


void DOMMatrix_set_m24(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m24"), em_Val_from(value));
}


double DOMMatrix_m31(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m31")));
}


void DOMMatrix_set_m31(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m31"), em_Val_from(value));
}


double DOMMatrix_m32(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m32")));
}


void DOMMatrix_set_m32(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m32"), em_Val_from(value));
}


double DOMMatrix_m33(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m33")));
}


void DOMMatrix_set_m33(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m33"), em_Val_from(value));
}


double DOMMatrix_m34(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m34")));
}


void DOMMatrix_set_m34(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m34"), em_Val_from(value));
}


double DOMMatrix_m41(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m41")));
}


void DOMMatrix_set_m41(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m41"), em_Val_from(value));
}


double DOMMatrix_m42(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m42")));
}


void DOMMatrix_set_m42(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m42"), em_Val_from(value));
}


double DOMMatrix_m43(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m43")));
}


void DOMMatrix_set_m43(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m43"), em_Val_from(value));
}


double DOMMatrix_m44(const DOMMatrix *self) {
    return em_Val_as(double, em_Val_get(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m44")));
}


void DOMMatrix_set_m44(DOMMatrix* self, double value) {
    em_Val_set(DOMMatrixReadOnly_as_val(self->inner), em_Val_from("m44"), em_Val_from(value));
}


DOMMatrix DOMMatrix_multiplySelf0(DOMMatrix* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "multiplySelf"));
}


DOMMatrix DOMMatrix_multiplySelf1(DOMMatrix* self , DOMMatrixInit * other) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "multiplySelf", em_Val_from(other)));
}


DOMMatrix DOMMatrix_preMultiplySelf0(DOMMatrix* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "preMultiplySelf"));
}


DOMMatrix DOMMatrix_preMultiplySelf1(DOMMatrix* self , DOMMatrixInit * other) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "preMultiplySelf", em_Val_from(other)));
}


DOMMatrix DOMMatrix_translateSelf0(DOMMatrix* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "translateSelf"));
}


DOMMatrix DOMMatrix_translateSelf1(DOMMatrix* self , double tx) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "translateSelf", em_Val_from(tx)));
}


DOMMatrix DOMMatrix_translateSelf2(DOMMatrix* self , double tx, double ty) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "translateSelf", em_Val_from(tx), em_Val_from(ty)));
}


DOMMatrix DOMMatrix_translateSelf3(DOMMatrix* self , double tx, double ty, double tz) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "translateSelf", em_Val_from(tx), em_Val_from(ty), em_Val_from(tz)));
}


DOMMatrix DOMMatrix_scaleSelf0(DOMMatrix* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "scaleSelf"));
}


DOMMatrix DOMMatrix_scaleSelf1(DOMMatrix* self , double scaleX) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "scaleSelf", em_Val_from(scaleX)));
}


DOMMatrix DOMMatrix_scaleSelf2(DOMMatrix* self , double scaleX, double scaleY) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "scaleSelf", em_Val_from(scaleX), em_Val_from(scaleY)));
}


DOMMatrix DOMMatrix_scaleSelf3(DOMMatrix* self , double scaleX, double scaleY, double scaleZ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "scaleSelf", em_Val_from(scaleX), em_Val_from(scaleY), em_Val_from(scaleZ)));
}


DOMMatrix DOMMatrix_scaleSelf4(DOMMatrix* self , double scaleX, double scaleY, double scaleZ, double originX) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "scaleSelf", em_Val_from(scaleX), em_Val_from(scaleY), em_Val_from(scaleZ), em_Val_from(originX)));
}


DOMMatrix DOMMatrix_scaleSelf5(DOMMatrix* self , double scaleX, double scaleY, double scaleZ, double originX, double originY) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "scaleSelf", em_Val_from(scaleX), em_Val_from(scaleY), em_Val_from(scaleZ), em_Val_from(originX), em_Val_from(originY)));
}


DOMMatrix DOMMatrix_scaleSelf6(DOMMatrix* self , double scaleX, double scaleY, double scaleZ, double originX, double originY, double originZ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "scaleSelf", em_Val_from(scaleX), em_Val_from(scaleY), em_Val_from(scaleZ), em_Val_from(originX), em_Val_from(originY), em_Val_from(originZ)));
}


DOMMatrix DOMMatrix_scale3dSelf0(DOMMatrix* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "scale3dSelf"));
}


DOMMatrix DOMMatrix_scale3dSelf1(DOMMatrix* self , double scale) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "scale3dSelf", em_Val_from(scale)));
}


DOMMatrix DOMMatrix_scale3dSelf2(DOMMatrix* self , double scale, double originX) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "scale3dSelf", em_Val_from(scale), em_Val_from(originX)));
}


DOMMatrix DOMMatrix_scale3dSelf3(DOMMatrix* self , double scale, double originX, double originY) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "scale3dSelf", em_Val_from(scale), em_Val_from(originX), em_Val_from(originY)));
}


DOMMatrix DOMMatrix_scale3dSelf4(DOMMatrix* self , double scale, double originX, double originY, double originZ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "scale3dSelf", em_Val_from(scale), em_Val_from(originX), em_Val_from(originY), em_Val_from(originZ)));
}


DOMMatrix DOMMatrix_rotateSelf0(DOMMatrix* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "rotateSelf"));
}


DOMMatrix DOMMatrix_rotateSelf1(DOMMatrix* self , double rotX) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "rotateSelf", em_Val_from(rotX)));
}


DOMMatrix DOMMatrix_rotateSelf2(DOMMatrix* self , double rotX, double rotY) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "rotateSelf", em_Val_from(rotX), em_Val_from(rotY)));
}


DOMMatrix DOMMatrix_rotateSelf3(DOMMatrix* self , double rotX, double rotY, double rotZ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "rotateSelf", em_Val_from(rotX), em_Val_from(rotY), em_Val_from(rotZ)));
}


DOMMatrix DOMMatrix_rotateFromVectorSelf0(DOMMatrix* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "rotateFromVectorSelf"));
}


DOMMatrix DOMMatrix_rotateFromVectorSelf1(DOMMatrix* self , double x) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "rotateFromVectorSelf", em_Val_from(x)));
}


DOMMatrix DOMMatrix_rotateFromVectorSelf2(DOMMatrix* self , double x, double y) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "rotateFromVectorSelf", em_Val_from(x), em_Val_from(y)));
}


DOMMatrix DOMMatrix_rotateAxisAngleSelf0(DOMMatrix* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "rotateAxisAngleSelf"));
}


DOMMatrix DOMMatrix_rotateAxisAngleSelf1(DOMMatrix* self , double x) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "rotateAxisAngleSelf", em_Val_from(x)));
}


DOMMatrix DOMMatrix_rotateAxisAngleSelf2(DOMMatrix* self , double x, double y) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "rotateAxisAngleSelf", em_Val_from(x), em_Val_from(y)));
}


DOMMatrix DOMMatrix_rotateAxisAngleSelf3(DOMMatrix* self , double x, double y, double z) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "rotateAxisAngleSelf", em_Val_from(x), em_Val_from(y), em_Val_from(z)));
}


DOMMatrix DOMMatrix_rotateAxisAngleSelf4(DOMMatrix* self , double x, double y, double z, double angle) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "rotateAxisAngleSelf", em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(angle)));
}


DOMMatrix DOMMatrix_skewXSelf0(DOMMatrix* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "skewXSelf"));
}


DOMMatrix DOMMatrix_skewXSelf1(DOMMatrix* self , double sx) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "skewXSelf", em_Val_from(sx)));
}


DOMMatrix DOMMatrix_skewYSelf0(DOMMatrix* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "skewYSelf"));
}


DOMMatrix DOMMatrix_skewYSelf1(DOMMatrix* self , double sy) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "skewYSelf", em_Val_from(sy)));
}


DOMMatrix DOMMatrix_invertSelf(DOMMatrix* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "invertSelf"));
}


DOMMatrix DOMMatrix_setMatrixValue(DOMMatrix* self , jb_String * transformList) {
    return em_Val_as(DOMMatrix, em_Val_call(DOMMatrixReadOnly_as_val(self->inner), "setMatrixValue", em_Val_from(transformList)));
}

