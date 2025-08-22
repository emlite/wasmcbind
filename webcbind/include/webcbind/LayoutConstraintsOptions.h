#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type LayoutConstraintsOptions */
DECLARE_EMLITE_TYPE(LayoutConstraintsOptions, em_Val);

/** @brief Getter of the availableInlineSize property */
double LayoutConstraintsOptions_availableInlineSize(const LayoutConstraintsOptions *self);

/** @brief Setter of the availableInlineSize property */
void LayoutConstraintsOptions_set_availableInlineSize(LayoutConstraintsOptions* self, double value);

/** @brief Getter of the availableBlockSize property */
double LayoutConstraintsOptions_availableBlockSize(const LayoutConstraintsOptions *self);

/** @brief Setter of the availableBlockSize property */
void LayoutConstraintsOptions_set_availableBlockSize(LayoutConstraintsOptions* self, double value);

/** @brief Getter of the fixedInlineSize property */
double LayoutConstraintsOptions_fixedInlineSize(const LayoutConstraintsOptions *self);

/** @brief Setter of the fixedInlineSize property */
void LayoutConstraintsOptions_set_fixedInlineSize(LayoutConstraintsOptions* self, double value);

/** @brief Getter of the fixedBlockSize property */
double LayoutConstraintsOptions_fixedBlockSize(const LayoutConstraintsOptions *self);

/** @brief Setter of the fixedBlockSize property */
void LayoutConstraintsOptions_set_fixedBlockSize(LayoutConstraintsOptions* self, double value);

/** @brief Getter of the percentageInlineSize property */
double LayoutConstraintsOptions_percentageInlineSize(const LayoutConstraintsOptions *self);

/** @brief Setter of the percentageInlineSize property */
void LayoutConstraintsOptions_set_percentageInlineSize(LayoutConstraintsOptions* self, double value);

/** @brief Getter of the percentageBlockSize property */
double LayoutConstraintsOptions_percentageBlockSize(const LayoutConstraintsOptions *self);

/** @brief Setter of the percentageBlockSize property */
void LayoutConstraintsOptions_set_percentageBlockSize(LayoutConstraintsOptions* self, double value);

/** @brief Getter of the blockFragmentationOffset property */
double LayoutConstraintsOptions_blockFragmentationOffset(const LayoutConstraintsOptions *self);

/** @brief Setter of the blockFragmentationOffset property */
void LayoutConstraintsOptions_set_blockFragmentationOffset(LayoutConstraintsOptions* self, double value);

/** @brief Getter of the blockFragmentationType property */
BlockFragmentationType LayoutConstraintsOptions_blockFragmentationType(const LayoutConstraintsOptions *self);

/** @brief Setter of the blockFragmentationType property */
void LayoutConstraintsOptions_set_blockFragmentationType(LayoutConstraintsOptions* self, BlockFragmentationType * value);

/** @brief Getter of the data property */
jb_Any LayoutConstraintsOptions_data(const LayoutConstraintsOptions *self);

/** @brief Setter of the data property */
void LayoutConstraintsOptions_set_data(LayoutConstraintsOptions* self, jb_Any * value);

/** @brief Constructor of the LayoutConstraintsOptions dictionary type */
LayoutConstraintsOptions LayoutConstraintsOptions_new();

#ifdef __cplusplus
}
#endif
