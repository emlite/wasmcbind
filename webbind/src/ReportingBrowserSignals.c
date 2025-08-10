#include <webbind/ReportingBrowserSignals.h>

DEFINE_EMLITE_TYPE(ReportingBrowserSignals, em_Val);


jb_String ReportingBrowserSignals_topWindowHostname(const ReportingBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("topWindowHostname")));
}


void ReportingBrowserSignals_set_topWindowHostname(ReportingBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("topWindowHostname"), em_Val_from(value));
}


jb_String ReportingBrowserSignals_interestGroupOwner(const ReportingBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("interestGroupOwner")));
}


void ReportingBrowserSignals_set_interestGroupOwner(ReportingBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("interestGroupOwner"), em_Val_from(value));
}


jb_String ReportingBrowserSignals_renderURL(const ReportingBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("renderURL")));
}


void ReportingBrowserSignals_set_renderURL(ReportingBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("renderURL"), em_Val_from(value));
}


double ReportingBrowserSignals_bid(const ReportingBrowserSignals *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bid")));
}


void ReportingBrowserSignals_set_bid(ReportingBrowserSignals* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bid"), em_Val_from(value));
}


double ReportingBrowserSignals_highestScoringOtherBid(const ReportingBrowserSignals *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("highestScoringOtherBid")));
}


void ReportingBrowserSignals_set_highestScoringOtherBid(ReportingBrowserSignals* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("highestScoringOtherBid"), em_Val_from(value));
}


jb_String ReportingBrowserSignals_bidCurrency(const ReportingBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bidCurrency")));
}


void ReportingBrowserSignals_set_bidCurrency(ReportingBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bidCurrency"), em_Val_from(value));
}


jb_String ReportingBrowserSignals_highestScoringOtherBidCurrency(const ReportingBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("highestScoringOtherBidCurrency")));
}


void ReportingBrowserSignals_set_highestScoringOtherBidCurrency(ReportingBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("highestScoringOtherBidCurrency"), em_Val_from(value));
}


jb_String ReportingBrowserSignals_topLevelSeller(const ReportingBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("topLevelSeller")));
}


void ReportingBrowserSignals_set_topLevelSeller(ReportingBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("topLevelSeller"), em_Val_from(value));
}


jb_String ReportingBrowserSignals_componentSeller(const ReportingBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("componentSeller")));
}


void ReportingBrowserSignals_set_componentSeller(ReportingBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("componentSeller"), em_Val_from(value));
}


jb_String ReportingBrowserSignals_buyerAndSellerReportingId(const ReportingBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("buyerAndSellerReportingId")));
}


void ReportingBrowserSignals_set_buyerAndSellerReportingId(ReportingBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("buyerAndSellerReportingId"), em_Val_from(value));
}


jb_String ReportingBrowserSignals_selectedBuyerAndSellerReportingId(const ReportingBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("selectedBuyerAndSellerReportingId")));
}


void ReportingBrowserSignals_set_selectedBuyerAndSellerReportingId(ReportingBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("selectedBuyerAndSellerReportingId"), em_Val_from(value));
}


ReportingBrowserSignals ReportingBrowserSignals_new() {
    em_Val obj = em_Val_object();
    return ReportingBrowserSignals_from_val(&obj);
}

