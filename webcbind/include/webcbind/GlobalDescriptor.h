#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GlobalDescriptor */
DECLARE_EMLITE_TYPE(GlobalDescriptor, em_Val);

/** @brief Getter of the value property */
ValueType GlobalDescriptor_value(const GlobalDescriptor *self);

/** @brief Setter of the value property */
void GlobalDescriptor_set_value(GlobalDescriptor* self, ValueType * value);

/** @brief Getter of the mutable property */
bool GlobalDescriptor_mutable_(const GlobalDescriptor *self);

/** @brief Setter of the mutable property */
void GlobalDescriptor_set_mutable_(GlobalDescriptor* self, bool value);

/** @brief Constructor of the GlobalDescriptor dictionary type */
GlobalDescriptor GlobalDescriptor_new();

#ifdef __cplusplus
}
#endif
