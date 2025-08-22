#include <webcbind/AuctionAd.h>

DEFINE_EMLITE_TYPE(AuctionAd, em_Val);


jb_String AuctionAd_renderURL(const AuctionAd *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("renderURL")));
}


void AuctionAd_set_renderURL(AuctionAd* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("renderURL"), em_Val_from(value));
}


jb_String AuctionAd_sizeGroup(const AuctionAd *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sizeGroup")));
}


void AuctionAd_set_sizeGroup(AuctionAd* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sizeGroup"), em_Val_from(value));
}


jb_Any AuctionAd_metadata(const AuctionAd *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("metadata")));
}


void AuctionAd_set_metadata(AuctionAd* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("metadata"), em_Val_from(value));
}


jb_String AuctionAd_buyerReportingId(const AuctionAd *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("buyerReportingId")));
}


void AuctionAd_set_buyerReportingId(AuctionAd* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("buyerReportingId"), em_Val_from(value));
}


jb_String AuctionAd_buyerAndSellerReportingId(const AuctionAd *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("buyerAndSellerReportingId")));
}


void AuctionAd_set_buyerAndSellerReportingId(AuctionAd* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("buyerAndSellerReportingId"), em_Val_from(value));
}


jb_Array AuctionAd_selectableBuyerAndSellerReportingIds(const AuctionAd *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("selectableBuyerAndSellerReportingIds")));
}


void AuctionAd_set_selectableBuyerAndSellerReportingIds(AuctionAd* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("selectableBuyerAndSellerReportingIds"), em_Val_from(value));
}


jb_Array AuctionAd_allowedReportingOrigins(const AuctionAd *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowedReportingOrigins")));
}


void AuctionAd_set_allowedReportingOrigins(AuctionAd* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowedReportingOrigins"), em_Val_from(value));
}


jb_String AuctionAd_adRenderId(const AuctionAd *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("adRenderId")));
}


void AuctionAd_set_adRenderId(AuctionAd* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("adRenderId"), em_Val_from(value));
}


jb_String AuctionAd_creativeScanningMetadata(const AuctionAd *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("creativeScanningMetadata")));
}


void AuctionAd_set_creativeScanningMetadata(AuctionAd* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("creativeScanningMetadata"), em_Val_from(value));
}


AuctionAd AuctionAd_new() {
    em_Val obj = em_Val_object();
    return AuctionAd_from_val(&obj);
}

