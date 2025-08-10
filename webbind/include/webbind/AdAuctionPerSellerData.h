#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AdAuctionPerSellerData, em_Val);

jb_String AdAuctionPerSellerData_seller(const AdAuctionPerSellerData *self);

void AdAuctionPerSellerData_set_seller(AdAuctionPerSellerData* self, jb_String * value);

jb_Uint8Array AdAuctionPerSellerData_request(const AdAuctionPerSellerData *self);

void AdAuctionPerSellerData_set_request(AdAuctionPerSellerData* self, jb_Uint8Array * value);

jb_String AdAuctionPerSellerData_error(const AdAuctionPerSellerData *self);

void AdAuctionPerSellerData_set_error(AdAuctionPerSellerData* self, jb_String * value);

AdAuctionPerSellerData AdAuctionPerSellerData_new();

#ifdef __cplusplus
}
#endif
