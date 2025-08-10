#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuctionAdInterestGroupSize, em_Val);

jb_String AuctionAdInterestGroupSize_width(const AuctionAdInterestGroupSize *self);

void AuctionAdInterestGroupSize_set_width(AuctionAdInterestGroupSize* self, jb_String * value);

jb_String AuctionAdInterestGroupSize_height(const AuctionAdInterestGroupSize *self);

void AuctionAdInterestGroupSize_set_height(AuctionAdInterestGroupSize* self, jb_String * value);

AuctionAdInterestGroupSize AuctionAdInterestGroupSize_new();

#ifdef __cplusplus
}
#endif
