#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuctionAd */
DECLARE_EMLITE_TYPE(AuctionAd, em_Val);

/** @brief Getter of the renderURL property */
jb_String AuctionAd_renderURL(const AuctionAd *self);

/** @brief Setter of the renderURL property */
void AuctionAd_set_renderURL(AuctionAd* self, jb_String * value);

/** @brief Getter of the sizeGroup property */
jb_String AuctionAd_sizeGroup(const AuctionAd *self);

/** @brief Setter of the sizeGroup property */
void AuctionAd_set_sizeGroup(AuctionAd* self, jb_String * value);

/** @brief Getter of the metadata property */
jb_Any AuctionAd_metadata(const AuctionAd *self);

/** @brief Setter of the metadata property */
void AuctionAd_set_metadata(AuctionAd* self, jb_Any * value);

/** @brief Getter of the buyerReportingId property */
jb_String AuctionAd_buyerReportingId(const AuctionAd *self);

/** @brief Setter of the buyerReportingId property */
void AuctionAd_set_buyerReportingId(AuctionAd* self, jb_String * value);

/** @brief Getter of the buyerAndSellerReportingId property */
jb_String AuctionAd_buyerAndSellerReportingId(const AuctionAd *self);

/** @brief Setter of the buyerAndSellerReportingId property */
void AuctionAd_set_buyerAndSellerReportingId(AuctionAd* self, jb_String * value);

/** @brief Getter of the selectableBuyerAndSellerReportingIds property */
jb_Array AuctionAd_selectableBuyerAndSellerReportingIds(const AuctionAd *self);

/** @brief Setter of the selectableBuyerAndSellerReportingIds property */
void AuctionAd_set_selectableBuyerAndSellerReportingIds(AuctionAd* self, jb_Array * value);

/** @brief Getter of the allowedReportingOrigins property */
jb_Array AuctionAd_allowedReportingOrigins(const AuctionAd *self);

/** @brief Setter of the allowedReportingOrigins property */
void AuctionAd_set_allowedReportingOrigins(AuctionAd* self, jb_Array * value);

/** @brief Getter of the adRenderId property */
jb_String AuctionAd_adRenderId(const AuctionAd *self);

/** @brief Setter of the adRenderId property */
void AuctionAd_set_adRenderId(AuctionAd* self, jb_String * value);

/** @brief Getter of the creativeScanningMetadata property */
jb_String AuctionAd_creativeScanningMetadata(const AuctionAd *self);

/** @brief Setter of the creativeScanningMetadata property */
void AuctionAd_set_creativeScanningMetadata(AuctionAd* self, jb_String * value);

/** @brief Constructor of the AuctionAd dictionary type */
AuctionAd AuctionAd_new();

#ifdef __cplusplus
}
#endif
