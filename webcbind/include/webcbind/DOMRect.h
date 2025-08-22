#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "DOMRectReadOnly.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRectInit DOMRectInit;


/**
 * @brief Interface DOMRect
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMRect)
 */
DECLARE_EMLITE_TYPE(DOMRect, DOMRectReadOnly);

/**
 * @brief Creates a new `DOMRect` object. 
*/
DOMRect DOMRect_new0();

/**
 * @brief Creates a new `DOMRect` object. 
*/
DOMRect DOMRect_new1(double x);

/**
 * @brief Creates a new `DOMRect` object. 
*/
DOMRect DOMRect_new2(double x, double y);

/**
 * @brief Creates a new `DOMRect` object. 
*/
DOMRect DOMRect_new3(double x, double y, double width);

/**
 * @brief Creates a new `DOMRect` object. 
*/
DOMRect DOMRect_new4(double x, double y, double width, double height);

/**
 * @brief Calls the `fromRect` method. 
*/
DOMRect DOMRect_fromRect0(DOMRect* self );

/**
 * @brief Calls the `fromRect` method. 
*/
DOMRect DOMRect_fromRect1(DOMRect* self , DOMRectInit * other);

/**
 * @brief Gets the `x` property. 
*/
double DOMRect_x(const DOMRect *self);

/**
 * @brief Sets the `x` property. 
*/
void DOMRect_set_x(DOMRect* self, double value);

/**
 * @brief Gets the `y` property. 
*/
double DOMRect_y(const DOMRect *self);

/**
 * @brief Sets the `y` property. 
*/
void DOMRect_set_y(DOMRect* self, double value);

/**
 * @brief Gets the `width` property. 
*/
double DOMRect_width(const DOMRect *self);

/**
 * @brief Sets the `width` property. 
*/
void DOMRect_set_width(DOMRect* self, double value);

/**
 * @brief Gets the `height` property. 
*/
double DOMRect_height(const DOMRect *self);

/**
 * @brief Sets the `height` property. 
*/
void DOMRect_set_height(DOMRect* self, double value);

#ifdef __cplusplus
}
#endif
