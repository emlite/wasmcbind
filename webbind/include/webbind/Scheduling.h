#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IsInputPendingOptions IsInputPendingOptions;

DECLARE_EMLITE_TYPE(Scheduling, em_Val);

bool Scheduling_isInputPending0(Scheduling* self );

bool Scheduling_isInputPending1(Scheduling* self , IsInputPendingOptions * isInputPendingOptions);

#ifdef __cplusplus
}
#endif
