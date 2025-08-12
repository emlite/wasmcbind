#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AdAuctionOneSeller */
DECLARE_EMLITE_TYPE(AdAuctionOneSeller, em_Val);

/** @brief Getter of the seller property */
jb_String AdAuctionOneSeller_seller(const AdAuctionOneSeller *self);

/** @brief Setter of the seller property */
void AdAuctionOneSeller_set_seller(AdAuctionOneSeller* self, jb_String * value);

/** @brief Getter of the coordinatorOrigin property */
jb_String AdAuctionOneSeller_coordinatorOrigin(const AdAuctionOneSeller *self);

/** @brief Setter of the coordinatorOrigin property */
void AdAuctionOneSeller_set_coordinatorOrigin(AdAuctionOneSeller* self, jb_String * value);

/** @brief Constructor of the AdAuctionOneSeller dictionary type */
AdAuctionOneSeller AdAuctionOneSeller_new();

#ifdef __cplusplus
}
#endif
