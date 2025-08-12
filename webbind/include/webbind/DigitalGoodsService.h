#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ItemDetails ItemDetails;
typedef struct PurchaseDetails PurchaseDetails;


/**
 * @brief Interface DigitalGoodsService
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DigitalGoodsService)
 */
DECLARE_EMLITE_TYPE(DigitalGoodsService, em_Val);

/**
 * @brief Calls the `getDetails` method. 
*/
jb_Promise DigitalGoodsService_getDetails(DigitalGoodsService* self , jb_Array * itemIds);

/**
 * @brief Calls the `listPurchases` method. 
*/
jb_Promise DigitalGoodsService_listPurchases(DigitalGoodsService* self );

/**
 * @brief Calls the `listPurchaseHistory` method. 
*/
jb_Promise DigitalGoodsService_listPurchaseHistory(DigitalGoodsService* self );

/**
 * @brief Calls the `consume` method. 
*/
jb_Promise DigitalGoodsService_consume(DigitalGoodsService* self , jb_String * purchaseToken);

#ifdef __cplusplus
}
#endif
