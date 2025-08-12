#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type StructuredSerializeOptions */
DECLARE_EMLITE_TYPE(StructuredSerializeOptions, em_Val);

/** @brief Getter of the transfer property */
jb_Array StructuredSerializeOptions_transfer(const StructuredSerializeOptions *self);

/** @brief Setter of the transfer property */
void StructuredSerializeOptions_set_transfer(StructuredSerializeOptions* self, jb_Array * value);

/** @brief Constructor of the StructuredSerializeOptions dictionary type */
StructuredSerializeOptions StructuredSerializeOptions_new();

#ifdef __cplusplus
}
#endif
