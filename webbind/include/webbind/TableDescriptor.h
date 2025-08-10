#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TableDescriptor, em_Val);

TableKind TableDescriptor_element(const TableDescriptor *self);

void TableDescriptor_set_element(TableDescriptor* self, TableKind * value);

unsigned long TableDescriptor_initial(const TableDescriptor *self);

void TableDescriptor_set_initial(TableDescriptor* self, unsigned long value);

unsigned long TableDescriptor_maximum(const TableDescriptor *self);

void TableDescriptor_set_maximum(TableDescriptor* self, unsigned long value);

TableDescriptor TableDescriptor_new();

#ifdef __cplusplus
}
#endif
