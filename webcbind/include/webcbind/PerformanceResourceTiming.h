#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PerformanceServerTiming PerformanceServerTiming;


/**
 * @brief Interface PerformanceResourceTiming
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceResourceTiming)
 */
DECLARE_EMLITE_TYPE(PerformanceResourceTiming, PerformanceEntry);

/**
 * @brief Gets the `initiatorType` property. 
*/
jb_String PerformanceResourceTiming_initiatorType(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `deliveryType` property. 
*/
jb_String PerformanceResourceTiming_deliveryType(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `nextHopProtocol` property. 
*/
jb_String PerformanceResourceTiming_nextHopProtocol(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `workerStart` property. 
*/
jb_Any PerformanceResourceTiming_workerStart(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `redirectStart` property. 
*/
jb_Any PerformanceResourceTiming_redirectStart(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `redirectEnd` property. 
*/
jb_Any PerformanceResourceTiming_redirectEnd(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `fetchStart` property. 
*/
jb_Any PerformanceResourceTiming_fetchStart(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `domainLookupStart` property. 
*/
jb_Any PerformanceResourceTiming_domainLookupStart(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `domainLookupEnd` property. 
*/
jb_Any PerformanceResourceTiming_domainLookupEnd(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `connectStart` property. 
*/
jb_Any PerformanceResourceTiming_connectStart(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `connectEnd` property. 
*/
jb_Any PerformanceResourceTiming_connectEnd(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `secureConnectionStart` property. 
*/
jb_Any PerformanceResourceTiming_secureConnectionStart(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `requestStart` property. 
*/
jb_Any PerformanceResourceTiming_requestStart(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `finalResponseHeadersStart` property. 
*/
jb_Any PerformanceResourceTiming_finalResponseHeadersStart(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `firstInterimResponseStart` property. 
*/
jb_Any PerformanceResourceTiming_firstInterimResponseStart(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `responseStart` property. 
*/
jb_Any PerformanceResourceTiming_responseStart(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `responseEnd` property. 
*/
jb_Any PerformanceResourceTiming_responseEnd(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `transferSize` property. 
*/
long long PerformanceResourceTiming_transferSize(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `encodedBodySize` property. 
*/
long long PerformanceResourceTiming_encodedBodySize(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `decodedBodySize` property. 
*/
long long PerformanceResourceTiming_decodedBodySize(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `responseStatus` property. 
*/
unsigned short PerformanceResourceTiming_responseStatus(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `renderBlockingStatus` property. 
*/
RenderBlockingStatusType PerformanceResourceTiming_renderBlockingStatus(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `contentType` property. 
*/
jb_String PerformanceResourceTiming_contentType(const PerformanceResourceTiming *self);

/**
 * @brief Gets the `contentEncoding` property. 
*/
jb_String PerformanceResourceTiming_contentEncoding(const PerformanceResourceTiming *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PerformanceResourceTiming_toJSON(PerformanceResourceTiming* self );

/**
 * @brief Gets the `serverTiming` property. 
*/
jb_Array PerformanceResourceTiming_serverTiming(const PerformanceResourceTiming *self);

#ifdef __cplusplus
}
#endif
