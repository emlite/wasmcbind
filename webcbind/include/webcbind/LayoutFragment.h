#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ChildBreakToken ChildBreakToken;


/**
 * @brief Interface LayoutFragment
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LayoutFragment)
 */
DECLARE_EMLITE_TYPE(LayoutFragment, em_Val);

/**
 * @brief Gets the `inlineSize` property. 
*/
double LayoutFragment_inlineSize(const LayoutFragment *self);

/**
 * @brief Gets the `blockSize` property. 
*/
double LayoutFragment_blockSize(const LayoutFragment *self);

/**
 * @brief Gets the `inlineOffset` property. 
*/
double LayoutFragment_inlineOffset(const LayoutFragment *self);

/**
 * @brief Sets the `inlineOffset` property. 
*/
void LayoutFragment_set_inlineOffset(LayoutFragment* self, double value);

/**
 * @brief Gets the `blockOffset` property. 
*/
double LayoutFragment_blockOffset(const LayoutFragment *self);

/**
 * @brief Sets the `blockOffset` property. 
*/
void LayoutFragment_set_blockOffset(LayoutFragment* self, double value);

/**
 * @brief Gets the `data` property. 
*/
jb_Any LayoutFragment_data(const LayoutFragment *self);

/**
 * @brief Gets the `breakToken` property. 
*/
ChildBreakToken LayoutFragment_breakToken(const LayoutFragment *self);

#ifdef __cplusplus
}
#endif
