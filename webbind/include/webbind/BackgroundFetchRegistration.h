#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BackgroundFetchRecord BackgroundFetchRecord;
typedef struct CacheQueryOptions CacheQueryOptions;


/**
 * @brief Interface BackgroundFetchRegistration
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRegistration)
 */
DECLARE_EMLITE_TYPE(BackgroundFetchRegistration, EventTarget);

/**
 * @brief Gets the `id` property. 
*/
jb_String BackgroundFetchRegistration_id(const BackgroundFetchRegistration *self);

/**
 * @brief Gets the `uploadTotal` property. 
*/
long long BackgroundFetchRegistration_uploadTotal(const BackgroundFetchRegistration *self);

/**
 * @brief Gets the `uploaded` property. 
*/
long long BackgroundFetchRegistration_uploaded(const BackgroundFetchRegistration *self);

/**
 * @brief Gets the `downloadTotal` property. 
*/
long long BackgroundFetchRegistration_downloadTotal(const BackgroundFetchRegistration *self);

/**
 * @brief Gets the `downloaded` property. 
*/
long long BackgroundFetchRegistration_downloaded(const BackgroundFetchRegistration *self);

/**
 * @brief Gets the `result` property. 
*/
BackgroundFetchResult BackgroundFetchRegistration_result(const BackgroundFetchRegistration *self);

/**
 * @brief Gets the `failureReason` property. 
*/
BackgroundFetchFailureReason BackgroundFetchRegistration_failureReason(const BackgroundFetchRegistration *self);

/**
 * @brief Gets the `recordsAvailable` property. 
*/
bool BackgroundFetchRegistration_recordsAvailable(const BackgroundFetchRegistration *self);

/**
 * @brief Gets the `onprogress` property. 
*/
jb_Any BackgroundFetchRegistration_onprogress(const BackgroundFetchRegistration *self);

/**
 * @brief Sets the `onprogress` property. 
*/
void BackgroundFetchRegistration_set_onprogress(BackgroundFetchRegistration* self, jb_Any * value);

/**
 * @brief Calls the `abort` method. 
*/
jb_Promise BackgroundFetchRegistration_abort(BackgroundFetchRegistration* self );

/**
 * @brief Calls the `match` method. 
*/
jb_Promise BackgroundFetchRegistration_match0(BackgroundFetchRegistration* self , jb_Any * request);

/**
 * @brief Calls the `match` method. 
*/
jb_Promise BackgroundFetchRegistration_match1(BackgroundFetchRegistration* self , jb_Any * request, CacheQueryOptions * options);

/**
 * @brief Calls the `matchAll` method. 
*/
jb_Promise BackgroundFetchRegistration_matchAll0(BackgroundFetchRegistration* self );

/**
 * @brief Calls the `matchAll` method. 
*/
jb_Promise BackgroundFetchRegistration_matchAll1(BackgroundFetchRegistration* self , jb_Any * request);

/**
 * @brief Calls the `matchAll` method. 
*/
jb_Promise BackgroundFetchRegistration_matchAll2(BackgroundFetchRegistration* self , jb_Any * request, CacheQueryOptions * options);

#ifdef __cplusplus
}
#endif
