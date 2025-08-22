#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuctionAdInterestGroupSize */
DECLARE_EMLITE_TYPE(AuctionAdInterestGroupSize, em_Val);

/** @brief Getter of the width property */
jb_String AuctionAdInterestGroupSize_width(const AuctionAdInterestGroupSize *self);

/** @brief Setter of the width property */
void AuctionAdInterestGroupSize_set_width(AuctionAdInterestGroupSize* self, jb_String * value);

/** @brief Getter of the height property */
jb_String AuctionAdInterestGroupSize_height(const AuctionAdInterestGroupSize *self);

/** @brief Setter of the height property */
void AuctionAdInterestGroupSize_set_height(AuctionAdInterestGroupSize* self, jb_String * value);

/** @brief Constructor of the AuctionAdInterestGroupSize dictionary type */
AuctionAdInterestGroupSize AuctionAdInterestGroupSize_new();

#ifdef __cplusplus
}
#endif
