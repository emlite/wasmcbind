#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CaptureActionEventInit CaptureActionEventInit;

DECLARE_EMLITE_TYPE(CaptureActionEvent, Event);

CaptureActionEvent CaptureActionEvent_new0();

CaptureActionEvent CaptureActionEvent_new1(CaptureActionEventInit * init);

CaptureAction CaptureActionEvent_action(const CaptureActionEvent *self);

#ifdef __cplusplus
}
#endif
