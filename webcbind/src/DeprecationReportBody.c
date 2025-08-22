#include <webcbind/DeprecationReportBody.h>

DEFINE_EMLITE_TYPE(DeprecationReportBody, ReportBody);


jb_String DeprecationReportBody_id(const DeprecationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("id")));
}


void DeprecationReportBody_set_id(DeprecationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_Object DeprecationReportBody_anticipatedRemoval(const DeprecationReportBody *self) {
    return em_Val_as(jb_Object, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("anticipatedRemoval")));
}


void DeprecationReportBody_set_anticipatedRemoval(DeprecationReportBody* self, jb_Object * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("anticipatedRemoval"), em_Val_from(value));
}


jb_String DeprecationReportBody_message(const DeprecationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("message")));
}


void DeprecationReportBody_set_message(DeprecationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("message"), em_Val_from(value));
}


jb_String DeprecationReportBody_sourceFile(const DeprecationReportBody *self) {
    return em_Val_as(jb_String, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("sourceFile")));
}


void DeprecationReportBody_set_sourceFile(DeprecationReportBody* self, jb_String * value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("sourceFile"), em_Val_from(value));
}


unsigned long DeprecationReportBody_lineNumber(const DeprecationReportBody *self) {
    return em_Val_as(unsigned long, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("lineNumber")));
}


void DeprecationReportBody_set_lineNumber(DeprecationReportBody* self, unsigned long value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("lineNumber"), em_Val_from(value));
}


unsigned long DeprecationReportBody_columnNumber(const DeprecationReportBody *self) {
    return em_Val_as(unsigned long, em_Val_get(ReportBody_as_val(self->inner), em_Val_from("columnNumber")));
}


void DeprecationReportBody_set_columnNumber(DeprecationReportBody* self, unsigned long value) {
    em_Val_set(ReportBody_as_val(self->inner), em_Val_from("columnNumber"), em_Val_from(value));
}


DeprecationReportBody DeprecationReportBody_new() {
    em_Val obj = em_Val_object();
    return DeprecationReportBody_from_val(&obj);
}

