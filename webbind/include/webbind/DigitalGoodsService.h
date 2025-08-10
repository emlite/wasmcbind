#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ItemDetails ItemDetails;
typedef struct PurchaseDetails PurchaseDetails;

DECLARE_EMLITE_TYPE(DigitalGoodsService, em_Val);

jb_Promise DigitalGoodsService_getDetails(DigitalGoodsService* self , jb_Array * itemIds);

jb_Promise DigitalGoodsService_listPurchases(DigitalGoodsService* self );

jb_Promise DigitalGoodsService_listPurchaseHistory(DigitalGoodsService* self );

jb_Promise DigitalGoodsService_consume(DigitalGoodsService* self , jb_String * purchaseToken);

#ifdef __cplusplus
}
#endif
