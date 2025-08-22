#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuctionRealTimeReportingConfig */
DECLARE_EMLITE_TYPE(AuctionRealTimeReportingConfig, em_Val);

/** @brief Getter of the type property */
jb_String AuctionRealTimeReportingConfig_type(const AuctionRealTimeReportingConfig *self);

/** @brief Setter of the type property */
void AuctionRealTimeReportingConfig_set_type(AuctionRealTimeReportingConfig* self, jb_String * value);

/** @brief Constructor of the AuctionRealTimeReportingConfig dictionary type */
AuctionRealTimeReportingConfig AuctionRealTimeReportingConfig_new();

#ifdef __cplusplus
}
#endif
