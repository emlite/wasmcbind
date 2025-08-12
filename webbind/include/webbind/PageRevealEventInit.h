#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ViewTransition ViewTransition;

/** @brief Dictionary type PageRevealEventInit */
DECLARE_EMLITE_TYPE(PageRevealEventInit, EventInit);

/** @brief Getter of the viewTransition property */
ViewTransition PageRevealEventInit_viewTransition(const PageRevealEventInit *self);

/** @brief Setter of the viewTransition property */
void PageRevealEventInit_set_viewTransition(PageRevealEventInit* self, ViewTransition * value);

/** @brief Constructor of the PageRevealEventInit dictionary type */
PageRevealEventInit PageRevealEventInit_new();

#ifdef __cplusplus
}
#endif
