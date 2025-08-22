#include <webcbind/IntegrityViolationReportBody.h>

DEFINE_EMLITE_TYPE(IntegrityViolationReportBody, ReportBody);


jb_String IntegrityViolationReportBody_documentURL(const IntegrityViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("documentURL")));
}


void IntegrityViolationReportBody_set_documentURL(IntegrityViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("documentURL"), em_Val_from(value));
}


jb_String IntegrityViolationReportBody_blockedURL(const IntegrityViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("blockedURL")));
}


void IntegrityViolationReportBody_set_blockedURL(IntegrityViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("blockedURL"), em_Val_from(value));
}


jb_String IntegrityViolationReportBody_destination(const IntegrityViolationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("destination")));
}


void IntegrityViolationReportBody_set_destination(IntegrityViolationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("destination"), em_Val_from(value));
}


bool IntegrityViolationReportBody_reportOnly(const IntegrityViolationReportBody *self) {
    return em_Val_as(bool, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("reportOnly")));
}


void IntegrityViolationReportBody_set_reportOnly(IntegrityViolationReportBody* self, bool value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("reportOnly"), em_Val_from(value));
}


IntegrityViolationReportBody IntegrityViolationReportBody_new() {
    em_Val obj = em_Val_object();
    return IntegrityViolationReportBody_from_val(&obj);
}

