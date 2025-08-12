#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BreakTokenOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LayoutFragment LayoutFragment;

/** @brief Dictionary type FragmentResultOptions */
DECLARE_EMLITE_TYPE(FragmentResultOptions, em_Val);

/** @brief Getter of the inlineSize property */
double FragmentResultOptions_inlineSize(const FragmentResultOptions *self);

/** @brief Setter of the inlineSize property */
void FragmentResultOptions_set_inlineSize(FragmentResultOptions* self, double value);

/** @brief Getter of the blockSize property */
double FragmentResultOptions_blockSize(const FragmentResultOptions *self);

/** @brief Setter of the blockSize property */
void FragmentResultOptions_set_blockSize(FragmentResultOptions* self, double value);

/** @brief Getter of the autoBlockSize property */
double FragmentResultOptions_autoBlockSize(const FragmentResultOptions *self);

/** @brief Setter of the autoBlockSize property */
void FragmentResultOptions_set_autoBlockSize(FragmentResultOptions* self, double value);

/** @brief Getter of the childFragments property */
jb_Array FragmentResultOptions_childFragments(const FragmentResultOptions *self);

/** @brief Setter of the childFragments property */
void FragmentResultOptions_set_childFragments(FragmentResultOptions* self, jb_Array * value);

/** @brief Getter of the data property */
jb_Any FragmentResultOptions_data(const FragmentResultOptions *self);

/** @brief Setter of the data property */
void FragmentResultOptions_set_data(FragmentResultOptions* self, jb_Any * value);

/** @brief Getter of the breakToken property */
BreakTokenOptions FragmentResultOptions_breakToken(const FragmentResultOptions *self);

/** @brief Setter of the breakToken property */
void FragmentResultOptions_set_breakToken(FragmentResultOptions* self, BreakTokenOptions * value);

/** @brief Constructor of the FragmentResultOptions dictionary type */
FragmentResultOptions FragmentResultOptions_new();

#ifdef __cplusplus
}
#endif
