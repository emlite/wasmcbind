#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

typedef struct PushMessageData PushMessageData;


DECLARE_EMLITE_TYPE(PushEvent, ExtendableEvent);

PushEvent PushEvent_new0(jb_String * type);

PushEvent PushEvent_new1(jb_String * type, jb_Any * eventInitDict);

PushMessageData PushEvent_data(const PushEvent *self);
