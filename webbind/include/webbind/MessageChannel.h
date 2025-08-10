#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessagePort MessagePort;

DECLARE_EMLITE_TYPE(MessageChannel, em_Val);

MessageChannel MessageChannel_new();

MessagePort MessageChannel_port1(const MessageChannel *self);

MessagePort MessageChannel_port2(const MessageChannel *self);

#ifdef __cplusplus
}
#endif
