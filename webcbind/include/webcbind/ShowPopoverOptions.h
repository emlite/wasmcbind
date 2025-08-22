#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLElement HTMLElement;

/** @brief Dictionary type ShowPopoverOptions */
DECLARE_EMLITE_TYPE(ShowPopoverOptions, em_Val);

/** @brief Getter of the source property */
HTMLElement ShowPopoverOptions_source(const ShowPopoverOptions *self);

/** @brief Setter of the source property */
void ShowPopoverOptions_set_source(ShowPopoverOptions* self, HTMLElement * value);

/** @brief Constructor of the ShowPopoverOptions dictionary type */
ShowPopoverOptions ShowPopoverOptions_new();

#ifdef __cplusplus
}
#endif
