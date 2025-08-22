#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuctionReportBuyerDebugModeConfig */
DECLARE_EMLITE_TYPE(AuctionReportBuyerDebugModeConfig, em_Val);

/** @brief Getter of the enabled property */
bool AuctionReportBuyerDebugModeConfig_enabled(const AuctionReportBuyerDebugModeConfig *self);

/** @brief Setter of the enabled property */
void AuctionReportBuyerDebugModeConfig_set_enabled(AuctionReportBuyerDebugModeConfig* self, bool value);

/** @brief Getter of the debugKey property */
long long AuctionReportBuyerDebugModeConfig_debugKey(const AuctionReportBuyerDebugModeConfig *self);

/** @brief Setter of the debugKey property */
void AuctionReportBuyerDebugModeConfig_set_debugKey(AuctionReportBuyerDebugModeConfig* self, long long value);

/** @brief Constructor of the AuctionReportBuyerDebugModeConfig dictionary type */
AuctionReportBuyerDebugModeConfig AuctionReportBuyerDebugModeConfig_new();

#ifdef __cplusplus
}
#endif
