#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} SecurityPolicyViolationEvent;


DECLARE_EMLITE_TYPE(SecurityPolicyViolationEvent, Event);

SecurityPolicyViolationEvent SecurityPolicyViolationEvent_new(const jb_DOMString* type);

SecurityPolicyViolationEvent SecurityPolicyViolationEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_USVString SecurityPolicyViolationEvent_documentURI( const SecurityPolicyViolationEvent *self);

jb_USVString SecurityPolicyViolationEvent_referrer( const SecurityPolicyViolationEvent *self);

jb_USVString SecurityPolicyViolationEvent_blockedURI( const SecurityPolicyViolationEvent *self);

jb_DOMString SecurityPolicyViolationEvent_effectiveDirective( const SecurityPolicyViolationEvent *self);

jb_DOMString SecurityPolicyViolationEvent_violatedDirective( const SecurityPolicyViolationEvent *self);

jb_DOMString SecurityPolicyViolationEvent_originalPolicy( const SecurityPolicyViolationEvent *self);

jb_USVString SecurityPolicyViolationEvent_sourceFile( const SecurityPolicyViolationEvent *self);

jb_DOMString SecurityPolicyViolationEvent_sample( const SecurityPolicyViolationEvent *self);

SecurityPolicyViolationEventDisposition SecurityPolicyViolationEvent_disposition( const SecurityPolicyViolationEvent *self);

unsigned short SecurityPolicyViolationEvent_statusCode( const SecurityPolicyViolationEvent *self);

unsigned long SecurityPolicyViolationEvent_lineNumber( const SecurityPolicyViolationEvent *self);

unsigned long SecurityPolicyViolationEvent_columnNumber( const SecurityPolicyViolationEvent *self);
