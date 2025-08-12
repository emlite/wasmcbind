#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuctionReportBuyersConfig */
DECLARE_EMLITE_TYPE(AuctionReportBuyersConfig, em_Val);

/** @brief Getter of the bucket property */
long long AuctionReportBuyersConfig_bucket(const AuctionReportBuyersConfig *self);

/** @brief Setter of the bucket property */
void AuctionReportBuyersConfig_set_bucket(AuctionReportBuyersConfig* self, long long value);

/** @brief Getter of the scale property */
double AuctionReportBuyersConfig_scale(const AuctionReportBuyersConfig *self);

/** @brief Setter of the scale property */
void AuctionReportBuyersConfig_set_scale(AuctionReportBuyersConfig* self, double value);

/** @brief Constructor of the AuctionReportBuyersConfig dictionary type */
AuctionReportBuyersConfig AuctionReportBuyersConfig_new();

#ifdef __cplusplus
}
#endif
