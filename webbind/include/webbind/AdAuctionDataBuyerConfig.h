#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AdAuctionDataBuyerConfig, em_Val);

unsigned long AdAuctionDataBuyerConfig_targetSize(const AdAuctionDataBuyerConfig *self);

void AdAuctionDataBuyerConfig_set_targetSize(AdAuctionDataBuyerConfig* self, unsigned long value);

AdAuctionDataBuyerConfig AdAuctionDataBuyerConfig_new();

#ifdef __cplusplus
}
#endif
