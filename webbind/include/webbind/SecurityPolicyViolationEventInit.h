#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SecurityPolicyViolationEventInit, EventInit);

jb_String SecurityPolicyViolationEventInit_documentURI(const SecurityPolicyViolationEventInit *self);

void SecurityPolicyViolationEventInit_set_documentURI(SecurityPolicyViolationEventInit* self, jb_String * value);

jb_String SecurityPolicyViolationEventInit_referrer(const SecurityPolicyViolationEventInit *self);

void SecurityPolicyViolationEventInit_set_referrer(SecurityPolicyViolationEventInit* self, jb_String * value);

jb_String SecurityPolicyViolationEventInit_blockedURI(const SecurityPolicyViolationEventInit *self);

void SecurityPolicyViolationEventInit_set_blockedURI(SecurityPolicyViolationEventInit* self, jb_String * value);

jb_String SecurityPolicyViolationEventInit_violatedDirective(const SecurityPolicyViolationEventInit *self);

void SecurityPolicyViolationEventInit_set_violatedDirective(SecurityPolicyViolationEventInit* self, jb_String * value);

jb_String SecurityPolicyViolationEventInit_effectiveDirective(const SecurityPolicyViolationEventInit *self);

void SecurityPolicyViolationEventInit_set_effectiveDirective(SecurityPolicyViolationEventInit* self, jb_String * value);

jb_String SecurityPolicyViolationEventInit_originalPolicy(const SecurityPolicyViolationEventInit *self);

void SecurityPolicyViolationEventInit_set_originalPolicy(SecurityPolicyViolationEventInit* self, jb_String * value);

jb_String SecurityPolicyViolationEventInit_sourceFile(const SecurityPolicyViolationEventInit *self);

void SecurityPolicyViolationEventInit_set_sourceFile(SecurityPolicyViolationEventInit* self, jb_String * value);

jb_String SecurityPolicyViolationEventInit_sample(const SecurityPolicyViolationEventInit *self);

void SecurityPolicyViolationEventInit_set_sample(SecurityPolicyViolationEventInit* self, jb_String * value);

SecurityPolicyViolationEventDisposition SecurityPolicyViolationEventInit_disposition(const SecurityPolicyViolationEventInit *self);

void SecurityPolicyViolationEventInit_set_disposition(SecurityPolicyViolationEventInit* self, SecurityPolicyViolationEventDisposition * value);

unsigned short SecurityPolicyViolationEventInit_statusCode(const SecurityPolicyViolationEventInit *self);

void SecurityPolicyViolationEventInit_set_statusCode(SecurityPolicyViolationEventInit* self, unsigned short value);

unsigned long SecurityPolicyViolationEventInit_lineNumber(const SecurityPolicyViolationEventInit *self);

void SecurityPolicyViolationEventInit_set_lineNumber(SecurityPolicyViolationEventInit* self, unsigned long value);

unsigned long SecurityPolicyViolationEventInit_columnNumber(const SecurityPolicyViolationEventInit *self);

void SecurityPolicyViolationEventInit_set_columnNumber(SecurityPolicyViolationEventInit* self, unsigned long value);

SecurityPolicyViolationEventInit SecurityPolicyViolationEventInit_new();

#ifdef __cplusplus
}
#endif
