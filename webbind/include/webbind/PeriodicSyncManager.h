#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct BackgroundSyncOptions BackgroundSyncOptions;


typedef struct {
  em_Val inner;
} BackgroundSyncOptions;


DECLARE_EMLITE_TYPE(BackgroundSyncOptions, em_Val);

long long BackgroundSyncOptions_minInterval( const BackgroundSyncOptions *self);

void BackgroundSyncOptions_set_minInterval(BackgroundSyncOptions* self, long long value);
typedef struct {
  em_Val inner;
} PeriodicSyncManager;


DECLARE_EMLITE_TYPE(PeriodicSyncManager, em_Val);

jb_Promise PeriodicSyncManager_register_(PeriodicSyncManager* self , const jb_DOMString* tag);

jb_Promise PeriodicSyncManager_register_(PeriodicSyncManager* self , const jb_DOMString* tag, const BackgroundSyncOptions* options);

jb_Promise PeriodicSyncManager_getTags(PeriodicSyncManager* self );

jb_Promise PeriodicSyncManager_unregister(PeriodicSyncManager* self , const jb_DOMString* tag);
