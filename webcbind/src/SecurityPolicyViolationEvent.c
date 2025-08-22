#include <webcbind/SecurityPolicyViolationEvent.h>

#include <webcbind/SecurityPolicyViolationEventInit.h>

DEFINE_EMLITE_TYPE(SecurityPolicyViolationEvent, Event);


SecurityPolicyViolationEvent SecurityPolicyViolationEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("SecurityPolicyViolationEvent") , em_Val_from(type));
        return SecurityPolicyViolationEvent_from_val(&vv);
      }


SecurityPolicyViolationEvent SecurityPolicyViolationEvent_new1(jb_String * type, SecurityPolicyViolationEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("SecurityPolicyViolationEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return SecurityPolicyViolationEvent_from_val(&vv);
      }


jb_String SecurityPolicyViolationEvent_documentURI(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("documentURI")));
}


jb_String SecurityPolicyViolationEvent_referrer(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("referrer")));
}


jb_String SecurityPolicyViolationEvent_blockedURI(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("blockedURI")));
}


jb_String SecurityPolicyViolationEvent_effectiveDirective(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("effectiveDirective")));
}


jb_String SecurityPolicyViolationEvent_violatedDirective(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("violatedDirective")));
}


jb_String SecurityPolicyViolationEvent_originalPolicy(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("originalPolicy")));
}


jb_String SecurityPolicyViolationEvent_sourceFile(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("sourceFile")));
}


jb_String SecurityPolicyViolationEvent_sample(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("sample")));
}


SecurityPolicyViolationEventDisposition SecurityPolicyViolationEvent_disposition(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(SecurityPolicyViolationEventDisposition, em_Val_get(Event_as_val(self->inner), em_Val_from("disposition")));
}


unsigned short SecurityPolicyViolationEvent_statusCode(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(unsigned short, em_Val_get(Event_as_val(self->inner), em_Val_from("statusCode")));
}


unsigned long SecurityPolicyViolationEvent_lineNumber(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("lineNumber")));
}


unsigned long SecurityPolicyViolationEvent_columnNumber(const SecurityPolicyViolationEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("columnNumber")));
}

