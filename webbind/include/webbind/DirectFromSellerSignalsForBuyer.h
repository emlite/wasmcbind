#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DirectFromSellerSignalsForBuyer, em_Val);

jb_Any DirectFromSellerSignalsForBuyer_auctionSignals(const DirectFromSellerSignalsForBuyer *self);

void DirectFromSellerSignalsForBuyer_set_auctionSignals(DirectFromSellerSignalsForBuyer* self, jb_Any * value);

jb_Any DirectFromSellerSignalsForBuyer_perBuyerSignals(const DirectFromSellerSignalsForBuyer *self);

void DirectFromSellerSignalsForBuyer_set_perBuyerSignals(DirectFromSellerSignalsForBuyer* self, jb_Any * value);

DirectFromSellerSignalsForBuyer DirectFromSellerSignalsForBuyer_new();

#ifdef __cplusplus
}
#endif
