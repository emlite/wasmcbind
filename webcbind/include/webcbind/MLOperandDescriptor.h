#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLOperandDescriptor */
DECLARE_EMLITE_TYPE(MLOperandDescriptor, em_Val);

/** @brief Getter of the dataType property */
MLOperandDataType MLOperandDescriptor_dataType(const MLOperandDescriptor *self);

/** @brief Setter of the dataType property */
void MLOperandDescriptor_set_dataType(MLOperandDescriptor* self, MLOperandDataType * value);

/** @brief Getter of the shape property */
jb_Array MLOperandDescriptor_shape(const MLOperandDescriptor *self);

/** @brief Setter of the shape property */
void MLOperandDescriptor_set_shape(MLOperandDescriptor* self, jb_Array * value);

/** @brief Constructor of the MLOperandDescriptor dictionary type */
MLOperandDescriptor MLOperandDescriptor_new();

#ifdef __cplusplus
}
#endif
