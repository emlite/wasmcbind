#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AuctionAd.h"
#include "AuctionAdInterestGroupSize.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GenerateBidInterestGroup */
DECLARE_EMLITE_TYPE(GenerateBidInterestGroup, em_Val);

/** @brief Getter of the owner property */
jb_String GenerateBidInterestGroup_owner(const GenerateBidInterestGroup *self);

/** @brief Setter of the owner property */
void GenerateBidInterestGroup_set_owner(GenerateBidInterestGroup* self, jb_String * value);

/** @brief Getter of the name property */
jb_String GenerateBidInterestGroup_name(const GenerateBidInterestGroup *self);

/** @brief Setter of the name property */
void GenerateBidInterestGroup_set_name(GenerateBidInterestGroup* self, jb_String * value);

/** @brief Getter of the enableBiddingSignalsPrioritization property */
bool GenerateBidInterestGroup_enableBiddingSignalsPrioritization(const GenerateBidInterestGroup *self);

/** @brief Setter of the enableBiddingSignalsPrioritization property */
void GenerateBidInterestGroup_set_enableBiddingSignalsPrioritization(GenerateBidInterestGroup* self, bool value);

/** @brief Getter of the priorityVector property */
jb_Object GenerateBidInterestGroup_priorityVector(const GenerateBidInterestGroup *self);

/** @brief Setter of the priorityVector property */
void GenerateBidInterestGroup_set_priorityVector(GenerateBidInterestGroup* self, jb_Object * value);

/** @brief Getter of the sellerCapabilities property */
jb_Object GenerateBidInterestGroup_sellerCapabilities(const GenerateBidInterestGroup *self);

/** @brief Setter of the sellerCapabilities property */
void GenerateBidInterestGroup_set_sellerCapabilities(GenerateBidInterestGroup* self, jb_Object * value);

/** @brief Getter of the executionMode property */
jb_String GenerateBidInterestGroup_executionMode(const GenerateBidInterestGroup *self);

/** @brief Setter of the executionMode property */
void GenerateBidInterestGroup_set_executionMode(GenerateBidInterestGroup* self, jb_String * value);

/** @brief Getter of the biddingLogicURL property */
jb_String GenerateBidInterestGroup_biddingLogicURL(const GenerateBidInterestGroup *self);

/** @brief Setter of the biddingLogicURL property */
void GenerateBidInterestGroup_set_biddingLogicURL(GenerateBidInterestGroup* self, jb_String * value);

/** @brief Getter of the biddingWasmHelperURL property */
jb_String GenerateBidInterestGroup_biddingWasmHelperURL(const GenerateBidInterestGroup *self);

/** @brief Setter of the biddingWasmHelperURL property */
void GenerateBidInterestGroup_set_biddingWasmHelperURL(GenerateBidInterestGroup* self, jb_String * value);

/** @brief Getter of the updateURL property */
jb_String GenerateBidInterestGroup_updateURL(const GenerateBidInterestGroup *self);

/** @brief Setter of the updateURL property */
void GenerateBidInterestGroup_set_updateURL(GenerateBidInterestGroup* self, jb_String * value);

/** @brief Getter of the trustedBiddingSignalsURL property */
jb_String GenerateBidInterestGroup_trustedBiddingSignalsURL(const GenerateBidInterestGroup *self);

/** @brief Setter of the trustedBiddingSignalsURL property */
void GenerateBidInterestGroup_set_trustedBiddingSignalsURL(GenerateBidInterestGroup* self, jb_String * value);

/** @brief Getter of the trustedBiddingSignalsKeys property */
jb_Array GenerateBidInterestGroup_trustedBiddingSignalsKeys(const GenerateBidInterestGroup *self);

/** @brief Setter of the trustedBiddingSignalsKeys property */
void GenerateBidInterestGroup_set_trustedBiddingSignalsKeys(GenerateBidInterestGroup* self, jb_Array * value);

/** @brief Getter of the trustedBiddingSignalsSlotSizeMode property */
jb_String GenerateBidInterestGroup_trustedBiddingSignalsSlotSizeMode(const GenerateBidInterestGroup *self);

/** @brief Setter of the trustedBiddingSignalsSlotSizeMode property */
void GenerateBidInterestGroup_set_trustedBiddingSignalsSlotSizeMode(GenerateBidInterestGroup* self, jb_String * value);

/** @brief Getter of the maxTrustedBiddingSignalsURLLength property */
long GenerateBidInterestGroup_maxTrustedBiddingSignalsURLLength(const GenerateBidInterestGroup *self);

/** @brief Setter of the maxTrustedBiddingSignalsURLLength property */
void GenerateBidInterestGroup_set_maxTrustedBiddingSignalsURLLength(GenerateBidInterestGroup* self, long value);

/** @brief Getter of the trustedBiddingSignalsCoordinator property */
jb_String GenerateBidInterestGroup_trustedBiddingSignalsCoordinator(const GenerateBidInterestGroup *self);

/** @brief Setter of the trustedBiddingSignalsCoordinator property */
void GenerateBidInterestGroup_set_trustedBiddingSignalsCoordinator(GenerateBidInterestGroup* self, jb_String * value);

/** @brief Getter of the userBiddingSignals property */
jb_Any GenerateBidInterestGroup_userBiddingSignals(const GenerateBidInterestGroup *self);

/** @brief Setter of the userBiddingSignals property */
void GenerateBidInterestGroup_set_userBiddingSignals(GenerateBidInterestGroup* self, jb_Any * value);

/** @brief Getter of the ads property */
jb_Array GenerateBidInterestGroup_ads(const GenerateBidInterestGroup *self);

/** @brief Setter of the ads property */
void GenerateBidInterestGroup_set_ads(GenerateBidInterestGroup* self, jb_Array * value);

/** @brief Getter of the adComponents property */
jb_Array GenerateBidInterestGroup_adComponents(const GenerateBidInterestGroup *self);

/** @brief Setter of the adComponents property */
void GenerateBidInterestGroup_set_adComponents(GenerateBidInterestGroup* self, jb_Array * value);

/** @brief Getter of the adSizes property */
jb_Object GenerateBidInterestGroup_adSizes(const GenerateBidInterestGroup *self);

/** @brief Setter of the adSizes property */
void GenerateBidInterestGroup_set_adSizes(GenerateBidInterestGroup* self, jb_Object * value);

/** @brief Getter of the sizeGroups property */
jb_Object GenerateBidInterestGroup_sizeGroups(const GenerateBidInterestGroup *self);

/** @brief Setter of the sizeGroups property */
void GenerateBidInterestGroup_set_sizeGroups(GenerateBidInterestGroup* self, jb_Object * value);

/** @brief Constructor of the GenerateBidInterestGroup dictionary type */
GenerateBidInterestGroup GenerateBidInterestGroup_new();

#ifdef __cplusplus
}
#endif
