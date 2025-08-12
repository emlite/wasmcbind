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


/**
 * @brief Interface SharedStorageWorklet
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorklet)
 */
DECLARE_EMLITE_TYPE(SharedStorageWorklet, Worklet);

/**
 * @brief Calls the `selectURL` method. 
*/
jb_Promise SharedStorageWorklet_selectURL0(SharedStorageWorklet* self , jb_String * name, jb_Array * urls);

/**
 * @brief Calls the `selectURL` method. 
*/
jb_Promise SharedStorageWorklet_selectURL1(SharedStorageWorklet* self , jb_String * name, jb_Array * urls, SharedStorageRunOperationMethodOptions * options);

/**
 * @brief Calls the `run` method. 
*/
jb_Promise SharedStorageWorklet_run0(SharedStorageWorklet* self , jb_String * name);

/**
 * @brief Calls the `run` method. 
*/
jb_Promise SharedStorageWorklet_run1(SharedStorageWorklet* self , jb_String * name, SharedStorageRunOperationMethodOptions * options);

#ifdef __cplusplus
}
#endif
