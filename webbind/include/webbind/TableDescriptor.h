#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TableDescriptor */
DECLARE_EMLITE_TYPE(TableDescriptor, em_Val);

/** @brief Getter of the element property */
TableKind TableDescriptor_element(const TableDescriptor *self);

/** @brief Setter of the element property */
void TableDescriptor_set_element(TableDescriptor* self, TableKind * value);

/** @brief Getter of the initial property */
unsigned long TableDescriptor_initial(const TableDescriptor *self);

/** @brief Setter of the initial property */
void TableDescriptor_set_initial(TableDescriptor* self, unsigned long value);

/** @brief Getter of the maximum property */
unsigned long TableDescriptor_maximum(const TableDescriptor *self);

/** @brief Setter of the maximum property */
void TableDescriptor_set_maximum(TableDescriptor* self, unsigned long value);

/** @brief Constructor of the TableDescriptor dictionary type */
TableDescriptor TableDescriptor_new();

#ifdef __cplusplus
}
#endif
