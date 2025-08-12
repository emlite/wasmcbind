#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AdAuctionOneSeller.h"
#include "AdAuctionDataBuyerConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AdAuctionDataConfig */
DECLARE_EMLITE_TYPE(AdAuctionDataConfig, em_Val);

/** @brief Getter of the seller property */
jb_String AdAuctionDataConfig_seller(const AdAuctionDataConfig *self);

/** @brief Setter of the seller property */
void AdAuctionDataConfig_set_seller(AdAuctionDataConfig* self, jb_String * value);

/** @brief Getter of the coordinatorOrigin property */
jb_String AdAuctionDataConfig_coordinatorOrigin(const AdAuctionDataConfig *self);

/** @brief Setter of the coordinatorOrigin property */
void AdAuctionDataConfig_set_coordinatorOrigin(AdAuctionDataConfig* self, jb_String * value);

/** @brief Getter of the sellers property */
jb_Array AdAuctionDataConfig_sellers(const AdAuctionDataConfig *self);

/** @brief Setter of the sellers property */
void AdAuctionDataConfig_set_sellers(AdAuctionDataConfig* self, jb_Array * value);

/** @brief Getter of the requestSize property */
unsigned long AdAuctionDataConfig_requestSize(const AdAuctionDataConfig *self);

/** @brief Setter of the requestSize property */
void AdAuctionDataConfig_set_requestSize(AdAuctionDataConfig* self, unsigned long value);

/** @brief Getter of the perBuyerConfig property */
jb_Object AdAuctionDataConfig_perBuyerConfig(const AdAuctionDataConfig *self);

/** @brief Setter of the perBuyerConfig property */
void AdAuctionDataConfig_set_perBuyerConfig(AdAuctionDataConfig* self, jb_Object * value);

/** @brief Constructor of the AdAuctionDataConfig dictionary type */
AdAuctionDataConfig AdAuctionDataConfig_new();

#ifdef __cplusplus
}
#endif
