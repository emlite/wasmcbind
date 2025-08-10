#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AdAuctionOneSeller, em_Val);

jb_String AdAuctionOneSeller_seller(const AdAuctionOneSeller *self);

void AdAuctionOneSeller_set_seller(AdAuctionOneSeller* self, jb_String * value);

jb_String AdAuctionOneSeller_coordinatorOrigin(const AdAuctionOneSeller *self);

void AdAuctionOneSeller_set_coordinatorOrigin(AdAuctionOneSeller* self, jb_String * value);

AdAuctionOneSeller AdAuctionOneSeller_new();

#ifdef __cplusplus
}
#endif
