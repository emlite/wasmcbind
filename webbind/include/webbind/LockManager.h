#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LockOptions LockOptions;
typedef struct LockManagerSnapshot LockManagerSnapshot;

DECLARE_EMLITE_TYPE(LockManager, em_Val);

jb_Promise LockManager_request(LockManager* self , jb_String * name, LockOptions * options, jb_Function * callback);

jb_Promise LockManager_query(LockManager* self );

#ifdef __cplusplus
}
#endif
