#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReportingObserverOptions ReportingObserverOptions;


/**
 * @brief Interface ReportingObserver
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ReportingObserver)
 */
DECLARE_EMLITE_TYPE(ReportingObserver, em_Val);

/**
 * @brief Creates a new `ReportingObserver` object. 
*/
ReportingObserver ReportingObserver_new0(jb_Function * callback);

/**
 * @brief Creates a new `ReportingObserver` object. 
*/
ReportingObserver ReportingObserver_new1(jb_Function * callback, ReportingObserverOptions * options);

/**
 * @brief Calls the `observe` method. 
*/
jb_Undefined ReportingObserver_observe(ReportingObserver* self );

/**
 * @brief Calls the `disconnect` method. 
*/
jb_Undefined ReportingObserver_disconnect(ReportingObserver* self );

/**
 * @brief Calls the `takeRecords` method. 
*/
jb_Any ReportingObserver_takeRecords(ReportingObserver* self );

#ifdef __cplusplus
}
#endif
