#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessagePort MessagePort;

DECLARE_EMLITE_TYPE(MessageEventInit, EventInit);

jb_Any MessageEventInit_data(const MessageEventInit *self);

void MessageEventInit_set_data(MessageEventInit* self, jb_Any * value);

jb_String MessageEventInit_origin(const MessageEventInit *self);

void MessageEventInit_set_origin(MessageEventInit* self, jb_String * value);

jb_String MessageEventInit_lastEventId(const MessageEventInit *self);

void MessageEventInit_set_lastEventId(MessageEventInit* self, jb_String * value);

jb_Any MessageEventInit_source(const MessageEventInit *self);

void MessageEventInit_set_source(MessageEventInit* self, jb_Any * value);

jb_Array MessageEventInit_ports(const MessageEventInit *self);

void MessageEventInit_set_ports(MessageEventInit* self, jb_Array * value);

MessageEventInit MessageEventInit_new();

#ifdef __cplusplus
}
#endif
