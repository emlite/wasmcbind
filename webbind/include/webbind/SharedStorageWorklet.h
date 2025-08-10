#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Worklet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SharedStorageUrlWithMetadata SharedStorageUrlWithMetadata;
typedef struct SharedStorageRunOperationMethodOptions SharedStorageRunOperationMethodOptions;

DECLARE_EMLITE_TYPE(SharedStorageWorklet, Worklet);

jb_Promise SharedStorageWorklet_selectURL0(SharedStorageWorklet* self , jb_String * name, jb_Array * urls);

jb_Promise SharedStorageWorklet_selectURL1(SharedStorageWorklet* self , jb_String * name, jb_Array * urls, SharedStorageRunOperationMethodOptions * options);

jb_Promise SharedStorageWorklet_run0(SharedStorageWorklet* self , jb_String * name);

jb_Promise SharedStorageWorklet_run1(SharedStorageWorklet* self , jb_String * name, SharedStorageRunOperationMethodOptions * options);

#ifdef __cplusplus
}
#endif
