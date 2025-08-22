#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GenerateBidInterestGroup.h"
#include "ProtectedAudiencePrivateAggregationConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuctionAdInterestGroup */
DECLARE_EMLITE_TYPE(AuctionAdInterestGroup, GenerateBidInterestGroup);

/** @brief Getter of the priority property */
double AuctionAdInterestGroup_priority(const AuctionAdInterestGroup *self);

/** @brief Setter of the priority property */
void AuctionAdInterestGroup_set_priority(AuctionAdInterestGroup* self, double value);

/** @brief Getter of the prioritySignalsOverrides property */
jb_Object AuctionAdInterestGroup_prioritySignalsOverrides(const AuctionAdInterestGroup *self);

/** @brief Setter of the prioritySignalsOverrides property */
void AuctionAdInterestGroup_set_prioritySignalsOverrides(AuctionAdInterestGroup* self, jb_Object * value);

/** @brief Getter of the lifetimeMs property */
double AuctionAdInterestGroup_lifetimeMs(const AuctionAdInterestGroup *self);

/** @brief Setter of the lifetimeMs property */
void AuctionAdInterestGroup_set_lifetimeMs(AuctionAdInterestGroup* self, double value);

/** @brief Getter of the additionalBidKey property */
jb_String AuctionAdInterestGroup_additionalBidKey(const AuctionAdInterestGroup *self);

/** @brief Setter of the additionalBidKey property */
void AuctionAdInterestGroup_set_additionalBidKey(AuctionAdInterestGroup* self, jb_String * value);

/** @brief Getter of the privateAggregationConfig property */
ProtectedAudiencePrivateAggregationConfig AuctionAdInterestGroup_privateAggregationConfig(const AuctionAdInterestGroup *self);

/** @brief Setter of the privateAggregationConfig property */
void AuctionAdInterestGroup_set_privateAggregationConfig(AuctionAdInterestGroup* self, ProtectedAudiencePrivateAggregationConfig * value);

/** @brief Constructor of the AuctionAdInterestGroup dictionary type */
AuctionAdInterestGroup AuctionAdInterestGroup_new();

#ifdef __cplusplus
}
#endif
