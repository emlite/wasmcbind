#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuctionReportBuyerDebugModeConfig, em_Val);

bool AuctionReportBuyerDebugModeConfig_enabled(const AuctionReportBuyerDebugModeConfig *self);

void AuctionReportBuyerDebugModeConfig_set_enabled(AuctionReportBuyerDebugModeConfig* self, bool value);

long long AuctionReportBuyerDebugModeConfig_debugKey(const AuctionReportBuyerDebugModeConfig *self);

void AuctionReportBuyerDebugModeConfig_set_debugKey(AuctionReportBuyerDebugModeConfig* self, long long value);

AuctionReportBuyerDebugModeConfig AuctionReportBuyerDebugModeConfig_new();

#ifdef __cplusplus
}
#endif
