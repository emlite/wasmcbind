#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SecurityPolicyViolationEventInit SecurityPolicyViolationEventInit;


/**
 * @brief Interface SecurityPolicyViolationEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent)
 */
DECLARE_EMLITE_TYPE(SecurityPolicyViolationEvent, Event);

/**
 * @brief Creates a new `SecurityPolicyViolationEvent` object. 
*/
SecurityPolicyViolationEvent SecurityPolicyViolationEvent_new0(jb_String * type);

/**
 * @brief Creates a new `SecurityPolicyViolationEvent` object. 
*/
SecurityPolicyViolationEvent SecurityPolicyViolationEvent_new1(jb_String * type, SecurityPolicyViolationEventInit * eventInitDict);

/**
 * @brief Gets the `documentURI` property. 
*/
jb_String SecurityPolicyViolationEvent_documentURI(const SecurityPolicyViolationEvent *self);

/**
 * @brief Gets the `referrer` property. 
*/
jb_String SecurityPolicyViolationEvent_referrer(const SecurityPolicyViolationEvent *self);

/**
 * @brief Gets the `blockedURI` property. 
*/
jb_String SecurityPolicyViolationEvent_blockedURI(const SecurityPolicyViolationEvent *self);

/**
 * @brief Gets the `effectiveDirective` property. 
*/
jb_String SecurityPolicyViolationEvent_effectiveDirective(const SecurityPolicyViolationEvent *self);

/**
 * @brief Gets the `violatedDirective` property. 
*/
jb_String SecurityPolicyViolationEvent_violatedDirective(const SecurityPolicyViolationEvent *self);

/**
 * @brief Gets the `originalPolicy` property. 
*/
jb_String SecurityPolicyViolationEvent_originalPolicy(const SecurityPolicyViolationEvent *self);

/**
 * @brief Gets the `sourceFile` property. 
*/
jb_String SecurityPolicyViolationEvent_sourceFile(const SecurityPolicyViolationEvent *self);

/**
 * @brief Gets the `sample` property. 
*/
jb_String SecurityPolicyViolationEvent_sample(const SecurityPolicyViolationEvent *self);

/**
 * @brief Gets the `disposition` property. 
*/
SecurityPolicyViolationEventDisposition SecurityPolicyViolationEvent_disposition(const SecurityPolicyViolationEvent *self);

/**
 * @brief Gets the `statusCode` property. 
*/
unsigned short SecurityPolicyViolationEvent_statusCode(const SecurityPolicyViolationEvent *self);

/**
 * @brief Gets the `lineNumber` property. 
*/
unsigned long SecurityPolicyViolationEvent_lineNumber(const SecurityPolicyViolationEvent *self);

/**
 * @brief Gets the `columnNumber` property. 
*/
unsigned long SecurityPolicyViolationEvent_columnNumber(const SecurityPolicyViolationEvent *self);

#ifdef __cplusplus
}
#endif
