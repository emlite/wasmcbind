#include <webcbind/GenerateTestReportParameters.h>

DEFINE_EMLITE_TYPE(GenerateTestReportParameters, em_Val);


jb_String GenerateTestReportParameters_message(const GenerateTestReportParameters *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("message")));
}


void GenerateTestReportParameters_set_message(GenerateTestReportParameters* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("message"), em_Val_from(value));
}


jb_String GenerateTestReportParameters_group(const GenerateTestReportParameters *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("group")));
}


void GenerateTestReportParameters_set_group(GenerateTestReportParameters* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("group"), em_Val_from(value));
}


GenerateTestReportParameters GenerateTestReportParameters_new() {
    em_Val obj = em_Val_object();
    return GenerateTestReportParameters_from_val(&obj);
}

