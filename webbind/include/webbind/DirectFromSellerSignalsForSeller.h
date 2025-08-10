#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DirectFromSellerSignalsForSeller, em_Val);

jb_Any DirectFromSellerSignalsForSeller_auctionSignals(const DirectFromSellerSignalsForSeller *self);

void DirectFromSellerSignalsForSeller_set_auctionSignals(DirectFromSellerSignalsForSeller* self, jb_Any * value);

jb_Any DirectFromSellerSignalsForSeller_sellerSignals(const DirectFromSellerSignalsForSeller *self);

void DirectFromSellerSignalsForSeller_set_sellerSignals(DirectFromSellerSignalsForSeller* self, jb_Any * value);

DirectFromSellerSignalsForSeller DirectFromSellerSignalsForSeller_new();

#ifdef __cplusplus
}
#endif
