#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(USBControlTransferParameters, em_Val);

USBRequestType USBControlTransferParameters_requestType(const USBControlTransferParameters *self);

void USBControlTransferParameters_set_requestType(USBControlTransferParameters* self, USBRequestType * value);

USBRecipient USBControlTransferParameters_recipient(const USBControlTransferParameters *self);

void USBControlTransferParameters_set_recipient(USBControlTransferParameters* self, USBRecipient * value);

unsigned char USBControlTransferParameters_request(const USBControlTransferParameters *self);

void USBControlTransferParameters_set_request(USBControlTransferParameters* self, unsigned char value);

unsigned short USBControlTransferParameters_value(const USBControlTransferParameters *self);

void USBControlTransferParameters_set_value(USBControlTransferParameters* self, unsigned short value);

unsigned short USBControlTransferParameters_index(const USBControlTransferParameters *self);

void USBControlTransferParameters_set_index(USBControlTransferParameters* self, unsigned short value);

USBControlTransferParameters USBControlTransferParameters_new();

#ifdef __cplusplus
}
#endif
