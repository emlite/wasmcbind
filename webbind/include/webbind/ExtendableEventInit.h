#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ExtendableEventInit, EventInit);

ExtendableEventInit ExtendableEventInit_new();

#ifdef __cplusplus
}
#endif
