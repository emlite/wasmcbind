#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;

/** @brief Dictionary type SnapEventInit */
DECLARE_EMLITE_TYPE(SnapEventInit, EventInit);

/** @brief Getter of the snapTargetBlock property */
Node SnapEventInit_snapTargetBlock(const SnapEventInit *self);

/** @brief Setter of the snapTargetBlock property */
void SnapEventInit_set_snapTargetBlock(SnapEventInit* self, Node * value);

/** @brief Getter of the snapTargetInline property */
Node SnapEventInit_snapTargetInline(const SnapEventInit *self);

/** @brief Setter of the snapTargetInline property */
void SnapEventInit_set_snapTargetInline(SnapEventInit* self, Node * value);

/** @brief Constructor of the SnapEventInit dictionary type */
SnapEventInit SnapEventInit_new();

#ifdef __cplusplus
}
#endif
