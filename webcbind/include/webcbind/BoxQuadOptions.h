#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BoxQuadOptions */
DECLARE_EMLITE_TYPE(BoxQuadOptions, em_Val);

/** @brief Getter of the box property */
CSSBoxType BoxQuadOptions_box(const BoxQuadOptions *self);

/** @brief Setter of the box property */
void BoxQuadOptions_set_box(BoxQuadOptions* self, CSSBoxType * value);

/** @brief Getter of the relativeTo property */
jb_Any BoxQuadOptions_relativeTo(const BoxQuadOptions *self);

/** @brief Setter of the relativeTo property */
void BoxQuadOptions_set_relativeTo(BoxQuadOptions* self, jb_Any * value);

/** @brief Constructor of the BoxQuadOptions dictionary type */
BoxQuadOptions BoxQuadOptions_new();

#ifdef __cplusplus
}
#endif
