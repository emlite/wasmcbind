#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AdAuctionPerSellerData */
DECLARE_EMLITE_TYPE(AdAuctionPerSellerData, em_Val);

/** @brief Getter of the seller property */
jb_String AdAuctionPerSellerData_seller(const AdAuctionPerSellerData *self);

/** @brief Setter of the seller property */
void AdAuctionPerSellerData_set_seller(AdAuctionPerSellerData* self, jb_String * value);

/** @brief Getter of the request property */
jb_Uint8Array AdAuctionPerSellerData_request(const AdAuctionPerSellerData *self);

/** @brief Setter of the request property */
void AdAuctionPerSellerData_set_request(AdAuctionPerSellerData* self, jb_Uint8Array * value);

/** @brief Getter of the error property */
jb_String AdAuctionPerSellerData_error(const AdAuctionPerSellerData *self);

/** @brief Setter of the error property */
void AdAuctionPerSellerData_set_error(AdAuctionPerSellerData* self, jb_String * value);

/** @brief Constructor of the AdAuctionPerSellerData dictionary type */
AdAuctionPerSellerData AdAuctionPerSellerData_new();

#ifdef __cplusplus
}
#endif
