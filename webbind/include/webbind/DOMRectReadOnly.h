#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRectInit DOMRectInit;


/**
 * @brief Interface DOMRectReadOnly
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly)
 */
DECLARE_EMLITE_TYPE(DOMRectReadOnly, em_Val);

/**
 * @brief Creates a new `DOMRectReadOnly` object. 
*/
DOMRectReadOnly DOMRectReadOnly_new0();

/**
 * @brief Creates a new `DOMRectReadOnly` object. 
*/
DOMRectReadOnly DOMRectReadOnly_new1(double x);

/**
 * @brief Creates a new `DOMRectReadOnly` object. 
*/
DOMRectReadOnly DOMRectReadOnly_new2(double x, double y);

/**
 * @brief Creates a new `DOMRectReadOnly` object. 
*/
DOMRectReadOnly DOMRectReadOnly_new3(double x, double y, double width);

/**
 * @brief Creates a new `DOMRectReadOnly` object. 
*/
DOMRectReadOnly DOMRectReadOnly_new4(double x, double y, double width, double height);

/**
 * @brief Calls the `fromRect` method. 
*/
DOMRectReadOnly DOMRectReadOnly_fromRect0(DOMRectReadOnly* self );

/**
 * @brief Calls the `fromRect` method. 
*/
DOMRectReadOnly DOMRectReadOnly_fromRect1(DOMRectReadOnly* self , DOMRectInit * other);

/**
 * @brief Gets the `x` property. 
*/
double DOMRectReadOnly_x(const DOMRectReadOnly *self);

/**
 * @brief Gets the `y` property. 
*/
double DOMRectReadOnly_y(const DOMRectReadOnly *self);

/**
 * @brief Gets the `width` property. 
*/
double DOMRectReadOnly_width(const DOMRectReadOnly *self);

/**
 * @brief Gets the `height` property. 
*/
double DOMRectReadOnly_height(const DOMRectReadOnly *self);

/**
 * @brief Gets the `top` property. 
*/
double DOMRectReadOnly_top(const DOMRectReadOnly *self);

/**
 * @brief Gets the `right` property. 
*/
double DOMRectReadOnly_right(const DOMRectReadOnly *self);

/**
 * @brief Gets the `bottom` property. 
*/
double DOMRectReadOnly_bottom(const DOMRectReadOnly *self);

/**
 * @brief Gets the `left` property. 
*/
double DOMRectReadOnly_left(const DOMRectReadOnly *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object DOMRectReadOnly_toJSON(DOMRectReadOnly* self );

#ifdef __cplusplus
}
#endif
