#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ContentIndexEventInit */
DECLARE_EMLITE_TYPE(ContentIndexEventInit, ExtendableEventInit);

/** @brief Getter of the id property */
jb_String ContentIndexEventInit_id(const ContentIndexEventInit *self);

/** @brief Setter of the id property */
void ContentIndexEventInit_set_id(ContentIndexEventInit* self, jb_String * value);

/** @brief Constructor of the ContentIndexEventInit dictionary type */
ContentIndexEventInit ContentIndexEventInit_new();

#ifdef __cplusplus
}
#endif
