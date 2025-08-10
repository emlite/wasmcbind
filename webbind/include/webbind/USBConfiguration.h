#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBDevice USBDevice;
typedef struct USBInterface USBInterface;

DECLARE_EMLITE_TYPE(USBConfiguration, em_Val);

USBConfiguration USBConfiguration_new(USBDevice * device, unsigned char configurationValue);

unsigned char USBConfiguration_configurationValue(const USBConfiguration *self);

jb_String USBConfiguration_configurationName(const USBConfiguration *self);

jb_Array USBConfiguration_interfaces(const USBConfiguration *self);

#ifdef __cplusplus
}
#endif
