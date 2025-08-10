#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuctionRealTimeReportingConfig, em_Val);

jb_String AuctionRealTimeReportingConfig_type(const AuctionRealTimeReportingConfig *self);

void AuctionRealTimeReportingConfig_set_type(AuctionRealTimeReportingConfig* self, jb_String * value);

AuctionRealTimeReportingConfig AuctionRealTimeReportingConfig_new();

#ifdef __cplusplus
}
#endif
