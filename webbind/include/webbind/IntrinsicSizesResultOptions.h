#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IntrinsicSizesResultOptions */
DECLARE_EMLITE_TYPE(IntrinsicSizesResultOptions, em_Val);

/** @brief Getter of the maxContentSize property */
double IntrinsicSizesResultOptions_maxContentSize(const IntrinsicSizesResultOptions *self);

/** @brief Setter of the maxContentSize property */
void IntrinsicSizesResultOptions_set_maxContentSize(IntrinsicSizesResultOptions* self, double value);

/** @brief Getter of the minContentSize property */
double IntrinsicSizesResultOptions_minContentSize(const IntrinsicSizesResultOptions *self);

/** @brief Setter of the minContentSize property */
void IntrinsicSizesResultOptions_set_minContentSize(IntrinsicSizesResultOptions* self, double value);

/** @brief Constructor of the IntrinsicSizesResultOptions dictionary type */
IntrinsicSizesResultOptions IntrinsicSizesResultOptions_new();

#ifdef __cplusplus
}
#endif
