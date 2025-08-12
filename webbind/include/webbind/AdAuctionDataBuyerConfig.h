#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AdAuctionDataBuyerConfig */
DECLARE_EMLITE_TYPE(AdAuctionDataBuyerConfig, em_Val);

/** @brief Getter of the targetSize property */
unsigned long AdAuctionDataBuyerConfig_targetSize(const AdAuctionDataBuyerConfig *self);

/** @brief Setter of the targetSize property */
void AdAuctionDataBuyerConfig_set_targetSize(AdAuctionDataBuyerConfig* self, unsigned long value);

/** @brief Constructor of the AdAuctionDataBuyerConfig dictionary type */
AdAuctionDataBuyerConfig AdAuctionDataBuyerConfig_new();

#ifdef __cplusplus
}
#endif
