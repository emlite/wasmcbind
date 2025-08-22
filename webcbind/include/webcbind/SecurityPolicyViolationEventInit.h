#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SecurityPolicyViolationEventInit */
DECLARE_EMLITE_TYPE(SecurityPolicyViolationEventInit, EventInit);

/** @brief Getter of the documentURI property */
jb_String SecurityPolicyViolationEventInit_documentURI(const SecurityPolicyViolationEventInit *self);

/** @brief Setter of the documentURI property */
void SecurityPolicyViolationEventInit_set_documentURI(SecurityPolicyViolationEventInit* self, jb_String * value);

/** @brief Getter of the referrer property */
jb_String SecurityPolicyViolationEventInit_referrer(const SecurityPolicyViolationEventInit *self);

/** @brief Setter of the referrer property */
void SecurityPolicyViolationEventInit_set_referrer(SecurityPolicyViolationEventInit* self, jb_String * value);

/** @brief Getter of the blockedURI property */
jb_String SecurityPolicyViolationEventInit_blockedURI(const SecurityPolicyViolationEventInit *self);

/** @brief Setter of the blockedURI property */
void SecurityPolicyViolationEventInit_set_blockedURI(SecurityPolicyViolationEventInit* self, jb_String * value);

/** @brief Getter of the violatedDirective property */
jb_String SecurityPolicyViolationEventInit_violatedDirective(const SecurityPolicyViolationEventInit *self);

/** @brief Setter of the violatedDirective property */
void SecurityPolicyViolationEventInit_set_violatedDirective(SecurityPolicyViolationEventInit* self, jb_String * value);

/** @brief Getter of the effectiveDirective property */
jb_String SecurityPolicyViolationEventInit_effectiveDirective(const SecurityPolicyViolationEventInit *self);

/** @brief Setter of the effectiveDirective property */
void SecurityPolicyViolationEventInit_set_effectiveDirective(SecurityPolicyViolationEventInit* self, jb_String * value);

/** @brief Getter of the originalPolicy property */
jb_String SecurityPolicyViolationEventInit_originalPolicy(const SecurityPolicyViolationEventInit *self);

/** @brief Setter of the originalPolicy property */
void SecurityPolicyViolationEventInit_set_originalPolicy(SecurityPolicyViolationEventInit* self, jb_String * value);

/** @brief Getter of the sourceFile property */
jb_String SecurityPolicyViolationEventInit_sourceFile(const SecurityPolicyViolationEventInit *self);

/** @brief Setter of the sourceFile property */
void SecurityPolicyViolationEventInit_set_sourceFile(SecurityPolicyViolationEventInit* self, jb_String * value);

/** @brief Getter of the sample property */
jb_String SecurityPolicyViolationEventInit_sample(const SecurityPolicyViolationEventInit *self);

/** @brief Setter of the sample property */
void SecurityPolicyViolationEventInit_set_sample(SecurityPolicyViolationEventInit* self, jb_String * value);

/** @brief Getter of the disposition property */
SecurityPolicyViolationEventDisposition SecurityPolicyViolationEventInit_disposition(const SecurityPolicyViolationEventInit *self);

/** @brief Setter of the disposition property */
void SecurityPolicyViolationEventInit_set_disposition(SecurityPolicyViolationEventInit* self, SecurityPolicyViolationEventDisposition * value);

/** @brief Getter of the statusCode property */
unsigned short SecurityPolicyViolationEventInit_statusCode(const SecurityPolicyViolationEventInit *self);

/** @brief Setter of the statusCode property */
void SecurityPolicyViolationEventInit_set_statusCode(SecurityPolicyViolationEventInit* self, unsigned short value);

/** @brief Getter of the lineNumber property */
unsigned long SecurityPolicyViolationEventInit_lineNumber(const SecurityPolicyViolationEventInit *self);

/** @brief Setter of the lineNumber property */
void SecurityPolicyViolationEventInit_set_lineNumber(SecurityPolicyViolationEventInit* self, unsigned long value);

/** @brief Getter of the columnNumber property */
unsigned long SecurityPolicyViolationEventInit_columnNumber(const SecurityPolicyViolationEventInit *self);

/** @brief Setter of the columnNumber property */
void SecurityPolicyViolationEventInit_set_columnNumber(SecurityPolicyViolationEventInit* self, unsigned long value);

/** @brief Constructor of the SecurityPolicyViolationEventInit dictionary type */
SecurityPolicyViolationEventInit SecurityPolicyViolationEventInit_new();

#ifdef __cplusplus
}
#endif
