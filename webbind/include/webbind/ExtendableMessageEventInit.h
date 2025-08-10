#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessagePort MessagePort;

DECLARE_EMLITE_TYPE(ExtendableMessageEventInit, ExtendableEventInit);

jb_Any ExtendableMessageEventInit_data(const ExtendableMessageEventInit *self);

void ExtendableMessageEventInit_set_data(ExtendableMessageEventInit* self, jb_Any * value);

jb_String ExtendableMessageEventInit_origin(const ExtendableMessageEventInit *self);

void ExtendableMessageEventInit_set_origin(ExtendableMessageEventInit* self, jb_String * value);

jb_String ExtendableMessageEventInit_lastEventId(const ExtendableMessageEventInit *self);

void ExtendableMessageEventInit_set_lastEventId(ExtendableMessageEventInit* self, jb_String * value);

jb_Any ExtendableMessageEventInit_source(const ExtendableMessageEventInit *self);

void ExtendableMessageEventInit_set_source(ExtendableMessageEventInit* self, jb_Any * value);

jb_Array ExtendableMessageEventInit_ports(const ExtendableMessageEventInit *self);

void ExtendableMessageEventInit_set_ports(ExtendableMessageEventInit* self, jb_Array * value);

ExtendableMessageEventInit ExtendableMessageEventInit_new();

#ifdef __cplusplus
}
#endif
