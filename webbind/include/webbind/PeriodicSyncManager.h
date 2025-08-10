#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BackgroundSyncOptions BackgroundSyncOptions;

DECLARE_EMLITE_TYPE(PeriodicSyncManager, em_Val);

jb_Promise PeriodicSyncManager_register_0(PeriodicSyncManager* self , jb_String * tag);

jb_Promise PeriodicSyncManager_register_1(PeriodicSyncManager* self , jb_String * tag, BackgroundSyncOptions * options);

jb_Promise PeriodicSyncManager_getTags(PeriodicSyncManager* self );

jb_Promise PeriodicSyncManager_unregister(PeriodicSyncManager* self , jb_String * tag);

#ifdef __cplusplus
}
#endif
