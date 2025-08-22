#include <webcbind/AuctionReportBuyersConfig.h>

DEFINE_EMLITE_TYPE(AuctionReportBuyersConfig, em_Val);


long long AuctionReportBuyersConfig_bucket(const AuctionReportBuyersConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bucket")));
}


void AuctionReportBuyersConfig_set_bucket(AuctionReportBuyersConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bucket"), em_Val_from(value));
}


double AuctionReportBuyersConfig_scale(const AuctionReportBuyersConfig *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scale")));
}


void AuctionReportBuyersConfig_set_scale(AuctionReportBuyersConfig* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scale"), em_Val_from(value));
}


AuctionReportBuyersConfig AuctionReportBuyersConfig_new() {
    em_Val obj = em_Val_object();
    return AuctionReportBuyersConfig_from_val(&obj);
}

