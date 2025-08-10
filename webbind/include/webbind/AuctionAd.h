#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuctionAd, em_Val);

jb_String AuctionAd_renderURL(const AuctionAd *self);

void AuctionAd_set_renderURL(AuctionAd* self, jb_String * value);

jb_String AuctionAd_sizeGroup(const AuctionAd *self);

void AuctionAd_set_sizeGroup(AuctionAd* self, jb_String * value);

jb_Any AuctionAd_metadata(const AuctionAd *self);

void AuctionAd_set_metadata(AuctionAd* self, jb_Any * value);

jb_String AuctionAd_buyerReportingId(const AuctionAd *self);

void AuctionAd_set_buyerReportingId(AuctionAd* self, jb_String * value);

jb_String AuctionAd_buyerAndSellerReportingId(const AuctionAd *self);

void AuctionAd_set_buyerAndSellerReportingId(AuctionAd* self, jb_String * value);

jb_Array AuctionAd_selectableBuyerAndSellerReportingIds(const AuctionAd *self);

void AuctionAd_set_selectableBuyerAndSellerReportingIds(AuctionAd* self, jb_Array * value);

jb_Array AuctionAd_allowedReportingOrigins(const AuctionAd *self);

void AuctionAd_set_allowedReportingOrigins(AuctionAd* self, jb_Array * value);

jb_String AuctionAd_adRenderId(const AuctionAd *self);

void AuctionAd_set_adRenderId(AuctionAd* self, jb_String * value);

jb_String AuctionAd_creativeScanningMetadata(const AuctionAd *self);

void AuctionAd_set_creativeScanningMetadata(AuctionAd* self, jb_String * value);

AuctionAd AuctionAd_new();

#ifdef __cplusplus
}
#endif
