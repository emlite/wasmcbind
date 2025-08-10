#include <webbind/GenerateBidOutput.h>

DEFINE_EMLITE_TYPE(GenerateBidOutput, em_Val);


double GenerateBidOutput_bid(const GenerateBidOutput *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bid")));
}


void GenerateBidOutput_set_bid(GenerateBidOutput* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bid"), em_Val_from(value));
}


jb_String GenerateBidOutput_bidCurrency(const GenerateBidOutput *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bidCurrency")));
}


void GenerateBidOutput_set_bidCurrency(GenerateBidOutput* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bidCurrency"), em_Val_from(value));
}


jb_Any GenerateBidOutput_render(const GenerateBidOutput *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("render")));
}


void GenerateBidOutput_set_render(GenerateBidOutput* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("render"), em_Val_from(value));
}


jb_Any GenerateBidOutput_ad(const GenerateBidOutput *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ad")));
}


void GenerateBidOutput_set_ad(GenerateBidOutput* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ad"), em_Val_from(value));
}


jb_String GenerateBidOutput_selectedBuyerAndSellerReportingId(const GenerateBidOutput *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("selectedBuyerAndSellerReportingId")));
}


void GenerateBidOutput_set_selectedBuyerAndSellerReportingId(GenerateBidOutput* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("selectedBuyerAndSellerReportingId"), em_Val_from(value));
}


jb_Array GenerateBidOutput_adComponents(const GenerateBidOutput *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("adComponents")));
}


void GenerateBidOutput_set_adComponents(GenerateBidOutput* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("adComponents"), em_Val_from(value));
}


double GenerateBidOutput_adCost(const GenerateBidOutput *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("adCost")));
}


void GenerateBidOutput_set_adCost(GenerateBidOutput* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("adCost"), em_Val_from(value));
}


double GenerateBidOutput_modelingSignals(const GenerateBidOutput *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("modelingSignals")));
}


void GenerateBidOutput_set_modelingSignals(GenerateBidOutput* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("modelingSignals"), em_Val_from(value));
}


bool GenerateBidOutput_allowComponentAuction(const GenerateBidOutput *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowComponentAuction")));
}


void GenerateBidOutput_set_allowComponentAuction(GenerateBidOutput* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowComponentAuction"), em_Val_from(value));
}


unsigned long GenerateBidOutput_targetNumAdComponents(const GenerateBidOutput *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("targetNumAdComponents")));
}


void GenerateBidOutput_set_targetNumAdComponents(GenerateBidOutput* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("targetNumAdComponents"), em_Val_from(value));
}


unsigned long GenerateBidOutput_numMandatoryAdComponents(const GenerateBidOutput *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numMandatoryAdComponents")));
}


void GenerateBidOutput_set_numMandatoryAdComponents(GenerateBidOutput* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("numMandatoryAdComponents"), em_Val_from(value));
}


GenerateBidOutput GenerateBidOutput_new() {
    em_Val obj = em_Val_object();
    return GenerateBidOutput_from_val(&obj);
}

