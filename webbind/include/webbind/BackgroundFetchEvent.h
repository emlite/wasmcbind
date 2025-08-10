#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BackgroundFetchEventInit BackgroundFetchEventInit;
typedef struct BackgroundFetchRegistration BackgroundFetchRegistration;

DECLARE_EMLITE_TYPE(BackgroundFetchEvent, ExtendableEvent);

BackgroundFetchEvent BackgroundFetchEvent_new(jb_String * type, BackgroundFetchEventInit * init);

BackgroundFetchRegistration BackgroundFetchEvent_registration(const BackgroundFetchEvent *self);

#ifdef __cplusplus
}
#endif
