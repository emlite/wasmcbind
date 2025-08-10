#include <webbind/PermissionsPolicyViolationReportBody.h>

DEFINE_EMLITE_TYPE(PermissionsPolicyViolationReportBody, ReportBody);


jb_String PermissionsPolicyViolationReportBody_featureId(const PermissionsPolicyViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("featureId")));
}


void PermissionsPolicyViolationReportBody_set_featureId(PermissionsPolicyViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("featureId"), em_Val_from(value));
}


jb_String PermissionsPolicyViolationReportBody_sourceFile(const PermissionsPolicyViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("sourceFile")));
}


void PermissionsPolicyViolationReportBody_set_sourceFile(PermissionsPolicyViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("sourceFile"), em_Val_from(value));
}


long PermissionsPolicyViolationReportBody_lineNumber(const PermissionsPolicyViolationReportBody *self) {
    return em_Val_as(long, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("lineNumber")));
}


void PermissionsPolicyViolationReportBody_set_lineNumber(PermissionsPolicyViolationReportBody* self, long value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("lineNumber"), em_Val_from(value));
}


long PermissionsPolicyViolationReportBody_columnNumber(const PermissionsPolicyViolationReportBody *self) {
    return em_Val_as(long, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("columnNumber")));
}


void PermissionsPolicyViolationReportBody_set_columnNumber(PermissionsPolicyViolationReportBody* self, long value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("columnNumber"), em_Val_from(value));
}


jb_String PermissionsPolicyViolationReportBody_disposition(const PermissionsPolicyViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("disposition")));
}


void PermissionsPolicyViolationReportBody_set_disposition(PermissionsPolicyViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("disposition"), em_Val_from(value));
}


jb_String PermissionsPolicyViolationReportBody_allowAttribute(const PermissionsPolicyViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("allowAttribute")));
}


void PermissionsPolicyViolationReportBody_set_allowAttribute(PermissionsPolicyViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("allowAttribute"), em_Val_from(value));
}


jb_String PermissionsPolicyViolationReportBody_srcAttribute(const PermissionsPolicyViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("srcAttribute")));
}


void PermissionsPolicyViolationReportBody_set_srcAttribute(PermissionsPolicyViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("srcAttribute"), em_Val_from(value));
}


PermissionsPolicyViolationReportBody PermissionsPolicyViolationReportBody_new() {
    em_Val obj = em_Val_object();
    return PermissionsPolicyViolationReportBody_from_val(&obj);
}

