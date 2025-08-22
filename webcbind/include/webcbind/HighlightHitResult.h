#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Highlight Highlight;
typedef struct AbstractRange AbstractRange;

/** @brief Dictionary type HighlightHitResult */
DECLARE_EMLITE_TYPE(HighlightHitResult, em_Val);

/** @brief Getter of the highlight property */
Highlight HighlightHitResult_highlight(const HighlightHitResult *self);

/** @brief Setter of the highlight property */
void HighlightHitResult_set_highlight(HighlightHitResult* self, Highlight * value);

/** @brief Getter of the ranges property */
jb_Array HighlightHitResult_ranges(const HighlightHitResult *self);

/** @brief Setter of the ranges property */
void HighlightHitResult_set_ranges(HighlightHitResult* self, jb_Array * value);

/** @brief Constructor of the HighlightHitResult dictionary type */
HighlightHitResult HighlightHitResult_new();

#ifdef __cplusplus
}
#endif
