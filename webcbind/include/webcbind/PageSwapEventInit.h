#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationActivation NavigationActivation;
typedef struct ViewTransition ViewTransition;

/** @brief Dictionary type PageSwapEventInit */
DECLARE_EMLITE_TYPE(PageSwapEventInit, EventInit);

/** @brief Getter of the activation property */
NavigationActivation PageSwapEventInit_activation(const PageSwapEventInit *self);

/** @brief Setter of the activation property */
void PageSwapEventInit_set_activation(PageSwapEventInit* self, NavigationActivation * value);

/** @brief Getter of the viewTransition property */
ViewTransition PageSwapEventInit_viewTransition(const PageSwapEventInit *self);

/** @brief Setter of the viewTransition property */
void PageSwapEventInit_set_viewTransition(PageSwapEventInit* self, ViewTransition * value);

/** @brief Constructor of the PageSwapEventInit dictionary type */
PageSwapEventInit PageSwapEventInit_new();

#ifdef __cplusplus
}
#endif
