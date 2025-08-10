#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBInterface USBInterface;
typedef struct USBEndpoint USBEndpoint;

DECLARE_EMLITE_TYPE(USBAlternateInterface, em_Val);

USBAlternateInterface USBAlternateInterface_new(USBInterface * deviceInterface, unsigned char alternateSetting);

unsigned char USBAlternateInterface_alternateSetting(const USBAlternateInterface *self);

unsigned char USBAlternateInterface_interfaceClass(const USBAlternateInterface *self);

unsigned char USBAlternateInterface_interfaceSubclass(const USBAlternateInterface *self);

unsigned char USBAlternateInterface_interfaceProtocol(const USBAlternateInterface *self);

jb_String USBAlternateInterface_interfaceName(const USBAlternateInterface *self);

jb_Array USBAlternateInterface_endpoints(const USBAlternateInterface *self);

#ifdef __cplusplus
}
#endif
