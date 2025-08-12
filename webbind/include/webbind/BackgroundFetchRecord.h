#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Request Request;
typedef struct Response Response;


/**
 * @brief Interface BackgroundFetchRecord
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRecord)
 */
DECLARE_EMLITE_TYPE(BackgroundFetchRecord, em_Val);

/**
 * @brief Gets the `request` property. 
*/
Request BackgroundFetchRecord_request(const BackgroundFetchRecord *self);

/**
 * @brief Gets the `responseReady` property. 
*/
jb_Promise BackgroundFetchRecord_responseReady(const BackgroundFetchRecord *self);

#ifdef __cplusplus
}
#endif
