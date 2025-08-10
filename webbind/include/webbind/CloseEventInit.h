#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CloseEventInit, EventInit);

bool CloseEventInit_wasClean(const CloseEventInit *self);

void CloseEventInit_set_wasClean(CloseEventInit* self, bool value);

unsigned short CloseEventInit_code(const CloseEventInit *self);

void CloseEventInit_set_code(CloseEventInit* self, unsigned short value);

jb_String CloseEventInit_reason(const CloseEventInit *self);

void CloseEventInit_set_reason(CloseEventInit* self, jb_String * value);

CloseEventInit CloseEventInit_new();

#ifdef __cplusplus
}
#endif
