#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BackgroundFetchRegistration BackgroundFetchRegistration;
typedef struct BackgroundFetchOptions BackgroundFetchOptions;


/**
 * @brief Interface BackgroundFetchManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchManager)
 */
DECLARE_EMLITE_TYPE(BackgroundFetchManager, em_Val);

/**
 * @brief Calls the `fetch` method. 
*/
jb_Promise BackgroundFetchManager_fetch0(BackgroundFetchManager* self , jb_String * id, jb_Any * requests);

/**
 * @brief Calls the `fetch` method. 
*/
jb_Promise BackgroundFetchManager_fetch1(BackgroundFetchManager* self , jb_String * id, jb_Any * requests, BackgroundFetchOptions * options);

/**
 * @brief Calls the `get` method. 
*/
jb_Promise BackgroundFetchManager_get(BackgroundFetchManager* self , jb_String * id);

/**
 * @brief Calls the `getIds` method. 
*/
jb_Promise BackgroundFetchManager_getIds(BackgroundFetchManager* self );

#ifdef __cplusplus
}
#endif
