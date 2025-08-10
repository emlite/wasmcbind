#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLElement HTMLElement;

DECLARE_EMLITE_TYPE(SubmitEventInit, EventInit);

HTMLElement SubmitEventInit_submitter(const SubmitEventInit *self);

void SubmitEventInit_set_submitter(SubmitEventInit* self, HTMLElement * value);

SubmitEventInit SubmitEventInit_new();

#ifdef __cplusplus
}
#endif
