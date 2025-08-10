#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GenerateBidInterestGroup.h"
#include "ProtectedAudiencePrivateAggregationConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuctionAdInterestGroup, GenerateBidInterestGroup);

double AuctionAdInterestGroup_priority(const AuctionAdInterestGroup *self);

void AuctionAdInterestGroup_set_priority(AuctionAdInterestGroup* self, double value);

jb_Object AuctionAdInterestGroup_prioritySignalsOverrides(const AuctionAdInterestGroup *self);

void AuctionAdInterestGroup_set_prioritySignalsOverrides(AuctionAdInterestGroup* self, jb_Object * value);

double AuctionAdInterestGroup_lifetimeMs(const AuctionAdInterestGroup *self);

void AuctionAdInterestGroup_set_lifetimeMs(AuctionAdInterestGroup* self, double value);

jb_String AuctionAdInterestGroup_additionalBidKey(const AuctionAdInterestGroup *self);

void AuctionAdInterestGroup_set_additionalBidKey(AuctionAdInterestGroup* self, jb_String * value);

ProtectedAudiencePrivateAggregationConfig AuctionAdInterestGroup_privateAggregationConfig(const AuctionAdInterestGroup *self);

void AuctionAdInterestGroup_set_privateAggregationConfig(AuctionAdInterestGroup* self, ProtectedAudiencePrivateAggregationConfig * value);

AuctionAdInterestGroup AuctionAdInterestGroup_new();

#ifdef __cplusplus
}
#endif
