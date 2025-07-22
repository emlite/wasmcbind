#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct NavigationPreloadState NavigationPreloadState;


typedef struct {
  em_Val inner;
} NavigationPreloadState;


DECLARE_EMLITE_TYPE(NavigationPreloadState, em_Val);

bool NavigationPreloadState_enabled( const NavigationPreloadState *self);

void NavigationPreloadState_set_enabled(NavigationPreloadState* self, bool value);

jb_ByteString NavigationPreloadState_headerValue( const NavigationPreloadState *self);

void NavigationPreloadState_set_headerValue(NavigationPreloadState* self, const jb_ByteString* value);
typedef struct {
  em_Val inner;
} NavigationPreloadManager;


DECLARE_EMLITE_TYPE(NavigationPreloadManager, em_Val);

jb_Promise NavigationPreloadManager_enable(NavigationPreloadManager* self );

jb_Promise NavigationPreloadManager_disable(NavigationPreloadManager* self );

jb_Promise NavigationPreloadManager_setHeaderValue(NavigationPreloadManager* self , const jb_ByteString* value);

jb_Promise NavigationPreloadManager_getState(NavigationPreloadManager* self );
