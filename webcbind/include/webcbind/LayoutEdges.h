#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface LayoutEdges
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LayoutEdges)
 */
DECLARE_EMLITE_TYPE(LayoutEdges, em_Val);

/**
 * @brief Gets the `inlineStart` property. 
*/
double LayoutEdges_inlineStart(const LayoutEdges *self);

/**
 * @brief Gets the `inlineEnd` property. 
*/
double LayoutEdges_inlineEnd(const LayoutEdges *self);

/**
 * @brief Gets the `blockStart` property. 
*/
double LayoutEdges_blockStart(const LayoutEdges *self);

/**
 * @brief Gets the `blockEnd` property. 
*/
double LayoutEdges_blockEnd(const LayoutEdges *self);

/**
 * @brief Gets the `inline` property. 
*/
double LayoutEdges_inline_(const LayoutEdges *self);

/**
 * @brief Gets the `block` property. 
*/
double LayoutEdges_block(const LayoutEdges *self);

#ifdef __cplusplus
}
#endif
