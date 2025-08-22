#include <webcbind/DigitalGoodsService.h>

#include <webcbind/ItemDetails.h>
#include <webcbind/PurchaseDetails.h>

DEFINE_EMLITE_TYPE(DigitalGoodsService, em_Val);


jb_Promise DigitalGoodsService_getDetails(DigitalGoodsService* self , jb_Array * itemIds) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getDetails", em_Val_from(itemIds)));
}


jb_Promise DigitalGoodsService_listPurchases(DigitalGoodsService* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "listPurchases"));
}


jb_Promise DigitalGoodsService_listPurchaseHistory(DigitalGoodsService* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "listPurchaseHistory"));
}


jb_Promise DigitalGoodsService_consume(DigitalGoodsService* self , jb_String * purchaseToken) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "consume", em_Val_from(purchaseToken)));
}

