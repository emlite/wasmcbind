#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HIDCollectionInfo HIDCollectionInfo;


/**
 * @brief Interface HIDDevice
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice)
 */
DECLARE_EMLITE_TYPE(HIDDevice, EventTarget);

/**
 * @brief Gets the `oninputreport` property. 
*/
jb_Any HIDDevice_oninputreport(const HIDDevice *self);

/**
 * @brief Sets the `oninputreport` property. 
*/
void HIDDevice_set_oninputreport(HIDDevice* self, jb_Any * value);

/**
 * @brief Gets the `opened` property. 
*/
bool HIDDevice_opened(const HIDDevice *self);

/**
 * @brief Gets the `vendorId` property. 
*/
unsigned short HIDDevice_vendorId(const HIDDevice *self);

/**
 * @brief Gets the `productId` property. 
*/
unsigned short HIDDevice_productId(const HIDDevice *self);

/**
 * @brief Gets the `productName` property. 
*/
jb_String HIDDevice_productName(const HIDDevice *self);

/**
 * @brief Gets the `collections` property. 
*/
jb_Array HIDDevice_collections(const HIDDevice *self);

/**
 * @brief Calls the `open` method. 
*/
jb_Promise HIDDevice_open(HIDDevice* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Promise HIDDevice_close(HIDDevice* self );

/**
 * @brief Calls the `forget` method. 
*/
jb_Promise HIDDevice_forget(HIDDevice* self );

/**
 * @brief Calls the `sendReport` method. 
*/
jb_Promise HIDDevice_sendReport(HIDDevice* self , unsigned char reportId, jb_Any * data);

/**
 * @brief Calls the `sendFeatureReport` method. 
*/
jb_Promise HIDDevice_sendFeatureReport(HIDDevice* self , unsigned char reportId, jb_Any * data);

/**
 * @brief Calls the `receiveFeatureReport` method. 
*/
jb_Promise HIDDevice_receiveFeatureReport(HIDDevice* self , unsigned char reportId);

#ifdef __cplusplus
}
#endif
