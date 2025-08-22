#include <webcbind/ScoreAdOutput.h>

DEFINE_EMLITE_TYPE(ScoreAdOutput, em_Val);


double ScoreAdOutput_desirability(const ScoreAdOutput *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("desirability")));
}


void ScoreAdOutput_set_desirability(ScoreAdOutput* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("desirability"), em_Val_from(value));
}


double ScoreAdOutput_bid(const ScoreAdOutput *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bid")));
}


void ScoreAdOutput_set_bid(ScoreAdOutput* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bid"), em_Val_from(value));
}


jb_String ScoreAdOutput_bidCurrency(const ScoreAdOutput *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bidCurrency")));
}


void ScoreAdOutput_set_bidCurrency(ScoreAdOutput* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bidCurrency"), em_Val_from(value));
}


double ScoreAdOutput_incomingBidInSellerCurrency(const ScoreAdOutput *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("incomingBidInSellerCurrency")));
}


void ScoreAdOutput_set_incomingBidInSellerCurrency(ScoreAdOutput* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("incomingBidInSellerCurrency"), em_Val_from(value));
}


bool ScoreAdOutput_allowComponentAuction(const ScoreAdOutput *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowComponentAuction")));
}


void ScoreAdOutput_set_allowComponentAuction(ScoreAdOutput* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowComponentAuction"), em_Val_from(value));
}


ScoreAdOutput ScoreAdOutput_new() {
    em_Val obj = em_Val_object();
    return ScoreAdOutput_from_val(&obj);
}

