#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;

DECLARE_EMLITE_TYPE(SnapEventInit, EventInit);

Node SnapEventInit_snapTargetBlock(const SnapEventInit *self);

void SnapEventInit_set_snapTargetBlock(SnapEventInit* self, Node * value);

Node SnapEventInit_snapTargetInline(const SnapEventInit *self);

void SnapEventInit_set_snapTargetInline(SnapEventInit* self, Node * value);

SnapEventInit SnapEventInit_new();

#ifdef __cplusplus
}
#endif
