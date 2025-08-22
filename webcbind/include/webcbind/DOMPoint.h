#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "DOMPointReadOnly.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointInit DOMPointInit;


/**
 * @brief Interface DOMPoint
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint)
 */
DECLARE_EMLITE_TYPE(DOMPoint, DOMPointReadOnly);

/**
 * @brief Creates a new `DOMPoint` object. 
*/
DOMPoint DOMPoint_new0();

/**
 * @brief Creates a new `DOMPoint` object. 
*/
DOMPoint DOMPoint_new1(double x);

/**
 * @brief Creates a new `DOMPoint` object. 
*/
DOMPoint DOMPoint_new2(double x, double y);

/**
 * @brief Creates a new `DOMPoint` object. 
*/
DOMPoint DOMPoint_new3(double x, double y, double z);

/**
 * @brief Creates a new `DOMPoint` object. 
*/
DOMPoint DOMPoint_new4(double x, double y, double z, double w);

/**
 * @brief Calls the `fromPoint` method. 
*/
DOMPoint DOMPoint_fromPoint0(DOMPoint* self );

/**
 * @brief Calls the `fromPoint` method. 
*/
DOMPoint DOMPoint_fromPoint1(DOMPoint* self , DOMPointInit * other);

/**
 * @brief Gets the `x` property. 
*/
double DOMPoint_x(const DOMPoint *self);

/**
 * @brief Sets the `x` property. 
*/
void DOMPoint_set_x(DOMPoint* self, double value);

/**
 * @brief Gets the `y` property. 
*/
double DOMPoint_y(const DOMPoint *self);

/**
 * @brief Sets the `y` property. 
*/
void DOMPoint_set_y(DOMPoint* self, double value);

/**
 * @brief Gets the `z` property. 
*/
double DOMPoint_z(const DOMPoint *self);

/**
 * @brief Sets the `z` property. 
*/
void DOMPoint_set_z(DOMPoint* self, double value);

/**
 * @brief Gets the `w` property. 
*/
double DOMPoint_w(const DOMPoint *self);

/**
 * @brief Sets the `w` property. 
*/
void DOMPoint_set_w(DOMPoint* self, double value);

#ifdef __cplusplus
}
#endif
