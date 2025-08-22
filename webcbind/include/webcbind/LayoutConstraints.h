#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface LayoutConstraints
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LayoutConstraints)
 */
DECLARE_EMLITE_TYPE(LayoutConstraints, em_Val);

/**
 * @brief Gets the `availableInlineSize` property. 
*/
double LayoutConstraints_availableInlineSize(const LayoutConstraints *self);

/**
 * @brief Gets the `availableBlockSize` property. 
*/
double LayoutConstraints_availableBlockSize(const LayoutConstraints *self);

/**
 * @brief Gets the `fixedInlineSize` property. 
*/
double LayoutConstraints_fixedInlineSize(const LayoutConstraints *self);

/**
 * @brief Gets the `fixedBlockSize` property. 
*/
double LayoutConstraints_fixedBlockSize(const LayoutConstraints *self);

/**
 * @brief Gets the `percentageInlineSize` property. 
*/
double LayoutConstraints_percentageInlineSize(const LayoutConstraints *self);

/**
 * @brief Gets the `percentageBlockSize` property. 
*/
double LayoutConstraints_percentageBlockSize(const LayoutConstraints *self);

/**
 * @brief Gets the `blockFragmentationOffset` property. 
*/
double LayoutConstraints_blockFragmentationOffset(const LayoutConstraints *self);

/**
 * @brief Gets the `blockFragmentationType` property. 
*/
BlockFragmentationType LayoutConstraints_blockFragmentationType(const LayoutConstraints *self);

/**
 * @brief Gets the `data` property. 
*/
jb_Any LayoutConstraints_data(const LayoutConstraints *self);

#ifdef __cplusplus
}
#endif
