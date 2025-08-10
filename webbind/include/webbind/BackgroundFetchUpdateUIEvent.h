#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BackgroundFetchEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BackgroundFetchEventInit BackgroundFetchEventInit;
typedef struct BackgroundFetchUIOptions BackgroundFetchUIOptions;

DECLARE_EMLITE_TYPE(BackgroundFetchUpdateUIEvent, BackgroundFetchEvent);

BackgroundFetchUpdateUIEvent BackgroundFetchUpdateUIEvent_new(jb_String * type, BackgroundFetchEventInit * init);

jb_Promise BackgroundFetchUpdateUIEvent_updateUI0(BackgroundFetchUpdateUIEvent* self );

jb_Promise BackgroundFetchUpdateUIEvent_updateUI1(BackgroundFetchUpdateUIEvent* self , BackgroundFetchUIOptions * options);

#ifdef __cplusplus
}
#endif
