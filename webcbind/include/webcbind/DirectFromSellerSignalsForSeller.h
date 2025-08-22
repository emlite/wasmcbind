#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DirectFromSellerSignalsForSeller */
DECLARE_EMLITE_TYPE(DirectFromSellerSignalsForSeller, em_Val);

/** @brief Getter of the auctionSignals property */
jb_Any DirectFromSellerSignalsForSeller_auctionSignals(const DirectFromSellerSignalsForSeller *self);

/** @brief Setter of the auctionSignals property */
void DirectFromSellerSignalsForSeller_set_auctionSignals(DirectFromSellerSignalsForSeller* self, jb_Any * value);

/** @brief Getter of the sellerSignals property */
jb_Any DirectFromSellerSignalsForSeller_sellerSignals(const DirectFromSellerSignalsForSeller *self);

/** @brief Setter of the sellerSignals property */
void DirectFromSellerSignalsForSeller_set_sellerSignals(DirectFromSellerSignalsForSeller* self, jb_Any * value);

/** @brief Constructor of the DirectFromSellerSignalsForSeller dictionary type */
DirectFromSellerSignalsForSeller DirectFromSellerSignalsForSeller_new();

#ifdef __cplusplus
}
#endif
