#include <webcbind/ReportWinBrowserSignals.h>

DEFINE_EMLITE_TYPE(ReportWinBrowserSignals, ReportingBrowserSignals);


double ReportWinBrowserSignals_adCost(const ReportWinBrowserSignals *self) {
    return em_Val_as(double, em_Val_get(ReportingBrowserSignals_as_val(self->inner), em_Val_from("adCost")));
}


void ReportWinBrowserSignals_set_adCost(ReportWinBrowserSignals* self, double value) {
    em_Val_set(ReportingBrowserSignals_as_val(self->inner), em_Val_from("adCost"), em_Val_from(value));
}


jb_String ReportWinBrowserSignals_seller(const ReportWinBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(ReportingBrowserSignals_as_val(self->inner), em_Val_from("seller")));
}


void ReportWinBrowserSignals_set_seller(ReportWinBrowserSignals* self, jb_String * value) {
    em_Val_set(ReportingBrowserSignals_as_val(self->inner), em_Val_from("seller"), em_Val_from(value));
}


bool ReportWinBrowserSignals_madeHighestScoringOtherBid(const ReportWinBrowserSignals *self) {
    return em_Val_as(bool, em_Val_get(ReportingBrowserSignals_as_val(self->inner), em_Val_from("madeHighestScoringOtherBid")));
}


void ReportWinBrowserSignals_set_madeHighestScoringOtherBid(ReportWinBrowserSignals* self, bool value) {
    em_Val_set(ReportingBrowserSignals_as_val(self->inner), em_Val_from("madeHighestScoringOtherBid"), em_Val_from(value));
}


jb_String ReportWinBrowserSignals_interestGroupName(const ReportWinBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(ReportingBrowserSignals_as_val(self->inner), em_Val_from("interestGroupName")));
}


void ReportWinBrowserSignals_set_interestGroupName(ReportWinBrowserSignals* self, jb_String * value) {
    em_Val_set(ReportingBrowserSignals_as_val(self->inner), em_Val_from("interestGroupName"), em_Val_from(value));
}


jb_String ReportWinBrowserSignals_buyerReportingId(const ReportWinBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(ReportingBrowserSignals_as_val(self->inner), em_Val_from("buyerReportingId")));
}


void ReportWinBrowserSignals_set_buyerReportingId(ReportWinBrowserSignals* self, jb_String * value) {
    em_Val_set(ReportingBrowserSignals_as_val(self->inner), em_Val_from("buyerReportingId"), em_Val_from(value));
}


unsigned short ReportWinBrowserSignals_modelingSignals(const ReportWinBrowserSignals *self) {
    return em_Val_as(unsigned short, em_Val_get(ReportingBrowserSignals_as_val(self->inner), em_Val_from("modelingSignals")));
}


void ReportWinBrowserSignals_set_modelingSignals(ReportWinBrowserSignals* self, unsigned short value) {
    em_Val_set(ReportingBrowserSignals_as_val(self->inner), em_Val_from("modelingSignals"), em_Val_from(value));
}


unsigned long ReportWinBrowserSignals_dataVersion(const ReportWinBrowserSignals *self) {
    return em_Val_as(unsigned long, em_Val_get(ReportingBrowserSignals_as_val(self->inner), em_Val_from("dataVersion")));
}


void ReportWinBrowserSignals_set_dataVersion(ReportWinBrowserSignals* self, unsigned long value) {
    em_Val_set(ReportingBrowserSignals_as_val(self->inner), em_Val_from("dataVersion"), em_Val_from(value));
}


KAnonStatus ReportWinBrowserSignals_kAnonStatus(const ReportWinBrowserSignals *self) {
    return em_Val_as(KAnonStatus, em_Val_get(ReportingBrowserSignals_as_val(self->inner), em_Val_from("kAnonStatus")));
}


void ReportWinBrowserSignals_set_kAnonStatus(ReportWinBrowserSignals* self, KAnonStatus * value) {
    em_Val_set(ReportingBrowserSignals_as_val(self->inner), em_Val_from("kAnonStatus"), em_Val_from(value));
}


ReportWinBrowserSignals ReportWinBrowserSignals_new() {
    em_Val obj = em_Val_object();
    return ReportWinBrowserSignals_from_val(&obj);
}

