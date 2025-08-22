#include <webcbind/SecurityPolicyViolationEventInit.h>

DEFINE_EMLITE_TYPE(SecurityPolicyViolationEventInit, EventInit);


jb_String SecurityPolicyViolationEventInit_documentURI(const SecurityPolicyViolationEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("documentURI")));
}


void SecurityPolicyViolationEventInit_set_documentURI(SecurityPolicyViolationEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("documentURI"), em_Val_from(value));
}


jb_String SecurityPolicyViolationEventInit_referrer(const SecurityPolicyViolationEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("referrer")));
}


void SecurityPolicyViolationEventInit_set_referrer(SecurityPolicyViolationEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("referrer"), em_Val_from(value));
}


jb_String SecurityPolicyViolationEventInit_blockedURI(const SecurityPolicyViolationEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("blockedURI")));
}


void SecurityPolicyViolationEventInit_set_blockedURI(SecurityPolicyViolationEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("blockedURI"), em_Val_from(value));
}


jb_String SecurityPolicyViolationEventInit_violatedDirective(const SecurityPolicyViolationEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("violatedDirective")));
}


void SecurityPolicyViolationEventInit_set_violatedDirective(SecurityPolicyViolationEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("violatedDirective"), em_Val_from(value));
}


jb_String SecurityPolicyViolationEventInit_effectiveDirective(const SecurityPolicyViolationEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("effectiveDirective")));
}


void SecurityPolicyViolationEventInit_set_effectiveDirective(SecurityPolicyViolationEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("effectiveDirective"), em_Val_from(value));
}


jb_String SecurityPolicyViolationEventInit_originalPolicy(const SecurityPolicyViolationEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("originalPolicy")));
}


void SecurityPolicyViolationEventInit_set_originalPolicy(SecurityPolicyViolationEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("originalPolicy"), em_Val_from(value));
}


jb_String SecurityPolicyViolationEventInit_sourceFile(const SecurityPolicyViolationEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("sourceFile")));
}


void SecurityPolicyViolationEventInit_set_sourceFile(SecurityPolicyViolationEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("sourceFile"), em_Val_from(value));
}


jb_String SecurityPolicyViolationEventInit_sample(const SecurityPolicyViolationEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("sample")));
}


void SecurityPolicyViolationEventInit_set_sample(SecurityPolicyViolationEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("sample"), em_Val_from(value));
}


SecurityPolicyViolationEventDisposition SecurityPolicyViolationEventInit_disposition(const SecurityPolicyViolationEventInit *self) {
    return em_Val_as(SecurityPolicyViolationEventDisposition, em_Val_get(EventInit_as_val(self->inner), em_Val_from("disposition")));
}


void SecurityPolicyViolationEventInit_set_disposition(SecurityPolicyViolationEventInit* self, SecurityPolicyViolationEventDisposition * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("disposition"), em_Val_from(value));
}


unsigned short SecurityPolicyViolationEventInit_statusCode(const SecurityPolicyViolationEventInit *self) {
    return em_Val_as(unsigned short, em_Val_get(EventInit_as_val(self->inner), em_Val_from("statusCode")));
}


void SecurityPolicyViolationEventInit_set_statusCode(SecurityPolicyViolationEventInit* self, unsigned short value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("statusCode"), em_Val_from(value));
}


unsigned long SecurityPolicyViolationEventInit_lineNumber(const SecurityPolicyViolationEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("lineNumber")));
}


void SecurityPolicyViolationEventInit_set_lineNumber(SecurityPolicyViolationEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("lineNumber"), em_Val_from(value));
}


unsigned long SecurityPolicyViolationEventInit_columnNumber(const SecurityPolicyViolationEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("columnNumber")));
}


void SecurityPolicyViolationEventInit_set_columnNumber(SecurityPolicyViolationEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("columnNumber"), em_Val_from(value));
}


SecurityPolicyViolationEventInit SecurityPolicyViolationEventInit_new() {
    em_Val obj = em_Val_object();
    return SecurityPolicyViolationEventInit_from_val(&obj);
}

