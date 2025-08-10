#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuctionAdInterestGroupKey, em_Val);

jb_String AuctionAdInterestGroupKey_owner(const AuctionAdInterestGroupKey *self);

void AuctionAdInterestGroupKey_set_owner(AuctionAdInterestGroupKey* self, jb_String * value);

jb_String AuctionAdInterestGroupKey_name(const AuctionAdInterestGroupKey *self);

void AuctionAdInterestGroupKey_set_name(AuctionAdInterestGroupKey* self, jb_String * value);

AuctionAdInterestGroupKey AuctionAdInterestGroupKey_new();

#ifdef __cplusplus
}
#endif
