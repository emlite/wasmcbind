#include <webbind/DOMMatrixReadOnly.h>
#include <webbind/DOMPointReadOnly.h>
#include <webbind/DOMMatrix.h>
#include <webbind/DOMPoint.h>
#include <webbind/SVGGeometryElement.h>


DEFINE_EMLITE_TYPE(DOMMatrixReadOnly, em_Val);


DOMMatrixReadOnly DOMMatrixReadOnly_new0() {
        em_Val vv = em_Val_new(em_Val_global("DOMMatrixReadOnly") );
        return DOMMatrixReadOnly_from_val(&vv);
      }


DOMMatrixReadOnly DOMMatrixReadOnly_new1(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("DOMMatrixReadOnly") , em_Val_from(init));
        return DOMMatrixReadOnly_from_val(&vv);
      }


DOMMatrixReadOnly DOMMatrixReadOnly_fromMatrix0(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrixReadOnly, em_Val_call(em_Val_global("dommatrixreadonly"), "fromMatrix"));
}


DOMMatrixReadOnly DOMMatrixReadOnly_fromMatrix1(DOMMatrixReadOnly* self , DOMMatrixInit * other) {
    return em_Val_as(DOMMatrixReadOnly, em_Val_call(em_Val_global("dommatrixreadonly"), "fromMatrix", em_Val_from(other)));
}


DOMMatrixReadOnly DOMMatrixReadOnly_fromFloat32Array(DOMMatrixReadOnly* self , jb_Float32Array * array32) {
    return em_Val_as(DOMMatrixReadOnly, em_Val_call(em_Val_global("dommatrixreadonly"), "fromFloat32Array", em_Val_from(array32)));
}


DOMMatrixReadOnly DOMMatrixReadOnly_fromFloat64Array(DOMMatrixReadOnly* self , jb_Float64Array * array64) {
    return em_Val_as(DOMMatrixReadOnly, em_Val_call(em_Val_global("dommatrixreadonly"), "fromFloat64Array", em_Val_from(array64)));
}


double DOMMatrixReadOnly_a(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("a")));
}


double DOMMatrixReadOnly_b(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("b")));
}


double DOMMatrixReadOnly_c(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("c")));
}


double DOMMatrixReadOnly_d(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("d")));
}


double DOMMatrixReadOnly_e(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("e")));
}


double DOMMatrixReadOnly_f(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("f")));
}


double DOMMatrixReadOnly_m11(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m11")));
}


double DOMMatrixReadOnly_m12(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m12")));
}


double DOMMatrixReadOnly_m13(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m13")));
}


double DOMMatrixReadOnly_m14(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m14")));
}


double DOMMatrixReadOnly_m21(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m21")));
}


double DOMMatrixReadOnly_m22(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m22")));
}


double DOMMatrixReadOnly_m23(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m23")));
}


double DOMMatrixReadOnly_m24(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m24")));
}


double DOMMatrixReadOnly_m31(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m31")));
}


double DOMMatrixReadOnly_m32(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m32")));
}


double DOMMatrixReadOnly_m33(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m33")));
}


double DOMMatrixReadOnly_m34(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m34")));
}


double DOMMatrixReadOnly_m41(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m41")));
}


double DOMMatrixReadOnly_m42(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m42")));
}


double DOMMatrixReadOnly_m43(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m43")));
}


double DOMMatrixReadOnly_m44(const DOMMatrixReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m44")));
}


bool DOMMatrixReadOnly_is2D(const DOMMatrixReadOnly *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("is2D")));
}


bool DOMMatrixReadOnly_isIdentity(const DOMMatrixReadOnly *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isIdentity")));
}


DOMMatrix DOMMatrixReadOnly_translate0(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "translate"));
}


DOMMatrix DOMMatrixReadOnly_translate1(DOMMatrixReadOnly* self , double tx) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "translate", em_Val_from(tx)));
}


DOMMatrix DOMMatrixReadOnly_translate2(DOMMatrixReadOnly* self , double tx, double ty) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "translate", em_Val_from(tx), em_Val_from(ty)));
}


DOMMatrix DOMMatrixReadOnly_translate3(DOMMatrixReadOnly* self , double tx, double ty, double tz) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "translate", em_Val_from(tx), em_Val_from(ty), em_Val_from(tz)));
}


DOMMatrix DOMMatrixReadOnly_scale0(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scale"));
}


DOMMatrix DOMMatrixReadOnly_scale1(DOMMatrixReadOnly* self , double scaleX) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scale", em_Val_from(scaleX)));
}


DOMMatrix DOMMatrixReadOnly_scale2(DOMMatrixReadOnly* self , double scaleX, double scaleY) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scale", em_Val_from(scaleX), em_Val_from(scaleY)));
}


DOMMatrix DOMMatrixReadOnly_scale3(DOMMatrixReadOnly* self , double scaleX, double scaleY, double scaleZ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scale", em_Val_from(scaleX), em_Val_from(scaleY), em_Val_from(scaleZ)));
}


DOMMatrix DOMMatrixReadOnly_scale4(DOMMatrixReadOnly* self , double scaleX, double scaleY, double scaleZ, double originX) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scale", em_Val_from(scaleX), em_Val_from(scaleY), em_Val_from(scaleZ), em_Val_from(originX)));
}


DOMMatrix DOMMatrixReadOnly_scale5(DOMMatrixReadOnly* self , double scaleX, double scaleY, double scaleZ, double originX, double originY) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scale", em_Val_from(scaleX), em_Val_from(scaleY), em_Val_from(scaleZ), em_Val_from(originX), em_Val_from(originY)));
}


DOMMatrix DOMMatrixReadOnly_scale6(DOMMatrixReadOnly* self , double scaleX, double scaleY, double scaleZ, double originX, double originY, double originZ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scale", em_Val_from(scaleX), em_Val_from(scaleY), em_Val_from(scaleZ), em_Val_from(originX), em_Val_from(originY), em_Val_from(originZ)));
}


DOMMatrix DOMMatrixReadOnly_scaleNonUniform0(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scaleNonUniform"));
}


DOMMatrix DOMMatrixReadOnly_scaleNonUniform1(DOMMatrixReadOnly* self , double scaleX) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scaleNonUniform", em_Val_from(scaleX)));
}


DOMMatrix DOMMatrixReadOnly_scaleNonUniform2(DOMMatrixReadOnly* self , double scaleX, double scaleY) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scaleNonUniform", em_Val_from(scaleX), em_Val_from(scaleY)));
}


DOMMatrix DOMMatrixReadOnly_scale3d0(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scale3d"));
}


DOMMatrix DOMMatrixReadOnly_scale3d1(DOMMatrixReadOnly* self , double scale) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scale3d", em_Val_from(scale)));
}


DOMMatrix DOMMatrixReadOnly_scale3d2(DOMMatrixReadOnly* self , double scale, double originX) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scale3d", em_Val_from(scale), em_Val_from(originX)));
}


DOMMatrix DOMMatrixReadOnly_scale3d3(DOMMatrixReadOnly* self , double scale, double originX, double originY) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scale3d", em_Val_from(scale), em_Val_from(originX), em_Val_from(originY)));
}


DOMMatrix DOMMatrixReadOnly_scale3d4(DOMMatrixReadOnly* self , double scale, double originX, double originY, double originZ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "scale3d", em_Val_from(scale), em_Val_from(originX), em_Val_from(originY), em_Val_from(originZ)));
}


DOMMatrix DOMMatrixReadOnly_rotate0(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "rotate"));
}


DOMMatrix DOMMatrixReadOnly_rotate1(DOMMatrixReadOnly* self , double rotX) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "rotate", em_Val_from(rotX)));
}


DOMMatrix DOMMatrixReadOnly_rotate2(DOMMatrixReadOnly* self , double rotX, double rotY) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "rotate", em_Val_from(rotX), em_Val_from(rotY)));
}


DOMMatrix DOMMatrixReadOnly_rotate3(DOMMatrixReadOnly* self , double rotX, double rotY, double rotZ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "rotate", em_Val_from(rotX), em_Val_from(rotY), em_Val_from(rotZ)));
}


DOMMatrix DOMMatrixReadOnly_rotateFromVector0(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "rotateFromVector"));
}


DOMMatrix DOMMatrixReadOnly_rotateFromVector1(DOMMatrixReadOnly* self , double x) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "rotateFromVector", em_Val_from(x)));
}


DOMMatrix DOMMatrixReadOnly_rotateFromVector2(DOMMatrixReadOnly* self , double x, double y) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "rotateFromVector", em_Val_from(x), em_Val_from(y)));
}


DOMMatrix DOMMatrixReadOnly_rotateAxisAngle0(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "rotateAxisAngle"));
}


DOMMatrix DOMMatrixReadOnly_rotateAxisAngle1(DOMMatrixReadOnly* self , double x) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "rotateAxisAngle", em_Val_from(x)));
}


DOMMatrix DOMMatrixReadOnly_rotateAxisAngle2(DOMMatrixReadOnly* self , double x, double y) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "rotateAxisAngle", em_Val_from(x), em_Val_from(y)));
}


DOMMatrix DOMMatrixReadOnly_rotateAxisAngle3(DOMMatrixReadOnly* self , double x, double y, double z) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "rotateAxisAngle", em_Val_from(x), em_Val_from(y), em_Val_from(z)));
}


DOMMatrix DOMMatrixReadOnly_rotateAxisAngle4(DOMMatrixReadOnly* self , double x, double y, double z, double angle) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "rotateAxisAngle", em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(angle)));
}


DOMMatrix DOMMatrixReadOnly_skewX0(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "skewX"));
}


DOMMatrix DOMMatrixReadOnly_skewX1(DOMMatrixReadOnly* self , double sx) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "skewX", em_Val_from(sx)));
}


DOMMatrix DOMMatrixReadOnly_skewY0(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "skewY"));
}


DOMMatrix DOMMatrixReadOnly_skewY1(DOMMatrixReadOnly* self , double sy) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "skewY", em_Val_from(sy)));
}


DOMMatrix DOMMatrixReadOnly_multiply0(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "multiply"));
}


DOMMatrix DOMMatrixReadOnly_multiply1(DOMMatrixReadOnly* self , DOMMatrixInit * other) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "multiply", em_Val_from(other)));
}


DOMMatrix DOMMatrixReadOnly_flipX(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "flipX"));
}


DOMMatrix DOMMatrixReadOnly_flipY(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "flipY"));
}


DOMMatrix DOMMatrixReadOnly_inverse(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "inverse"));
}


DOMPoint DOMMatrixReadOnly_transformPoint0(DOMMatrixReadOnly* self ) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_as_val(self->inner), "transformPoint"));
}


DOMPoint DOMMatrixReadOnly_transformPoint1(DOMMatrixReadOnly* self , DOMPointInit * point) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_as_val(self->inner), "transformPoint", em_Val_from(point)));
}


jb_Float32Array DOMMatrixReadOnly_toFloat32Array(DOMMatrixReadOnly* self ) {
    return em_Val_as(jb_Float32Array, em_Val_call(em_Val_as_val(self->inner), "toFloat32Array"));
}


jb_Float64Array DOMMatrixReadOnly_toFloat64Array(DOMMatrixReadOnly* self ) {
    return em_Val_as(jb_Float64Array, em_Val_call(em_Val_as_val(self->inner), "toFloat64Array"));
}


jb_Object DOMMatrixReadOnly_toJSON(DOMMatrixReadOnly* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

