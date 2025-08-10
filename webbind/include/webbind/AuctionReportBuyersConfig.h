#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuctionReportBuyersConfig, em_Val);

long long AuctionReportBuyersConfig_bucket(const AuctionReportBuyersConfig *self);

void AuctionReportBuyersConfig_set_bucket(AuctionReportBuyersConfig* self, long long value);

double AuctionReportBuyersConfig_scale(const AuctionReportBuyersConfig *self);

void AuctionReportBuyersConfig_set_scale(AuctionReportBuyersConfig* self, double value);

AuctionReportBuyersConfig AuctionReportBuyersConfig_new();

#ifdef __cplusplus
}
#endif
