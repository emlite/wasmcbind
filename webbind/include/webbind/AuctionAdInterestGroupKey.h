#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuctionAdInterestGroupKey */
DECLARE_EMLITE_TYPE(AuctionAdInterestGroupKey, em_Val);

/** @brief Getter of the owner property */
jb_String AuctionAdInterestGroupKey_owner(const AuctionAdInterestGroupKey *self);

/** @brief Setter of the owner property */
void AuctionAdInterestGroupKey_set_owner(AuctionAdInterestGroupKey* self, jb_String * value);

/** @brief Getter of the name property */
jb_String AuctionAdInterestGroupKey_name(const AuctionAdInterestGroupKey *self);

/** @brief Setter of the name property */
void AuctionAdInterestGroupKey_set_name(AuctionAdInterestGroupKey* self, jb_String * value);

/** @brief Constructor of the AuctionAdInterestGroupKey dictionary type */
AuctionAdInterestGroupKey AuctionAdInterestGroupKey_new();

#ifdef __cplusplus
}
#endif
