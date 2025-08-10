#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationPreloadState NavigationPreloadState;

DECLARE_EMLITE_TYPE(NavigationPreloadManager, em_Val);

jb_Promise NavigationPreloadManager_enable(NavigationPreloadManager* self );

jb_Promise NavigationPreloadManager_disable(NavigationPreloadManager* self );

jb_Promise NavigationPreloadManager_setHeaderValue(NavigationPreloadManager* self , jb_String * value);

jb_Promise NavigationPreloadManager_getState(NavigationPreloadManager* self );

#ifdef __cplusplus
}
#endif
