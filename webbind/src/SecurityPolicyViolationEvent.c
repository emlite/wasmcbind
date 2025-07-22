#include <webbind/SecurityPolicyViolationEvent.h>


DEFINE_EMLITE_TYPE(SecurityPolicyViolationEvent, Event);


SecurityPolicyViolationEvent SecurityPolicyViolationEvent_new(const jb_DOMString* type) : Event(em_Val_global("SecurityPolicyViolationEvent").new_(em_Val_from(type))) {
        return SecurityPolicyViolationEvent(em_Val_new(em_Val_global("SecurityPolicyViolationEvent", em_Val_from(type)));
      }


SecurityPolicyViolationEvent SecurityPolicyViolationEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("SecurityPolicyViolationEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return SecurityPolicyViolationEvent(em_Val_new(em_Val_global("SecurityPolicyViolationEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_USVString SecurityPolicyViolationEvent_documentURI(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "documentURI"));
}


jb_USVString SecurityPolicyViolationEvent_referrer(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "referrer"));
}


jb_USVString SecurityPolicyViolationEvent_blockedURI(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "blockedURI"));
}


jb_DOMString SecurityPolicyViolationEvent_effectiveDirective(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "effectiveDirective"));
}


jb_DOMString SecurityPolicyViolationEvent_violatedDirective(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "violatedDirective"));
}


jb_DOMString SecurityPolicyViolationEvent_originalPolicy(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "originalPolicy"));
}


jb_USVString SecurityPolicyViolationEvent_sourceFile(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "sourceFile"));
}


jb_DOMString SecurityPolicyViolationEvent_sample(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "sample"));
}


SecurityPolicyViolationEventDisposition SecurityPolicyViolationEvent_disposition(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(SecurityPolicyViolationEventDisposition, em_Val_get(Event_as_val(self->inner), "disposition"));
}


unsigned short SecurityPolicyViolationEvent_statusCode(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(unsigned short, em_Val_get(Event_as_val(self->inner), "statusCode"));
}


unsigned long SecurityPolicyViolationEvent_lineNumber(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "lineNumber"));
}


unsigned long SecurityPolicyViolationEvent_columnNumber(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "columnNumber"));
}

