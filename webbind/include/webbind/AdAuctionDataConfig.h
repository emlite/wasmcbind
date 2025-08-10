#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AdAuctionOneSeller.h"
#include "AdAuctionDataBuyerConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AdAuctionDataConfig, em_Val);

jb_String AdAuctionDataConfig_seller(const AdAuctionDataConfig *self);

void AdAuctionDataConfig_set_seller(AdAuctionDataConfig* self, jb_String * value);

jb_String AdAuctionDataConfig_coordinatorOrigin(const AdAuctionDataConfig *self);

void AdAuctionDataConfig_set_coordinatorOrigin(AdAuctionDataConfig* self, jb_String * value);

jb_Array AdAuctionDataConfig_sellers(const AdAuctionDataConfig *self);

void AdAuctionDataConfig_set_sellers(AdAuctionDataConfig* self, jb_Array * value);

unsigned long AdAuctionDataConfig_requestSize(const AdAuctionDataConfig *self);

void AdAuctionDataConfig_set_requestSize(AdAuctionDataConfig* self, unsigned long value);

jb_Object AdAuctionDataConfig_perBuyerConfig(const AdAuctionDataConfig *self);

void AdAuctionDataConfig_set_perBuyerConfig(AdAuctionDataConfig* self, jb_Object * value);

AdAuctionDataConfig AdAuctionDataConfig_new();

#ifdef __cplusplus
}
#endif
