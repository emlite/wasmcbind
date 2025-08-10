#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContentIndexEventInit ContentIndexEventInit;

DECLARE_EMLITE_TYPE(ContentIndexEvent, ExtendableEvent);

ContentIndexEvent ContentIndexEvent_new(jb_String * type, ContentIndexEventInit * init);

jb_String ContentIndexEvent_id(const ContentIndexEvent *self);

#ifdef __cplusplus
}
#endif
