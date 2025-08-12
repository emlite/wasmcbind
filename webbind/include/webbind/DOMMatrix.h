#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMMatrixReadOnly.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMMatrixInit DOMMatrixInit;


/**
 * @brief Interface DOMMatrix
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix)
 */
DECLARE_EMLITE_TYPE(DOMMatrix, DOMMatrixReadOnly);

/**
 * @brief Creates a new `DOMMatrix` object. 
*/
DOMMatrix DOMMatrix_new0();

/**
 * @brief Creates a new `DOMMatrix` object. 
*/
DOMMatrix DOMMatrix_new1(jb_Any * init);

/**
 * @brief Calls the `fromMatrix` method. 
*/
DOMMatrix DOMMatrix_fromMatrix0(DOMMatrix* self );

/**
 * @brief Calls the `fromMatrix` method. 
*/
DOMMatrix DOMMatrix_fromMatrix1(DOMMatrix* self , DOMMatrixInit * other);

/**
 * @brief Calls the `fromFloat32Array` method. 
*/
DOMMatrix DOMMatrix_fromFloat32Array(DOMMatrix* self , jb_Float32Array * array32);

/**
 * @brief Calls the `fromFloat64Array` method. 
*/
DOMMatrix DOMMatrix_fromFloat64Array(DOMMatrix* self , jb_Float64Array * array64);

/**
 * @brief Gets the `a` property. 
*/
double DOMMatrix_a(const DOMMatrix *self);

/**
 * @brief Sets the `a` property. 
*/
void DOMMatrix_set_a(DOMMatrix* self, double value);

/**
 * @brief Gets the `b` property. 
*/
double DOMMatrix_b(const DOMMatrix *self);

/**
 * @brief Sets the `b` property. 
*/
void DOMMatrix_set_b(DOMMatrix* self, double value);

/**
 * @brief Gets the `c` property. 
*/
double DOMMatrix_c(const DOMMatrix *self);

/**
 * @brief Sets the `c` property. 
*/
void DOMMatrix_set_c(DOMMatrix* self, double value);

/**
 * @brief Gets the `d` property. 
*/
double DOMMatrix_d(const DOMMatrix *self);

/**
 * @brief Sets the `d` property. 
*/
void DOMMatrix_set_d(DOMMatrix* self, double value);

/**
 * @brief Gets the `e` property. 
*/
double DOMMatrix_e(const DOMMatrix *self);

/**
 * @brief Sets the `e` property. 
*/
void DOMMatrix_set_e(DOMMatrix* self, double value);

/**
 * @brief Gets the `f` property. 
*/
double DOMMatrix_f(const DOMMatrix *self);

/**
 * @brief Sets the `f` property. 
*/
void DOMMatrix_set_f(DOMMatrix* self, double value);

/**
 * @brief Gets the `m11` property. 
*/
double DOMMatrix_m11(const DOMMatrix *self);

/**
 * @brief Sets the `m11` property. 
*/
void DOMMatrix_set_m11(DOMMatrix* self, double value);

/**
 * @brief Gets the `m12` property. 
*/
double DOMMatrix_m12(const DOMMatrix *self);

/**
 * @brief Sets the `m12` property. 
*/
void DOMMatrix_set_m12(DOMMatrix* self, double value);

/**
 * @brief Gets the `m13` property. 
*/
double DOMMatrix_m13(const DOMMatrix *self);

/**
 * @brief Sets the `m13` property. 
*/
void DOMMatrix_set_m13(DOMMatrix* self, double value);

/**
 * @brief Gets the `m14` property. 
*/
double DOMMatrix_m14(const DOMMatrix *self);

/**
 * @brief Sets the `m14` property. 
*/
void DOMMatrix_set_m14(DOMMatrix* self, double value);

/**
 * @brief Gets the `m21` property. 
*/
double DOMMatrix_m21(const DOMMatrix *self);

/**
 * @brief Sets the `m21` property. 
*/
void DOMMatrix_set_m21(DOMMatrix* self, double value);

/**
 * @brief Gets the `m22` property. 
*/
double DOMMatrix_m22(const DOMMatrix *self);

/**
 * @brief Sets the `m22` property. 
*/
void DOMMatrix_set_m22(DOMMatrix* self, double value);

/**
 * @brief Gets the `m23` property. 
*/
double DOMMatrix_m23(const DOMMatrix *self);

/**
 * @brief Sets the `m23` property. 
*/
void DOMMatrix_set_m23(DOMMatrix* self, double value);

/**
 * @brief Gets the `m24` property. 
*/
double DOMMatrix_m24(const DOMMatrix *self);

/**
 * @brief Sets the `m24` property. 
*/
void DOMMatrix_set_m24(DOMMatrix* self, double value);

/**
 * @brief Gets the `m31` property. 
*/
double DOMMatrix_m31(const DOMMatrix *self);

/**
 * @brief Sets the `m31` property. 
*/
void DOMMatrix_set_m31(DOMMatrix* self, double value);

/**
 * @brief Gets the `m32` property. 
*/
double DOMMatrix_m32(const DOMMatrix *self);

/**
 * @brief Sets the `m32` property. 
*/
void DOMMatrix_set_m32(DOMMatrix* self, double value);

/**
 * @brief Gets the `m33` property. 
*/
double DOMMatrix_m33(const DOMMatrix *self);

/**
 * @brief Sets the `m33` property. 
*/
void DOMMatrix_set_m33(DOMMatrix* self, double value);

/**
 * @brief Gets the `m34` property. 
*/
double DOMMatrix_m34(const DOMMatrix *self);

/**
 * @brief Sets the `m34` property. 
*/
void DOMMatrix_set_m34(DOMMatrix* self, double value);

/**
 * @brief Gets the `m41` property. 
*/
double DOMMatrix_m41(const DOMMatrix *self);

/**
 * @brief Sets the `m41` property. 
*/
void DOMMatrix_set_m41(DOMMatrix* self, double value);

/**
 * @brief Gets the `m42` property. 
*/
double DOMMatrix_m42(const DOMMatrix *self);

/**
 * @brief Sets the `m42` property. 
*/
void DOMMatrix_set_m42(DOMMatrix* self, double value);

/**
 * @brief Gets the `m43` property. 
*/
double DOMMatrix_m43(const DOMMatrix *self);

/**
 * @brief Sets the `m43` property. 
*/
void DOMMatrix_set_m43(DOMMatrix* self, double value);

/**
 * @brief Gets the `m44` property. 
*/
double DOMMatrix_m44(const DOMMatrix *self);

/**
 * @brief Sets the `m44` property. 
*/
void DOMMatrix_set_m44(DOMMatrix* self, double value);

/**
 * @brief Calls the `multiplySelf` method. 
*/
DOMMatrix DOMMatrix_multiplySelf0(DOMMatrix* self );

/**
 * @brief Calls the `multiplySelf` method. 
*/
DOMMatrix DOMMatrix_multiplySelf1(DOMMatrix* self , DOMMatrixInit * other);

/**
 * @brief Calls the `preMultiplySelf` method. 
*/
DOMMatrix DOMMatrix_preMultiplySelf0(DOMMatrix* self );

/**
 * @brief Calls the `preMultiplySelf` method. 
*/
DOMMatrix DOMMatrix_preMultiplySelf1(DOMMatrix* self , DOMMatrixInit * other);

/**
 * @brief Calls the `translateSelf` method. 
*/
DOMMatrix DOMMatrix_translateSelf0(DOMMatrix* self );

/**
 * @brief Calls the `translateSelf` method. 
*/
DOMMatrix DOMMatrix_translateSelf1(DOMMatrix* self , double tx);

/**
 * @brief Calls the `translateSelf` method. 
*/
DOMMatrix DOMMatrix_translateSelf2(DOMMatrix* self , double tx, double ty);

/**
 * @brief Calls the `translateSelf` method. 
*/
DOMMatrix DOMMatrix_translateSelf3(DOMMatrix* self , double tx, double ty, double tz);

/**
 * @brief Calls the `scaleSelf` method. 
*/
DOMMatrix DOMMatrix_scaleSelf0(DOMMatrix* self );

/**
 * @brief Calls the `scaleSelf` method. 
*/
DOMMatrix DOMMatrix_scaleSelf1(DOMMatrix* self , double scaleX);

/**
 * @brief Calls the `scaleSelf` method. 
*/
DOMMatrix DOMMatrix_scaleSelf2(DOMMatrix* self , double scaleX, double scaleY);

/**
 * @brief Calls the `scaleSelf` method. 
*/
DOMMatrix DOMMatrix_scaleSelf3(DOMMatrix* self , double scaleX, double scaleY, double scaleZ);

/**
 * @brief Calls the `scaleSelf` method. 
*/
DOMMatrix DOMMatrix_scaleSelf4(DOMMatrix* self , double scaleX, double scaleY, double scaleZ, double originX);

/**
 * @brief Calls the `scaleSelf` method. 
*/
DOMMatrix DOMMatrix_scaleSelf5(DOMMatrix* self , double scaleX, double scaleY, double scaleZ, double originX, double originY);

/**
 * @brief Calls the `scaleSelf` method. 
*/
DOMMatrix DOMMatrix_scaleSelf6(DOMMatrix* self , double scaleX, double scaleY, double scaleZ, double originX, double originY, double originZ);

/**
 * @brief Calls the `scale3dSelf` method. 
*/
DOMMatrix DOMMatrix_scale3dSelf0(DOMMatrix* self );

/**
 * @brief Calls the `scale3dSelf` method. 
*/
DOMMatrix DOMMatrix_scale3dSelf1(DOMMatrix* self , double scale);

/**
 * @brief Calls the `scale3dSelf` method. 
*/
DOMMatrix DOMMatrix_scale3dSelf2(DOMMatrix* self , double scale, double originX);

/**
 * @brief Calls the `scale3dSelf` method. 
*/
DOMMatrix DOMMatrix_scale3dSelf3(DOMMatrix* self , double scale, double originX, double originY);

/**
 * @brief Calls the `scale3dSelf` method. 
*/
DOMMatrix DOMMatrix_scale3dSelf4(DOMMatrix* self , double scale, double originX, double originY, double originZ);

/**
 * @brief Calls the `rotateSelf` method. 
*/
DOMMatrix DOMMatrix_rotateSelf0(DOMMatrix* self );

/**
 * @brief Calls the `rotateSelf` method. 
*/
DOMMatrix DOMMatrix_rotateSelf1(DOMMatrix* self , double rotX);

/**
 * @brief Calls the `rotateSelf` method. 
*/
DOMMatrix DOMMatrix_rotateSelf2(DOMMatrix* self , double rotX, double rotY);

/**
 * @brief Calls the `rotateSelf` method. 
*/
DOMMatrix DOMMatrix_rotateSelf3(DOMMatrix* self , double rotX, double rotY, double rotZ);

/**
 * @brief Calls the `rotateFromVectorSelf` method. 
*/
DOMMatrix DOMMatrix_rotateFromVectorSelf0(DOMMatrix* self );

/**
 * @brief Calls the `rotateFromVectorSelf` method. 
*/
DOMMatrix DOMMatrix_rotateFromVectorSelf1(DOMMatrix* self , double x);

/**
 * @brief Calls the `rotateFromVectorSelf` method. 
*/
DOMMatrix DOMMatrix_rotateFromVectorSelf2(DOMMatrix* self , double x, double y);

/**
 * @brief Calls the `rotateAxisAngleSelf` method. 
*/
DOMMatrix DOMMatrix_rotateAxisAngleSelf0(DOMMatrix* self );

/**
 * @brief Calls the `rotateAxisAngleSelf` method. 
*/
DOMMatrix DOMMatrix_rotateAxisAngleSelf1(DOMMatrix* self , double x);

/**
 * @brief Calls the `rotateAxisAngleSelf` method. 
*/
DOMMatrix DOMMatrix_rotateAxisAngleSelf2(DOMMatrix* self , double x, double y);

/**
 * @brief Calls the `rotateAxisAngleSelf` method. 
*/
DOMMatrix DOMMatrix_rotateAxisAngleSelf3(DOMMatrix* self , double x, double y, double z);

/**
 * @brief Calls the `rotateAxisAngleSelf` method. 
*/
DOMMatrix DOMMatrix_rotateAxisAngleSelf4(DOMMatrix* self , double x, double y, double z, double angle);

/**
 * @brief Calls the `skewXSelf` method. 
*/
DOMMatrix DOMMatrix_skewXSelf0(DOMMatrix* self );

/**
 * @brief Calls the `skewXSelf` method. 
*/
DOMMatrix DOMMatrix_skewXSelf1(DOMMatrix* self , double sx);

/**
 * @brief Calls the `skewYSelf` method. 
*/
DOMMatrix DOMMatrix_skewYSelf0(DOMMatrix* self );

/**
 * @brief Calls the `skewYSelf` method. 
*/
DOMMatrix DOMMatrix_skewYSelf1(DOMMatrix* self , double sy);

/**
 * @brief Calls the `invertSelf` method. 
*/
DOMMatrix DOMMatrix_invertSelf(DOMMatrix* self );

/**
 * @brief Calls the `setMatrixValue` method. 
*/
DOMMatrix DOMMatrix_setMatrixValue(DOMMatrix* self , jb_String * transformList);

#ifdef __cplusplus
}
#endif
