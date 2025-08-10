#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuctionAd.h"
#include "AuctionAdInterestGroupSize.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GenerateBidInterestGroup, em_Val);

jb_String GenerateBidInterestGroup_owner(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_owner(GenerateBidInterestGroup* self, jb_String * value);

jb_String GenerateBidInterestGroup_name(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_name(GenerateBidInterestGroup* self, jb_String * value);

bool GenerateBidInterestGroup_enableBiddingSignalsPrioritization(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_enableBiddingSignalsPrioritization(GenerateBidInterestGroup* self, bool value);

jb_Object GenerateBidInterestGroup_priorityVector(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_priorityVector(GenerateBidInterestGroup* self, jb_Object * value);

jb_Object GenerateBidInterestGroup_sellerCapabilities(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_sellerCapabilities(GenerateBidInterestGroup* self, jb_Object * value);

jb_String GenerateBidInterestGroup_executionMode(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_executionMode(GenerateBidInterestGroup* self, jb_String * value);

jb_String GenerateBidInterestGroup_biddingLogicURL(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_biddingLogicURL(GenerateBidInterestGroup* self, jb_String * value);

jb_String GenerateBidInterestGroup_biddingWasmHelperURL(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_biddingWasmHelperURL(GenerateBidInterestGroup* self, jb_String * value);

jb_String GenerateBidInterestGroup_updateURL(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_updateURL(GenerateBidInterestGroup* self, jb_String * value);

jb_String GenerateBidInterestGroup_trustedBiddingSignalsURL(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_trustedBiddingSignalsURL(GenerateBidInterestGroup* self, jb_String * value);

jb_Array GenerateBidInterestGroup_trustedBiddingSignalsKeys(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_trustedBiddingSignalsKeys(GenerateBidInterestGroup* self, jb_Array * value);

jb_String GenerateBidInterestGroup_trustedBiddingSignalsSlotSizeMode(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_trustedBiddingSignalsSlotSizeMode(GenerateBidInterestGroup* self, jb_String * value);

long GenerateBidInterestGroup_maxTrustedBiddingSignalsURLLength(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_maxTrustedBiddingSignalsURLLength(GenerateBidInterestGroup* self, long value);

jb_String GenerateBidInterestGroup_trustedBiddingSignalsCoordinator(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_trustedBiddingSignalsCoordinator(GenerateBidInterestGroup* self, jb_String * value);

jb_Any GenerateBidInterestGroup_userBiddingSignals(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_userBiddingSignals(GenerateBidInterestGroup* self, jb_Any * value);

jb_Array GenerateBidInterestGroup_ads(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_ads(GenerateBidInterestGroup* self, jb_Array * value);

jb_Array GenerateBidInterestGroup_adComponents(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_adComponents(GenerateBidInterestGroup* self, jb_Array * value);

jb_Object GenerateBidInterestGroup_adSizes(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_adSizes(GenerateBidInterestGroup* self, jb_Object * value);

jb_Object GenerateBidInterestGroup_sizeGroups(const GenerateBidInterestGroup *self);

void GenerateBidInterestGroup_set_sizeGroups(GenerateBidInterestGroup* self, jb_Object * value);

GenerateBidInterestGroup GenerateBidInterestGroup_new();

#ifdef __cplusplus
}
#endif
