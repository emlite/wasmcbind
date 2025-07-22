#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct IsInputPendingOptions IsInputPendingOptions;


typedef struct {
  em_Val inner;
} IsInputPendingOptions;


DECLARE_EMLITE_TYPE(IsInputPendingOptions, em_Val);

bool IsInputPendingOptions_includeContinuous( const IsInputPendingOptions *self);

void IsInputPendingOptions_set_includeContinuous(IsInputPendingOptions* self, bool value);
typedef struct {
  em_Val inner;
} Scheduling;


DECLARE_EMLITE_TYPE(Scheduling, em_Val);

bool Scheduling_isInputPending(Scheduling* self );

bool Scheduling_isInputPending(Scheduling* self , const IsInputPendingOptions* isInputPendingOptions);
