#pragma once

#include "EventTarget.h"
#include "enums.h"
#include <emlite/emlite.h>
#include <jsbind/jsbind.h>


DECLARE_EMLITE_TYPE(AbortSignal, EventTarget);

AbortSignal AbortSignal_abort0(AbortSignal* self );

AbortSignal AbortSignal_abort1(AbortSignal* self , jb_Any * reason);

AbortSignal AbortSignal_timeout(AbortSignal* self , long long milliseconds);

AbortSignal AbortSignal_any(AbortSignal* self , jb_Sequence * signals);

bool AbortSignal_aborted(const AbortSignal *self);

jb_Any AbortSignal_reason(const AbortSignal *self);

jb_Undefined AbortSignal_throwIfAborted(AbortSignal* self );

jb_Any AbortSignal_onabort(const AbortSignal *self);

void AbortSignal_set_onabort(AbortSignal* self, jb_Any * value);
