#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;

DECLARE_EMLITE_TYPE(StaticRangeInit, em_Val);

Node StaticRangeInit_startContainer(const StaticRangeInit *self);

void StaticRangeInit_set_startContainer(StaticRangeInit* self, Node * value);

unsigned long StaticRangeInit_startOffset(const StaticRangeInit *self);

void StaticRangeInit_set_startOffset(StaticRangeInit* self, unsigned long value);

Node StaticRangeInit_endContainer(const StaticRangeInit *self);

void StaticRangeInit_set_endContainer(StaticRangeInit* self, Node * value);

unsigned long StaticRangeInit_endOffset(const StaticRangeInit *self);

void StaticRangeInit_set_endOffset(StaticRangeInit* self, unsigned long value);

StaticRangeInit StaticRangeInit_new();

#ifdef __cplusplus
}
#endif
