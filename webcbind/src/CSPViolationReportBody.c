#include <webcbind/CSPViolationReportBody.h>

DEFINE_EMLITE_TYPE(CSPViolationReportBody, ReportBody);


jb_String CSPViolationReportBody_documentURL(const CSPViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("documentURL")));
}


void CSPViolationReportBody_set_documentURL(CSPViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("documentURL"), em_Val_from(value));
}


jb_String CSPViolationReportBody_referrer(const CSPViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("referrer")));
}


void CSPViolationReportBody_set_referrer(CSPViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("referrer"), em_Val_from(value));
}


jb_String CSPViolationReportBody_blockedURL(const CSPViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("blockedURL")));
}


void CSPViolationReportBody_set_blockedURL(CSPViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("blockedURL"), em_Val_from(value));
}


jb_String CSPViolationReportBody_effectiveDirective(const CSPViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("effectiveDirective")));
}


void CSPViolationReportBody_set_effectiveDirective(CSPViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("effectiveDirective"), em_Val_from(value));
}


jb_String CSPViolationReportBody_originalPolicy(const CSPViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("originalPolicy")));
}


void CSPViolationReportBody_set_originalPolicy(CSPViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("originalPolicy"), em_Val_from(value));
}


jb_String CSPViolationReportBody_sourceFile(const CSPViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("sourceFile")));
}


void CSPViolationReportBody_set_sourceFile(CSPViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("sourceFile"), em_Val_from(value));
}


jb_String CSPViolationReportBody_sample(const CSPViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("sample")));
}


void CSPViolationReportBody_set_sample(CSPViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("sample"), em_Val_from(value));
}


SecurityPolicyViolationEventDisposition CSPViolationReportBody_disposition(const CSPViolationReportBody *self) {
    return em_Val_as(SecurityPolicyViolationEventDisposition, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("disposition")));
}


void CSPViolationReportBody_set_disposition(CSPViolationReportBody* self, SecurityPolicyViolationEventDisposition * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("disposition"), em_Val_from(value));
}


unsigned short CSPViolationReportBody_statusCode(const CSPViolationReportBody *self) {
    return em_Val_as(unsigned short, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("statusCode")));
}


void CSPViolationReportBody_set_statusCode(CSPViolationReportBody* self, unsigned short value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("statusCode"), em_Val_from(value));
}


unsigned long CSPViolationReportBody_lineNumber(const CSPViolationReportBody *self) {
    return em_Val_as(unsigned long, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("lineNumber")));
}


void CSPViolationReportBody_set_lineNumber(CSPViolationReportBody* self, unsigned long value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("lineNumber"), em_Val_from(value));
}


unsigned long CSPViolationReportBody_columnNumber(const CSPViolationReportBody *self) {
    return em_Val_as(unsigned long, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("columnNumber")));
}


void CSPViolationReportBody_set_columnNumber(CSPViolationReportBody* self, unsigned long value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("columnNumber"), em_Val_from(value));
}


CSPViolationReportBody CSPViolationReportBody_new() {
    em_Val obj = em_Val_object();
    return CSPViolationReportBody_from_val(&obj);
}

