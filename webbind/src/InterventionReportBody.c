#include <webbind/InterventionReportBody.h>

DEFINE_EMLITE_TYPE(InterventionReportBody, ReportBody);


jb_String InterventionReportBody_id(const InterventionReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("id")));
}


void InterventionReportBody_set_id(InterventionReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_String InterventionReportBody_message(const InterventionReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("message")));
}


void InterventionReportBody_set_message(InterventionReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("message"), em_Val_from(value));
}


jb_String InterventionReportBody_sourceFile(const InterventionReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("sourceFile")));
}


void InterventionReportBody_set_sourceFile(InterventionReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("sourceFile"), em_Val_from(value));
}


unsigned long InterventionReportBody_lineNumber(const InterventionReportBody *self) {
    return em_Val_as(unsigned long, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("lineNumber")));
}


void InterventionReportBody_set_lineNumber(InterventionReportBody* self, unsigned long value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("lineNumber"), em_Val_from(value));
}


unsigned long InterventionReportBody_columnNumber(const InterventionReportBody *self) {
    return em_Val_as(unsigned long, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("columnNumber")));
}


void InterventionReportBody_set_columnNumber(InterventionReportBody* self, unsigned long value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("columnNumber"), em_Val_from(value));
}


InterventionReportBody InterventionReportBody_new() {
    em_Val obj = em_Val_object();
    return InterventionReportBody_from_val(&obj);
}

