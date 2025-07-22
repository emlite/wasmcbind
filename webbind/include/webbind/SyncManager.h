#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(SyncManager, em_Val);

jb_Promise SyncManager_register_(SyncManager* self , jb_DOMString * tag);

jb_Promise SyncManager_getTags(SyncManager* self );
