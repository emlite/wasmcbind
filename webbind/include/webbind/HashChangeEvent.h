#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HashChangeEventInit HashChangeEventInit;

DECLARE_EMLITE_TYPE(HashChangeEvent, Event);

HashChangeEvent HashChangeEvent_new0(jb_String * type);

HashChangeEvent HashChangeEvent_new1(jb_String * type, HashChangeEventInit * eventInitDict);

jb_String HashChangeEvent_oldURL(const HashChangeEvent *self);

jb_String HashChangeEvent_newURL(const HashChangeEvent *self);

#ifdef __cplusplus
}
#endif
