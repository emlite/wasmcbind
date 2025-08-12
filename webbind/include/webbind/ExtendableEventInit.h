#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ExtendableEventInit */
DECLARE_EMLITE_TYPE(ExtendableEventInit, EventInit);

/** @brief Constructor of the ExtendableEventInit dictionary type */
ExtendableEventInit ExtendableEventInit_new();

#ifdef __cplusplus
}
#endif
