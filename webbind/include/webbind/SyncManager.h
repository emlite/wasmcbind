#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} SyncManager;


DECLARE_EMLITE_TYPE(SyncManager, em_Val);

jb_Promise SyncManager_register_(SyncManager* self , const jb_DOMString* tag);

jb_Promise SyncManager_getTags(SyncManager* self );
