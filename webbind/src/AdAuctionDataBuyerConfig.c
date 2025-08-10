#include <webbind/AdAuctionDataBuyerConfig.h>

DEFINE_EMLITE_TYPE(AdAuctionDataBuyerConfig, em_Val);


unsigned long AdAuctionDataBuyerConfig_targetSize(const AdAuctionDataBuyerConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("targetSize")));
}


void AdAuctionDataBuyerConfig_set_targetSize(AdAuctionDataBuyerConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("targetSize"), em_Val_from(value));
}


AdAuctionDataBuyerConfig AdAuctionDataBuyerConfig_new() {
    em_Val obj = em_Val_object();
    return AdAuctionDataBuyerConfig_from_val(&obj);
}

