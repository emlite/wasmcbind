#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MemoryDescriptor */
DECLARE_EMLITE_TYPE(MemoryDescriptor, em_Val);

/** @brief Getter of the initial property */
unsigned long MemoryDescriptor_initial(const MemoryDescriptor *self);

/** @brief Setter of the initial property */
void MemoryDescriptor_set_initial(MemoryDescriptor* self, unsigned long value);

/** @brief Getter of the maximum property */
unsigned long MemoryDescriptor_maximum(const MemoryDescriptor *self);

/** @brief Setter of the maximum property */
void MemoryDescriptor_set_maximum(MemoryDescriptor* self, unsigned long value);

/** @brief Constructor of the MemoryDescriptor dictionary type */
MemoryDescriptor MemoryDescriptor_new();

#ifdef __cplusplus
}
#endif
