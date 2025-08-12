#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMMatrixInit DOMMatrixInit;
typedef struct DOMMatrix DOMMatrix;
typedef struct DOMPoint DOMPoint;
typedef struct DOMPointInit DOMPointInit;


/**
 * @brief Interface DOMMatrixReadOnly
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly)
 */
DECLARE_EMLITE_TYPE(DOMMatrixReadOnly, em_Val);

/**
 * @brief Creates a new `DOMMatrixReadOnly` object. 
*/
DOMMatrixReadOnly DOMMatrixReadOnly_new0();

/**
 * @brief Creates a new `DOMMatrixReadOnly` object. 
*/
DOMMatrixReadOnly DOMMatrixReadOnly_new1(jb_Any * init);

/**
 * @brief Calls the `fromMatrix` method. 
*/
DOMMatrixReadOnly DOMMatrixReadOnly_fromMatrix0(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `fromMatrix` method. 
*/
DOMMatrixReadOnly DOMMatrixReadOnly_fromMatrix1(DOMMatrixReadOnly* self , DOMMatrixInit * other);

/**
 * @brief Calls the `fromFloat32Array` method. 
*/
DOMMatrixReadOnly DOMMatrixReadOnly_fromFloat32Array(DOMMatrixReadOnly* self , jb_Float32Array * array32);

/**
 * @brief Calls the `fromFloat64Array` method. 
*/
DOMMatrixReadOnly DOMMatrixReadOnly_fromFloat64Array(DOMMatrixReadOnly* self , jb_Float64Array * array64);

/**
 * @brief Gets the `a` property. 
*/
double DOMMatrixReadOnly_a(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `b` property. 
*/
double DOMMatrixReadOnly_b(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `c` property. 
*/
double DOMMatrixReadOnly_c(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `d` property. 
*/
double DOMMatrixReadOnly_d(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `e` property. 
*/
double DOMMatrixReadOnly_e(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `f` property. 
*/
double DOMMatrixReadOnly_f(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m11` property. 
*/
double DOMMatrixReadOnly_m11(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m12` property. 
*/
double DOMMatrixReadOnly_m12(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m13` property. 
*/
double DOMMatrixReadOnly_m13(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m14` property. 
*/
double DOMMatrixReadOnly_m14(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m21` property. 
*/
double DOMMatrixReadOnly_m21(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m22` property. 
*/
double DOMMatrixReadOnly_m22(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m23` property. 
*/
double DOMMatrixReadOnly_m23(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m24` property. 
*/
double DOMMatrixReadOnly_m24(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m31` property. 
*/
double DOMMatrixReadOnly_m31(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m32` property. 
*/
double DOMMatrixReadOnly_m32(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m33` property. 
*/
double DOMMatrixReadOnly_m33(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m34` property. 
*/
double DOMMatrixReadOnly_m34(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m41` property. 
*/
double DOMMatrixReadOnly_m41(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m42` property. 
*/
double DOMMatrixReadOnly_m42(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m43` property. 
*/
double DOMMatrixReadOnly_m43(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `m44` property. 
*/
double DOMMatrixReadOnly_m44(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `is2D` property. 
*/
bool DOMMatrixReadOnly_is2D(const DOMMatrixReadOnly *self);

/**
 * @brief Gets the `isIdentity` property. 
*/
bool DOMMatrixReadOnly_isIdentity(const DOMMatrixReadOnly *self);

/**
 * @brief Calls the `translate` method. 
*/
DOMMatrix DOMMatrixReadOnly_translate0(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `translate` method. 
*/
DOMMatrix DOMMatrixReadOnly_translate1(DOMMatrixReadOnly* self , double tx);

/**
 * @brief Calls the `translate` method. 
*/
DOMMatrix DOMMatrixReadOnly_translate2(DOMMatrixReadOnly* self , double tx, double ty);

/**
 * @brief Calls the `translate` method. 
*/
DOMMatrix DOMMatrixReadOnly_translate3(DOMMatrixReadOnly* self , double tx, double ty, double tz);

/**
 * @brief Calls the `scale` method. 
*/
DOMMatrix DOMMatrixReadOnly_scale0(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `scale` method. 
*/
DOMMatrix DOMMatrixReadOnly_scale1(DOMMatrixReadOnly* self , double scaleX);

/**
 * @brief Calls the `scale` method. 
*/
DOMMatrix DOMMatrixReadOnly_scale2(DOMMatrixReadOnly* self , double scaleX, double scaleY);

/**
 * @brief Calls the `scale` method. 
*/
DOMMatrix DOMMatrixReadOnly_scale3(DOMMatrixReadOnly* self , double scaleX, double scaleY, double scaleZ);

/**
 * @brief Calls the `scale` method. 
*/
DOMMatrix DOMMatrixReadOnly_scale4(DOMMatrixReadOnly* self , double scaleX, double scaleY, double scaleZ, double originX);

/**
 * @brief Calls the `scale` method. 
*/
DOMMatrix DOMMatrixReadOnly_scale5(DOMMatrixReadOnly* self , double scaleX, double scaleY, double scaleZ, double originX, double originY);

/**
 * @brief Calls the `scale` method. 
*/
DOMMatrix DOMMatrixReadOnly_scale6(DOMMatrixReadOnly* self , double scaleX, double scaleY, double scaleZ, double originX, double originY, double originZ);

/**
 * @brief Calls the `scaleNonUniform` method. 
*/
DOMMatrix DOMMatrixReadOnly_scaleNonUniform0(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `scaleNonUniform` method. 
*/
DOMMatrix DOMMatrixReadOnly_scaleNonUniform1(DOMMatrixReadOnly* self , double scaleX);

/**
 * @brief Calls the `scaleNonUniform` method. 
*/
DOMMatrix DOMMatrixReadOnly_scaleNonUniform2(DOMMatrixReadOnly* self , double scaleX, double scaleY);

/**
 * @brief Calls the `scale3d` method. 
*/
DOMMatrix DOMMatrixReadOnly_scale3d0(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `scale3d` method. 
*/
DOMMatrix DOMMatrixReadOnly_scale3d1(DOMMatrixReadOnly* self , double scale);

/**
 * @brief Calls the `scale3d` method. 
*/
DOMMatrix DOMMatrixReadOnly_scale3d2(DOMMatrixReadOnly* self , double scale, double originX);

/**
 * @brief Calls the `scale3d` method. 
*/
DOMMatrix DOMMatrixReadOnly_scale3d3(DOMMatrixReadOnly* self , double scale, double originX, double originY);

/**
 * @brief Calls the `scale3d` method. 
*/
DOMMatrix DOMMatrixReadOnly_scale3d4(DOMMatrixReadOnly* self , double scale, double originX, double originY, double originZ);

/**
 * @brief Calls the `rotate` method. 
*/
DOMMatrix DOMMatrixReadOnly_rotate0(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `rotate` method. 
*/
DOMMatrix DOMMatrixReadOnly_rotate1(DOMMatrixReadOnly* self , double rotX);

/**
 * @brief Calls the `rotate` method. 
*/
DOMMatrix DOMMatrixReadOnly_rotate2(DOMMatrixReadOnly* self , double rotX, double rotY);

/**
 * @brief Calls the `rotate` method. 
*/
DOMMatrix DOMMatrixReadOnly_rotate3(DOMMatrixReadOnly* self , double rotX, double rotY, double rotZ);

/**
 * @brief Calls the `rotateFromVector` method. 
*/
DOMMatrix DOMMatrixReadOnly_rotateFromVector0(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `rotateFromVector` method. 
*/
DOMMatrix DOMMatrixReadOnly_rotateFromVector1(DOMMatrixReadOnly* self , double x);

/**
 * @brief Calls the `rotateFromVector` method. 
*/
DOMMatrix DOMMatrixReadOnly_rotateFromVector2(DOMMatrixReadOnly* self , double x, double y);

/**
 * @brief Calls the `rotateAxisAngle` method. 
*/
DOMMatrix DOMMatrixReadOnly_rotateAxisAngle0(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `rotateAxisAngle` method. 
*/
DOMMatrix DOMMatrixReadOnly_rotateAxisAngle1(DOMMatrixReadOnly* self , double x);

/**
 * @brief Calls the `rotateAxisAngle` method. 
*/
DOMMatrix DOMMatrixReadOnly_rotateAxisAngle2(DOMMatrixReadOnly* self , double x, double y);

/**
 * @brief Calls the `rotateAxisAngle` method. 
*/
DOMMatrix DOMMatrixReadOnly_rotateAxisAngle3(DOMMatrixReadOnly* self , double x, double y, double z);

/**
 * @brief Calls the `rotateAxisAngle` method. 
*/
DOMMatrix DOMMatrixReadOnly_rotateAxisAngle4(DOMMatrixReadOnly* self , double x, double y, double z, double angle);

/**
 * @brief Calls the `skewX` method. 
*/
DOMMatrix DOMMatrixReadOnly_skewX0(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `skewX` method. 
*/
DOMMatrix DOMMatrixReadOnly_skewX1(DOMMatrixReadOnly* self , double sx);

/**
 * @brief Calls the `skewY` method. 
*/
DOMMatrix DOMMatrixReadOnly_skewY0(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `skewY` method. 
*/
DOMMatrix DOMMatrixReadOnly_skewY1(DOMMatrixReadOnly* self , double sy);

/**
 * @brief Calls the `multiply` method. 
*/
DOMMatrix DOMMatrixReadOnly_multiply0(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `multiply` method. 
*/
DOMMatrix DOMMatrixReadOnly_multiply1(DOMMatrixReadOnly* self , DOMMatrixInit * other);

/**
 * @brief Calls the `flipX` method. 
*/
DOMMatrix DOMMatrixReadOnly_flipX(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `flipY` method. 
*/
DOMMatrix DOMMatrixReadOnly_flipY(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `inverse` method. 
*/
DOMMatrix DOMMatrixReadOnly_inverse(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `transformPoint` method. 
*/
DOMPoint DOMMatrixReadOnly_transformPoint0(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `transformPoint` method. 
*/
DOMPoint DOMMatrixReadOnly_transformPoint1(DOMMatrixReadOnly* self , DOMPointInit * point);

/**
 * @brief Calls the `toFloat32Array` method. 
*/
jb_Float32Array DOMMatrixReadOnly_toFloat32Array(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `toFloat64Array` method. 
*/
jb_Float64Array DOMMatrixReadOnly_toFloat64Array(DOMMatrixReadOnly* self );

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object DOMMatrixReadOnly_toJSON(DOMMatrixReadOnly* self );

#ifdef __cplusplus
}
#endif
