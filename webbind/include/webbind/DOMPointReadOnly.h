#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointInit DOMPointInit;
typedef struct DOMPoint DOMPoint;
typedef struct DOMMatrixInit DOMMatrixInit;


/**
 * @brief Interface DOMPointReadOnly
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly)
 */
DECLARE_EMLITE_TYPE(DOMPointReadOnly, em_Val);

/**
 * @brief Creates a new `DOMPointReadOnly` object. 
*/
DOMPointReadOnly DOMPointReadOnly_new0();

/**
 * @brief Creates a new `DOMPointReadOnly` object. 
*/
DOMPointReadOnly DOMPointReadOnly_new1(double x);

/**
 * @brief Creates a new `DOMPointReadOnly` object. 
*/
DOMPointReadOnly DOMPointReadOnly_new2(double x, double y);

/**
 * @brief Creates a new `DOMPointReadOnly` object. 
*/
DOMPointReadOnly DOMPointReadOnly_new3(double x, double y, double z);

/**
 * @brief Creates a new `DOMPointReadOnly` object. 
*/
DOMPointReadOnly DOMPointReadOnly_new4(double x, double y, double z, double w);

/**
 * @brief Calls the `fromPoint` method. 
*/
DOMPointReadOnly DOMPointReadOnly_fromPoint0(DOMPointReadOnly* self );

/**
 * @brief Calls the `fromPoint` method. 
*/
DOMPointReadOnly DOMPointReadOnly_fromPoint1(DOMPointReadOnly* self , DOMPointInit * other);

/**
 * @brief Gets the `x` property. 
*/
double DOMPointReadOnly_x(const DOMPointReadOnly *self);

/**
 * @brief Gets the `y` property. 
*/
double DOMPointReadOnly_y(const DOMPointReadOnly *self);

/**
 * @brief Gets the `z` property. 
*/
double DOMPointReadOnly_z(const DOMPointReadOnly *self);

/**
 * @brief Gets the `w` property. 
*/
double DOMPointReadOnly_w(const DOMPointReadOnly *self);

/**
 * @brief Calls the `matrixTransform` method. 
*/
DOMPoint DOMPointReadOnly_matrixTransform0(DOMPointReadOnly* self );

/**
 * @brief Calls the `matrixTransform` method. 
*/
DOMPoint DOMPointReadOnly_matrixTransform1(DOMPointReadOnly* self , DOMMatrixInit * matrix);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object DOMPointReadOnly_toJSON(DOMPointReadOnly* self );

#ifdef __cplusplus
}
#endif
