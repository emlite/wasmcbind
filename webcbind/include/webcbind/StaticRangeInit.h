#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;

/** @brief Dictionary type StaticRangeInit */
DECLARE_EMLITE_TYPE(StaticRangeInit, em_Val);

/** @brief Getter of the startContainer property */
Node StaticRangeInit_startContainer(const StaticRangeInit *self);

/** @brief Setter of the startContainer property */
void StaticRangeInit_set_startContainer(StaticRangeInit* self, Node * value);

/** @brief Getter of the startOffset property */
unsigned long StaticRangeInit_startOffset(const StaticRangeInit *self);

/** @brief Setter of the startOffset property */
void StaticRangeInit_set_startOffset(StaticRangeInit* self, unsigned long value);

/** @brief Getter of the endContainer property */
Node StaticRangeInit_endContainer(const StaticRangeInit *self);

/** @brief Setter of the endContainer property */
void StaticRangeInit_set_endContainer(StaticRangeInit* self, Node * value);

/** @brief Getter of the endOffset property */
unsigned long StaticRangeInit_endOffset(const StaticRangeInit *self);

/** @brief Setter of the endOffset property */
void StaticRangeInit_set_endOffset(StaticRangeInit* self, unsigned long value);

/** @brief Constructor of the StaticRangeInit dictionary type */
StaticRangeInit StaticRangeInit_new();

#ifdef __cplusplus
}
#endif
