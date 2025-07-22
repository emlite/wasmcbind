#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct USBEndpoint USBEndpoint;
typedef struct USBInterface USBInterface;


typedef struct {
  em_Val inner;
} USBAlternateInterface;


DECLARE_EMLITE_TYPE(USBAlternateInterface, em_Val);

USBAlternateInterface USBAlternateInterface_new(const USBInterface* deviceInterface, unsigned char alternateSetting);

unsigned char USBAlternateInterface_alternateSetting( const USBAlternateInterface *self);

unsigned char USBAlternateInterface_interfaceClass( const USBAlternateInterface *self);

unsigned char USBAlternateInterface_interfaceSubclass( const USBAlternateInterface *self);

unsigned char USBAlternateInterface_interfaceProtocol( const USBAlternateInterface *self);

jb_DOMString USBAlternateInterface_interfaceName( const USBAlternateInterface *self);

jb_FrozenArray USBAlternateInterface_endpoints( const USBAlternateInterface *self);
