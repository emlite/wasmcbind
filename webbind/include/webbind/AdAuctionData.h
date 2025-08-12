#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AdAuctionPerSellerData.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AdAuctionData */
DECLARE_EMLITE_TYPE(AdAuctionData, em_Val);

/** @brief Getter of the requestId property */
jb_String AdAuctionData_requestId(const AdAuctionData *self);

/** @brief Setter of the requestId property */
void AdAuctionData_set_requestId(AdAuctionData* self, jb_String * value);

/** @brief Getter of the request property */
jb_Uint8Array AdAuctionData_request(const AdAuctionData *self);

/** @brief Setter of the request property */
void AdAuctionData_set_request(AdAuctionData* self, jb_Uint8Array * value);

/** @brief Getter of the requests property */
jb_Array AdAuctionData_requests(const AdAuctionData *self);

/** @brief Setter of the requests property */
void AdAuctionData_set_requests(AdAuctionData* self, jb_Array * value);

/** @brief Constructor of the AdAuctionData dictionary type */
AdAuctionData AdAuctionData_new();

#ifdef __cplusplus
}
#endif
