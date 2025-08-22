#include <webcbind/CrashReportBody.h>

DEFINE_EMLITE_TYPE(CrashReportBody, ReportBody);


jb_String CrashReportBody_reason(const CrashReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("reason")));
}


void CrashReportBody_set_reason(CrashReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("reason"), em_Val_from(value));
}


jb_String CrashReportBody_stack(const CrashReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("stack")));
}


void CrashReportBody_set_stack(CrashReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("stack"), em_Val_from(value));
}


bool CrashReportBody_is_top_level(const CrashReportBody *self) {
    return em_Val_as(bool, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("is_top_level")));
}


void CrashReportBody_set_is_top_level(CrashReportBody* self, bool value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("is_top_level"), em_Val_from(value));
}


DocumentVisibilityState CrashReportBody_page_visibility(const CrashReportBody *self) {
    return em_Val_as(DocumentVisibilityState, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("page_visibility")));
}


void CrashReportBody_set_page_visibility(CrashReportBody* self, DocumentVisibilityState * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("page_visibility"), em_Val_from(value));
}


CrashReportBody CrashReportBody_new() {
    em_Val obj = em_Val_object();
    return CrashReportBody_from_val(&obj);
}

