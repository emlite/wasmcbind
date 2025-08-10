#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AdAuctionPerSellerData.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AdAuctionData, em_Val);

jb_String AdAuctionData_requestId(const AdAuctionData *self);

void AdAuctionData_set_requestId(AdAuctionData* self, jb_String * value);

jb_Uint8Array AdAuctionData_request(const AdAuctionData *self);

void AdAuctionData_set_request(AdAuctionData* self, jb_Uint8Array * value);

jb_Array AdAuctionData_requests(const AdAuctionData *self);

void AdAuctionData_set_requests(AdAuctionData* self, jb_Array * value);

AdAuctionData AdAuctionData_new();

#ifdef __cplusplus
}
#endif
