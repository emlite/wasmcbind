#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

DECLARE_EMLITE_TYPE(CommandEventInit, EventInit);

Element CommandEventInit_source(const CommandEventInit *self);

void CommandEventInit_set_source(CommandEventInit* self, Element * value);

jb_String CommandEventInit_command(const CommandEventInit *self);

void CommandEventInit_set_command(CommandEventInit* self, jb_String * value);

CommandEventInit CommandEventInit_new();

#ifdef __cplusplus
}
#endif
