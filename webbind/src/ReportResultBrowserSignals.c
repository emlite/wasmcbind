#include <webbind/ReportResultBrowserSignals.h>

DEFINE_EMLITE_TYPE(ReportResultBrowserSignals, ReportingBrowserSignals);


double ReportResultBrowserSignals_desirability(const ReportResultBrowserSignals *self) {
    return em_Val_as(double, em_Val_get(ReportingBrowserSignals_as_val(self->inner), em_Val_from("desirability")));
}


void ReportResultBrowserSignals_set_desirability(ReportResultBrowserSignals* self, double value) {
    em_Val_set(ReportingBrowserSignals_as_val(self->inner), em_Val_from("desirability"), em_Val_from(value));
}


jb_String ReportResultBrowserSignals_topLevelSellerSignals(const ReportResultBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(ReportingBrowserSignals_as_val(self->inner), em_Val_from("topLevelSellerSignals")));
}


void ReportResultBrowserSignals_set_topLevelSellerSignals(ReportResultBrowserSignals* self, jb_String * value) {
    em_Val_set(ReportingBrowserSignals_as_val(self->inner), em_Val_from("topLevelSellerSignals"), em_Val_from(value));
}


double ReportResultBrowserSignals_modifiedBid(const ReportResultBrowserSignals *self) {
    return em_Val_as(double, em_Val_get(ReportingBrowserSignals_as_val(self->inner), em_Val_from("modifiedBid")));
}


void ReportResultBrowserSignals_set_modifiedBid(ReportResultBrowserSignals* self, double value) {
    em_Val_set(ReportingBrowserSignals_as_val(self->inner), em_Val_from("modifiedBid"), em_Val_from(value));
}


unsigned long ReportResultBrowserSignals_dataVersion(const ReportResultBrowserSignals *self) {
    return em_Val_as(unsigned long, em_Val_get(ReportingBrowserSignals_as_val(self->inner), em_Val_from("dataVersion")));
}


void ReportResultBrowserSignals_set_dataVersion(ReportResultBrowserSignals* self, unsigned long value) {
    em_Val_set(ReportingBrowserSignals_as_val(self->inner), em_Val_from("dataVersion"), em_Val_from(value));
}


ReportResultBrowserSignals ReportResultBrowserSignals_new() {
    em_Val obj = em_Val_object();
    return ReportResultBrowserSignals_from_val(&obj);
}

