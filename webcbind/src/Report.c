#include <webcbind/Report.h>

DEFINE_EMLITE_TYPE(Report, em_Val);


jb_String Report_type(const Report *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void Report_set_type(Report* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String Report_url(const Report *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void Report_set_url(Report* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


ReportBody Report_body(const Report *self) {
    return em_Val_as(ReportBody, em_Val_get(em_Val_as_val(self->inner), em_Val_from("body")));
}


void Report_set_body(Report* self, ReportBody * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("body"), em_Val_from(value));
}


Report Report_new() {
    em_Val obj = em_Val_object();
    return Report_from_val(&obj);
}

