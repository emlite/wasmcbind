#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ShadowRoot ShadowRoot;

/** @brief Dictionary type CaretPositionFromPointOptions */
DECLARE_EMLITE_TYPE(CaretPositionFromPointOptions, em_Val);

/** @brief Getter of the shadowRoots property */
jb_Array CaretPositionFromPointOptions_shadowRoots(const CaretPositionFromPointOptions *self);

/** @brief Setter of the shadowRoots property */
void CaretPositionFromPointOptions_set_shadowRoots(CaretPositionFromPointOptions* self, jb_Array * value);

/** @brief Constructor of the CaretPositionFromPointOptions dictionary type */
CaretPositionFromPointOptions CaretPositionFromPointOptions_new();

#ifdef __cplusplus
}
#endif
