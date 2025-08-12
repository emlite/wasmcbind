#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ContentVisibilityAutoStateChangeEventInit */
DECLARE_EMLITE_TYPE(ContentVisibilityAutoStateChangeEventInit, EventInit);

/** @brief Getter of the skipped property */
bool ContentVisibilityAutoStateChangeEventInit_skipped(const ContentVisibilityAutoStateChangeEventInit *self);

/** @brief Setter of the skipped property */
void ContentVisibilityAutoStateChangeEventInit_set_skipped(ContentVisibilityAutoStateChangeEventInit* self, bool value);

/** @brief Constructor of the ContentVisibilityAutoStateChangeEventInit dictionary type */
ContentVisibilityAutoStateChangeEventInit ContentVisibilityAutoStateChangeEventInit_new();

#ifdef __cplusplus
}
#endif
