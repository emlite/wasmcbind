#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ShadowRoot ShadowRoot;

/** @brief Dictionary type HighlightsFromPointOptions */
DECLARE_EMLITE_TYPE(HighlightsFromPointOptions, em_Val);

/** @brief Getter of the shadowRoots property */
jb_Array HighlightsFromPointOptions_shadowRoots(const HighlightsFromPointOptions *self);

/** @brief Setter of the shadowRoots property */
void HighlightsFromPointOptions_set_shadowRoots(HighlightsFromPointOptions* self, jb_Array * value);

/** @brief Constructor of the HighlightsFromPointOptions dictionary type */
HighlightsFromPointOptions HighlightsFromPointOptions_new();

#ifdef __cplusplus
}
#endif
