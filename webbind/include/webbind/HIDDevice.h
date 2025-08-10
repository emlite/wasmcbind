#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HIDCollectionInfo HIDCollectionInfo;

DECLARE_EMLITE_TYPE(HIDDevice, EventTarget);

jb_Any HIDDevice_oninputreport(const HIDDevice *self);

void HIDDevice_set_oninputreport(HIDDevice* self, jb_Any * value);

bool HIDDevice_opened(const HIDDevice *self);

unsigned short HIDDevice_vendorId(const HIDDevice *self);

unsigned short HIDDevice_productId(const HIDDevice *self);

jb_String HIDDevice_productName(const HIDDevice *self);

jb_Array HIDDevice_collections(const HIDDevice *self);

jb_Promise HIDDevice_open(HIDDevice* self );

jb_Promise HIDDevice_close(HIDDevice* self );

jb_Promise HIDDevice_forget(HIDDevice* self );

jb_Promise HIDDevice_sendReport(HIDDevice* self , unsigned char reportId, jb_Any * data);

jb_Promise HIDDevice_sendFeatureReport(HIDDevice* self , unsigned char reportId, jb_Any * data);

jb_Promise HIDDevice_receiveFeatureReport(HIDDevice* self , unsigned char reportId);

#ifdef __cplusplus
}
#endif
