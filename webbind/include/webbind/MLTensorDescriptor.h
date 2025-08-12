#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperandDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLTensorDescriptor */
DECLARE_EMLITE_TYPE(MLTensorDescriptor, MLOperandDescriptor);

/** @brief Getter of the readable property */
bool MLTensorDescriptor_readable(const MLTensorDescriptor *self);

/** @brief Setter of the readable property */
void MLTensorDescriptor_set_readable(MLTensorDescriptor* self, bool value);

/** @brief Getter of the writable property */
bool MLTensorDescriptor_writable(const MLTensorDescriptor *self);

/** @brief Setter of the writable property */
void MLTensorDescriptor_set_writable(MLTensorDescriptor* self, bool value);

/** @brief Constructor of the MLTensorDescriptor dictionary type */
MLTensorDescriptor MLTensorDescriptor_new();

#ifdef __cplusplus
}
#endif
