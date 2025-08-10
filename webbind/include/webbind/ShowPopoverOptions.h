#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLElement HTMLElement;

DECLARE_EMLITE_TYPE(ShowPopoverOptions, em_Val);

HTMLElement ShowPopoverOptions_source(const ShowPopoverOptions *self);

void ShowPopoverOptions_set_source(ShowPopoverOptions* self, HTMLElement * value);

ShowPopoverOptions ShowPopoverOptions_new();

#ifdef __cplusplus
}
#endif
