#include <webbind/AuctionRealTimeReportingConfig.h>

DEFINE_EMLITE_TYPE(AuctionRealTimeReportingConfig, em_Val);


jb_String AuctionRealTimeReportingConfig_type(const AuctionRealTimeReportingConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void AuctionRealTimeReportingConfig_set_type(AuctionRealTimeReportingConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


AuctionRealTimeReportingConfig AuctionRealTimeReportingConfig_new() {
    em_Val obj = em_Val_object();
    return AuctionRealTimeReportingConfig_from_val(&obj);
}

