#include <webcbind/AuctionReportBuyerDebugModeConfig.h>

DEFINE_EMLITE_TYPE(AuctionReportBuyerDebugModeConfig, em_Val);


bool AuctionReportBuyerDebugModeConfig_enabled(const AuctionReportBuyerDebugModeConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("enabled")));
}


void AuctionReportBuyerDebugModeConfig_set_enabled(AuctionReportBuyerDebugModeConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("enabled"), em_Val_from(value));
}


long long AuctionReportBuyerDebugModeConfig_debugKey(const AuctionReportBuyerDebugModeConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("debugKey")));
}


void AuctionReportBuyerDebugModeConfig_set_debugKey(AuctionReportBuyerDebugModeConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("debugKey"), em_Val_from(value));
}


AuctionReportBuyerDebugModeConfig AuctionReportBuyerDebugModeConfig_new() {
    em_Val obj = em_Val_object();
    return AuctionReportBuyerDebugModeConfig_from_val(&obj);
}

