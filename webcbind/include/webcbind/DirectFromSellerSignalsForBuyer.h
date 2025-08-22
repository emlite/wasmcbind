#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DirectFromSellerSignalsForBuyer */
DECLARE_EMLITE_TYPE(DirectFromSellerSignalsForBuyer, em_Val);

/** @brief Getter of the auctionSignals property */
jb_Any DirectFromSellerSignalsForBuyer_auctionSignals(const DirectFromSellerSignalsForBuyer *self);

/** @brief Setter of the auctionSignals property */
void DirectFromSellerSignalsForBuyer_set_auctionSignals(DirectFromSellerSignalsForBuyer* self, jb_Any * value);

/** @brief Getter of the perBuyerSignals property */
jb_Any DirectFromSellerSignalsForBuyer_perBuyerSignals(const DirectFromSellerSignalsForBuyer *self);

/** @brief Setter of the perBuyerSignals property */
void DirectFromSellerSignalsForBuyer_set_perBuyerSignals(DirectFromSellerSignalsForBuyer* self, jb_Any * value);

/** @brief Constructor of the DirectFromSellerSignalsForBuyer dictionary type */
DirectFromSellerSignalsForBuyer DirectFromSellerSignalsForBuyer_new();

#ifdef __cplusplus
}
#endif
