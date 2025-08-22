#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PageTransitionEventInit */
DECLARE_EMLITE_TYPE(PageTransitionEventInit, EventInit);

/** @brief Getter of the persisted property */
bool PageTransitionEventInit_persisted(const PageTransitionEventInit *self);

/** @brief Setter of the persisted property */
void PageTransitionEventInit_set_persisted(PageTransitionEventInit* self, bool value);

/** @brief Constructor of the PageTransitionEventInit dictionary type */
PageTransitionEventInit PageTransitionEventInit_new();

#ifdef __cplusplus
}
#endif
