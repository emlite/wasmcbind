#include <webbind/ScriptingPolicyReportBody.h>

DEFINE_EMLITE_TYPE(ScriptingPolicyReportBody, ReportBody);


jb_String ScriptingPolicyReportBody_violationType(const ScriptingPolicyReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("violationType")));
}


void ScriptingPolicyReportBody_set_violationType(ScriptingPolicyReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("violationType"), em_Val_from(value));
}


jb_String ScriptingPolicyReportBody_violationURL(const ScriptingPolicyReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("violationURL")));
}


void ScriptingPolicyReportBody_set_violationURL(ScriptingPolicyReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("violationURL"), em_Val_from(value));
}


jb_String ScriptingPolicyReportBody_violationSample(const ScriptingPolicyReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("violationSample")));
}


void ScriptingPolicyReportBody_set_violationSample(ScriptingPolicyReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("violationSample"), em_Val_from(value));
}


unsigned long ScriptingPolicyReportBody_lineno(const ScriptingPolicyReportBody *self) {
    return em_Val_as(unsigned long, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("lineno")));
}


void ScriptingPolicyReportBody_set_lineno(ScriptingPolicyReportBody* self, unsigned long value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("lineno"), em_Val_from(value));
}


unsigned long ScriptingPolicyReportBody_colno(const ScriptingPolicyReportBody *self) {
    return em_Val_as(unsigned long, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("colno")));
}


void ScriptingPolicyReportBody_set_colno(ScriptingPolicyReportBody* self, unsigned long value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("colno"), em_Val_from(value));
}


ScriptingPolicyReportBody ScriptingPolicyReportBody_new() {
    em_Val obj = em_Val_object();
    return ScriptingPolicyReportBody_from_val(&obj);
}

