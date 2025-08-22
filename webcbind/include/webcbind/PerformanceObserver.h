#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PerformanceObserverInit PerformanceObserverInit;


/**
 * @brief Interface PerformanceObserver
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver)
 */
DECLARE_EMLITE_TYPE(PerformanceObserver, em_Val);

/**
 * @brief Creates a new `PerformanceObserver` object. 
*/
PerformanceObserver PerformanceObserver_new(jb_Function * callback);

/**
 * @brief Calls the `observe` method. 
*/
jb_Undefined PerformanceObserver_observe0(PerformanceObserver* self );

/**
 * @brief Calls the `observe` method. 
*/
jb_Undefined PerformanceObserver_observe1(PerformanceObserver* self , PerformanceObserverInit * options);

/**
 * @brief Calls the `disconnect` method. 
*/
jb_Undefined PerformanceObserver_disconnect(PerformanceObserver* self );

/**
 * @brief Calls the `takeRecords` method. 
*/
jb_Any PerformanceObserver_takeRecords(PerformanceObserver* self );

/**
 * @brief Gets the `supportedEntryTypes` property. 
*/
jb_Array PerformanceObserver_supportedEntryTypes(const PerformanceObserver *self);

#ifdef __cplusplus
}
#endif
